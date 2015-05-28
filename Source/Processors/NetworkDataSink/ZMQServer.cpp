/*
  ==============================================================================

    ZMQServer.cpp
    Created: 20 May 2015 11:45:42am
    Author:  labadmin

  ==============================================================================
*/

#include "ZMQServer.h"
#include "../NetworkEvents/NetworkEvents.h"
using namespace std;
void* ZMQServer::zmqContext = nullptr;

ZMQServer::ZMQServer()
	: Thread("ZMQ Server")
{
	GOOGLE_PROTOBUF_VERIFY_VERSION;
	createZmqContext();
	firstTime = true;
	responder = nullptr;
	urlport = ZMQSERVER_DEFAULT_PORT;
	threadRunning = false;
    initDataBuffer();
	//openSocket();

	sendSampleCount = true; 

	shutdown = false;

}

bool ZMQServer::setPort(int newPort)
{
	if (isThreadRunning())
	{
		std::cout << "Can't change port while thread is running" << std::endl;
		CoreServices::sendStatusMessage("Can't change port while server on");
		return false;
	}
	else
	{
		urlport = newPort;
		return true;
	}
}

int ZMQServer::getPort()
{
	return urlport;
}

int ZMQServer::getType()
{
	return type;
}

bool ZMQServer::setType(int newType)
{
	if (isThreadRunning())
	{
		std::cout << "Can't change port type while thread is running" << std::endl;
		return false;
	}
	else
	{
		if (newType == 0)
		{
			type = ServerType::REP;
		}
		else if(newType == 1)
		{ 
			type = ServerType::REQ;
		}
		return true;
	}
}

void ZMQServer::setNewListeningPort(int port)
{
	// first, close existing thread.
	closeSocket();
	// allow some time for thread to quit
#ifdef WIN32
	Sleep(300);
#else
	usleep(300 * 1000);
#endif


	urlport = port;
	openSocket();
}

ZMQServer::~ZMQServer()
{
	shutdown = true;
	closeSocket();
}

bool ZMQServer::closeSocket()
{

	std::cout << "Disabling network node" << std::endl;
	CoreServices::sendStatusMessage("closing socket");
#ifdef ZEROMQ
	if (threadRunning)
	{

		zmq_ctx_destroy(zmqContext); // this will cause the thread to exit
		stopThread(1000);
		zmqContext = nullptr;

		if (!shutdown)
			createZmqContext();// and this will take care that processor graph doesn't attempt to delete the context again
	}
#endif
	return true;
}

void ZMQServer::handleRequest(String request)
{

}

String ZMQServer::handleSpecialMessages(StringTS msg)
{
	/*
	std::vector<String> input = msg.splitString(' ');
	if (input[0] == "StartRecord")
	{
	getUIComponent()->getLogWindow()->addLineToLog("Remote triggered start recording");

	if (input.size() > 1)
	{
	getUIComponent()->getLogWindow()->addLineToLog("Remote setting session name to "+input[1]);
	// session name was also given.
	getProcessorGraph()->getRecordNode()->setDirectoryName(input[1]);
	}
	const MessageManagerLock mmLock;
	getControlPanel()->recordButton->setToggleState(true,true);
	return String("OK");
	//	getControlPanel()->placeMessageInQueue("StartRecord");
	} if (input[0] == "SetSessionName")
	{
	getProcessorGraph()->getRecordNode()->setDirectoryName(input[1]);opensocket
	} else if (input[0] == "StopRecord")
	{
	const MessageManagerLock mmLock;
	//getControlPanel()->placeMessageInQueue("StopRecord");
	getControlPanel()->recordButton->setToggleState(false,true);
	return String("OK");
	} else if (input[0] == "ProcessorCommunication")
	{
	ProcessorGraph *g = getProcessorGraph();
	Array<GenericProcessor*> p = g->getListOfProcessors();
	for (int k=0;k<p.size();k++)
	{
	if (p[k]->getName().toLowerCase() == input[1].toLowerCase())
	{
	String Query="";
	for (int i=2;i<input.size();i++)
	{
	if (i == input.size()-1)
	Query+=input[i];
	else
	Query+=input[i]+" ";
	}

	return p[k]->interProcessorCommunication(Query);
	}
	}

	return String("OK");
	}

	*/
	return String("NotHandled");
}

void ZMQServer::openSocket()
{
    startThread();
}

void ZMQServer::run()
{
#ifdef ZEROMQ

	//zmqContext = zmq_ctx_new();
	responder = zmq_socket(zmqContext, ZMQ_REP);
	tutorial::AddressBook address_book;

	String url = String("tcp://*:") + String(urlport);
	int rc = zmq_bind(responder, url.toRawUTF8());

	if (rc != 0)
	{
		// failed to open socket?
		std::cout << "Failed to open socket." << std::endl;
		return;
	}

	threadRunning = true;
	unsigned char* buffer = new unsigned char[ZMQSERVER_MAX_MESSAGE_LENGTH];
	int request_result = -1;
	
	while (threadRunning)
	{
		//char buffer[10];
		request_result = zmq_recv(responder, buffer, ZMQSERVER_MAX_MESSAGE_LENGTH-1, 0);
		if (request_result > 0)
		{
			std::cout << "Received message!" << std::endl;
			address_book.Clear();
			tutorial::Person* person = address_book.add_person();
			person->set_id(4);
			string name = "tu vieja";
			person->set_name(name);
			string serialized;
			address_book.SerializeToString(&serialized);
			zmq_send(responder, serialized.c_str(), serialized.size()+1, 0);
		}
		else if (request_result == 0) //Zero Message
		{
			std::cout << "Received zero message!" << std::endl;
			zmq_send(responder, "BAD", 3, 0);
		}
		else //some other error with the socket or the context
		{
			std::cout << "Recv Error" << std::endl;
			break;
		}
	}

	zmq_close(responder);
	delete buffer;
	threadRunning = false;
	return;
#endif
}

void ZMQServer::createZmqContext()
{
#ifdef ZEROMQ
	if (zmqContext == nullptr)
		zmqContext = zmq_ctx_new(); //<-- this is only available in version 3+
#endif
}

void ZMQServer::initDataBuffer()
{
    boost::circular_buffer<float> dataBuffer(500);
    dataBuffer.push_back(5.);
    dataBuffer.push_back(4.);
    return;
    
}