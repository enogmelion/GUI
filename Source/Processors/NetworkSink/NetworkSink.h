/*
    ------------------------------------------------------------------
    This file is part of the Open Ephys GUI
    Copyright (C) 2013 Open Ephys
    ------------------------------------------------------------------
    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.
    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.
    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef NETWORK_SINK_H
#define NETWORK_SINK_H

#include "../../JuceLibraryCode/JuceHeader.h"
#include "../NetworkEvents/NetworkEvents.h"
#include "../GenericProcessor/GenericProcessor.h"
#include "../Visualization/Visualizer.h"
#include "../Visualization/SpikeObject.h"
#include "NetworkSinkEditor.h"
#include <queue>
#include <vector>

class NetworkSinkNode : public GenericProcessor
{
public:

    NetworkSinkNode();
    ~NetworkSinkNode();

	AudioProcessorEditor* createEditor();

	void toggleConditionVisibility(int cond);

    bool isSink()
    {
        return true;
    }

    void process(AudioSampleBuffer& buffer, MidiBuffer& midiMessages);

    void handleEvent(int, MidiMessage&, int);

    void updateSettings();

    bool enable();
    bool disable();

	void handleNetworkMessage(StringTS s);
private:
	
	bool opensocket();
	
	
	void *zmqcontext;
	void *publisher;
	bool threadRunning;
	int urlport;
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR(NetworkSinkNode);

};


#endif // PSTHNODE_H_