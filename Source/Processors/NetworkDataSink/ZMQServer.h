/*
  ==============================================================================

    ZMQServer.h
    Created: 20 May 2015 11:45:42am
    Author:  labadmin

  ==============================================================================
*/
#ifndef ZMQSERVER_H_INCLUDED
#define ZMQSERVER_H_INCLUDED


#define ZMQSERVER_DEFAULT_PORT 5554
#define ZMQSERVER_DEFAULT_TYPE 0
#define ZMQSERVER_MAX_MESSAGE_LENGTH 64000
#define ZMQSERVER_BUFFER_SIZE 1310720


#include "../../JuceLibraryCode/JuceHeader.h"
#include <boost/circular_buffer.hpp>
#include "dataPacket.pb.h"
#include <list>
#include <queue>

/**

This class serves as a template for creating new processors.

If this were a real processor, this comment section would be used to
describe the processor's function.

@see GenericProcessor

*/
# ifndef STRINGTS_H_INCLUDED
# define STRINGTS_H_INCLUDED
class StringTS
{
public:
	StringTS();
	std::vector<String> splitString(char sep);
	StringTS(MidiMessage& event);
	String getString();
	StringTS(String S);
	StringTS(String S, int64 ts_software);
	StringTS(const StringTS& s);
	StringTS(unsigned char* buf, int _len, int64 ts_software);
	StringTS& operator=(const StringTS& rhs);
	~StringTS();

	juce::uint8* str;
	int len;
	juce::int64 timestamp;
};
# endif

//using namespace dataServer;

class ZMQServer : public Thread
{
public:
	/** The class constructor, used to initialize any members. */
	ZMQServer();

	/** The class destructor, used to deallocate memory */
	~ZMQServer();

	//outBuffer databuffer; //create the circular buffer with serialization

	//using namespace dataServer;

	int64 getExtrapolatedHardwareTimestamp(int64 softwareTS);

	String handleSpecialMessages(StringTS msg);
	std::vector<String> splitString(String S, char sep);

	bool closeSocket();
	void run();
	void openSocket();
	bool setPort(int);
	bool setType(int);
	
	int getPort();
	int getType();

	bool isReady();
	float getDefaultSampleRate();
	int getDefaultNumOutputs();
	float getDefaultBitVolts();
    void initDataBuffer();
	void enabledState(bool t);

	void setNewListeningPort(int port);

	void handleRequest(String );

	int urlport;
	String socketStatus;
	bool threadRunning;
    
    

private:

	enum ServerType{ REP='REP', REQ='REQ'};
	
	void createZmqContext();

	StringTS createStringTS(String S, int64 t);

	static void* zmqContext;
	void* responder;

	bool state;
	bool shutdown;
	Time timer;
	bool sendSampleCount;
	ServerType type;

	std::queue<StringTS> networkMessagesQueue;
	CriticalSection lock;
	bool firstTime;
    
    int64 dataBufferTimestamp;
    void* dataBuffer;

	//circularBuffer dataBuffer;
	//circularBuffer eventsBuffer;

};



#endif  // ZMQSERVER_H_INCLUDED
