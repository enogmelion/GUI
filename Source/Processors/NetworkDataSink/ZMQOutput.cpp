/*
  ==============================================================================

    ZMQOutput.cpp
    Created: 15 May 2015 3:12:54pm
    Author:  labadmin

  ==============================================================================
*/



#include <stdio.h>
#include "ZMQOutput.h"
#include "ZMQOutputEditor.h"

ZMQOutput::ZMQOutput()
	: GenericProcessor("Network Data Sink")

{

    //parameters.add(Parameter("thresh", 0.0, 500.0, 200.0, 0));
	
}

ZMQOutput::~ZMQOutput()
{

}

AudioProcessorEditor* ZMQOutput::createEditor()
{
	editor = new ZMQOutputEditor(this, true);

	std::cout << "Creating editor." << std::endl;

	return editor;
}

void ZMQOutput::updateSettings()
{

}

bool ZMQOutput::enable()
{
	return true;
}

bool ZMQOutput::setPort(int newPort)
{
	return dataServer.setPort(newPort);
}

int ZMQOutput::getPort()
{
	return dataServer.getPort();
}

void ZMQOutput::setParameter(int parameterIndex, float newValue)
{

	if (parameterIndex == 1) // module type
	{

		int val = (int)newValue;

		switch (val)
		{
		case 0:
			break;
		case 1:
			break;
		}
	}
	else if (parameterIndex == 2)   // port
	{
		dataServer.setPriority( (int)newValue);
	}
	else if (parameterIndex == 8)   // active
	{
		//dataServer->setActive((bool)((int)newValue)); 
	}
	else if (parameterIndex == 9)   //samles since last trigger
	{
		//dataServer->setLastSent(newValue); 
	}

}

bool ZMQOutput::setServerActive(bool active)
{
	//Set the server active on/off
	if (active)
	{
		dataServer.openSocket();
		return true;
	}
	else
	{
		return dataServer.closeSocket();
	}
}

bool ZMQOutput::getServerActive()
{
	//Check if the server is active
	return dataServer.isThreadRunning();
}

void ZMQOutput::handleEvent(int eventType, MidiMessage& event, int sampleNum)
{
	// MOVED GATING TO PULSE PAL OUTPUT!
	// now use to randomize phase for next trial

	//std::cout << "GOT EVENT." << std::endl;


}

void ZMQOutput::process(AudioSampleBuffer& buffer,
	MidiBuffer& events)
{
	bool pos;
	int refractorySamples;

}
