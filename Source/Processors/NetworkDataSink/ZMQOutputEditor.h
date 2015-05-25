/*
==============================================================================

ZMQOutEditor.cpp
Created: 15 May 2015 3:16:10pm
Author:  labadmin

==============================================================================
*/
#ifndef __ZMQOUTPUTEDITOR_H__
#define __ZMQOUTPUTEDITOR_H__

#include "../../../JuceLibraryCode/JuceHeader.h"
#include "../Editors/GenericEditor.h"
#include "../Editors/ElectrodeButtons.h"

class ZMQOutputInterface;
class ZMQOutput;

/**

User interface for the PhaseDetector processor.

@see PhaseDetector

*/

class ZMQOutputEditor : public GenericEditor,
	public ComboBox::Listener,
	public Label::Listener
{
public:
	ZMQOutputEditor(GenericProcessor* parentNode, bool useDefaultParameterEditors);

	virtual ~ZMQOutputEditor();

	void buttonEvent(Button* button);
	void labelTextChanged(Label*);
	void updateChannels(int);
	String getServerParameter(int );

	void comboBoxChanged(ComboBox* c);
	void updateSettings();

	void saveCustomParameters(XmlElement* xml);
	void loadCustomParameters(XmlElement* xml);

	void saveEditorParameters(XmlElement* xmlParent);
	void loadEditorParameters(XmlElement* xmlParent);

	//void paint(Graphics& g);

	void setDefaults();

	void setPort(int);
	//void setType(ServerType);
	void setActive(bool);
	void setLastSentSample(float);

	int getPort();
	//ServerType getType();
	bool getActive();
	float getLastSentSample();


private:

	int previousChannelCount;

	Array<Colour> backgroundColours;
	Colour backgroundColour;

	String lastPortString;

	Font font;

	ScopedPointer<Label> portLabel;
	ScopedPointer<Label> typeLabel;

	ScopedPointer<ComboBox> typeSelector;

	ScopedPointer<Label> portValue;

	ScopedPointer<UtilityButton> activeButton;

	JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR(ZMQOutputEditor);

};

#endif //__ZMQOUTPUTEDITOR_H__