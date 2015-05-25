/*
  ==============================================================================

    ZMQOutput.h
    Created: 15 May 2015 3:12:54pm
    Author:  labadmin

  ==============================================================================
*/

#ifndef ZMQOUTPUT_H_INCLUDED
#define ZMQOUTPUT_H_INCLUDED
#ifdef _WIN32
#include <Windows.h>
#endif


#include "../../JuceLibraryCode/JuceHeader.h"
#include "../GenericProcessor/GenericProcessor.h"
#include "ZMQServer.h"

/**

  This class serves as a template for creating new processors.

  If this were a real processor, this comment section would be used to
  describe the processor's function.

  @see GenericProcessor

*/
class ZMQOutput : public GenericProcessor
{
public:

    /** The class constructor, used to initialize any members. */
    ZMQOutput();

    /** The class destructor, used to deallocate memory */
    ~ZMQOutput();

    /** Determines whether the processor is treated as a source. */
    bool isSource()
    {
        return false;
    }

    /** Determines whether the processor is treated as a sink. */
    bool isSink()
    {
        return true;
    }

    /** Defines the functionality of the processor.

        The process method is called every time a new data buffer is available.

        Processors can either use this method to add new data, manipulate existing
        data, or send data to an external target (such as a display or other hardware).

        Continuous signals arrive in the "buffer" variable, event data (such as TTLs
        and spikes) is contained in the "events" variable, and "nSamples" holds the
        number of continous samples in the current buffer (which may differ from the
        size of the buffer).
         */
    void process(AudioSampleBuffer& buffer, MidiBuffer& events);

    /** Any variables used by the "process" function _must_ be modified only through
        this method while data acquisition is active. If they are modified in any
        other way, the application will crash.  */
    void setParameter(int parameterIndex, float newValue);

	AudioProcessorEditor* createEditor();

	bool hasEditor() const
	{
		return false;
	}

	bool enable();

	void updateSettings();

	void addModule();

	bool setPort(int);
	bool setServerActive(bool);


	int getPort();
	int getType();

	bool getServerActive();


private:

    // private members and methods go here
    //
    // e.g.:
    //
	
	ScopedPointer<AudioSampleBuffer> outputBuffer;
	
	ZMQServer dataServer;

	void handleEvent(int eventType, MidiMessage& event, int sampleNum);
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR(ZMQOutput);

};




#endif  // ZMQOUTPUT_H_INCLUDED
