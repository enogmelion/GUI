

#include "ZMQOutputEditor.h"
#include "ZMQOutput.h"

#include <stdio.h>
#include <cmath>

ZMQOutputEditor::ZMQOutputEditor(GenericProcessor* parentNode, bool useDefaultParameterEditors = true)
	: GenericEditor(parentNode, useDefaultParameterEditors), previousChannelCount(-1)

{
	desiredWidth = 130;

	// intputChannelLabel = new Label("input", "Input channel:");
	// intputChannelLabel->setBounds(15,25,180,20);
	// intputChannelLabel->setFont(Font("Small Text", 12, Font::plain));
	// intputChannelLabel->setColour(Label::textColourId, Colours::darkgrey);
	// addAndMakeVisible(intputChannelLabel);

	// outputChannelLabel = new Label("output", "Output channel:");
	// outputChannelLabel->setBounds(15,75,180,20);
	// outputChannelLabel->setFont(Font("Small Text", 12, Font::plain));
	// outputChannelLabel->setColour(Label::textColourId, Colours::darkgrey);
	// addAndMakeVisible(outputChannelLabel);

	// inputChannelSelectionBox = new ComboBox();
	// inputChannelSelectionBox->setBounds(15,45,150,25);
	// inputChannelSelectionBox->addListener(this);
	// inputChannelSelectionBox->addItem("None", 1);
	// inputChannelSelectionBox->setSelectedId(1, false);
	// addAndMakeVisible(inputChannelSelectionBox);


	std::cout << "Creating combo boxes" << std::endl;

	typeLabel = new Label("type label", "type");
	typeLabel->setBounds(5, 60, 50, 15);
	typeLabel->setFont(Font("Small Text", 12, Font::plain));
	typeLabel->setColour(Label::textColourId, Colours::darkgrey);
	addAndMakeVisible(typeLabel);

	typeSelector = new ComboBox();
	typeSelector->setBounds(5, 75, 50, 20);
	typeSelector->addItem("REQ", 'REQ');
	typeSelector->setSelectedId(1);
	typeSelector->addListener(this);
	addAndMakeVisible(typeSelector);

	std::cout << "Populating combo boxes" << std::endl;

	std::cout << "Creating labels" << std::endl;
	

	portLabel = new Label("port label", "port");
	portLabel->setBounds(5, 25, 50, 15);
	portLabel->setFont(Font("Small Text", 12, Font::plain));
	portLabel->setColour(Label::textColourId, Colours::darkgrey);
	addAndMakeVisible(portLabel);

	lastPortString = getServerParameter(0);
	portValue = new Label("port value", lastPortString);
	portValue->setBounds(5, 40, 50, 18);
	portValue->setFont(Font("Default", 13, Font::plain));
	portValue->setColour(Label::textColourId, Colours::white);
	portValue->setColour(Label::backgroundColourId, Colours::grey);
	portValue->setEditable(true);
	portValue->addListener(this);
	portValue->setTooltip("Set the port");
	addAndMakeVisible(portValue);

	std::cout << "Updating buttions" << std::endl;


	activeButton = new UtilityButton("OFF", Font("Small Text", 13, Font::plain));
	activeButton->addListener(this);
	activeButton->setBounds(80, 38, 35, 20);
	activeButton->setClickingTogglesState(true);
	activeButton->setToggleState(false, dontSendNotification);
	addAndMakeVisible(activeButton);

	std::cout << "Updating channels" << std::endl;

	backgroundColours.add(Colours::green);
	backgroundColours.add(Colours::red);
	backgroundColours.add(Colours::orange);
	backgroundColours.add(Colours::magenta);
	backgroundColours.add(Colours::blue);

	std::cout << "Updating processor" << std::endl;

	//Set any parameters
	
	//Tell the processor to switch the server on
	activeButton->setToggleState(true, sendNotification);
}

ZMQOutputEditor::~ZMQOutputEditor()
{

}

void ZMQOutputEditor::updateSettings()
{


}

void ZMQOutputEditor::setDefaults()
{

}

void ZMQOutputEditor::comboBoxChanged(juce::ComboBox* c)
{
	GenericProcessor* pd = (GenericProcessor*)getProcessor();
	
	int parameterIndex;

	if (c == typeSelector)
	{
		pd->setParameter(1, 0.0f);
	}

}

void ZMQOutputEditor::saveCustomParameters(XmlElement* xml)
{

	xml->setAttribute("Type", "ZMQOutputEditor");

	XmlElement* parameterChild = xml->createNewChildElement("PARAMETERS");
	parameterChild->setAttribute("activeButtonState", activeButton->getToggleState());


}

void ZMQOutputEditor::loadCustomParameters(XmlElement* xml)
{

	int i = 0;

}

void ZMQOutputEditor::buttonEvent(Button* button)
{


	if (button == activeButton)
	{
		// Toggle the button
		if (button->getToggleState())
		{
			setActive(true);
			activeButton->setLabel("ON");
		}
		else
		{
			setActive(false);
			activeButton->setLabel("OFF");
		}
	}

}

void ZMQOutputEditor::labelTextChanged(Label* label)
{
	GenericProcessor* processor = (GenericProcessor*)getProcessor();

	Value val = label->getTextValue();
	double requestedValue = double(val.getValue());

	// Check errors in input parameters settings
	if (label == portValue)
	{
		// Check errors in input parameters settings
		if (requestedValue < 0 || requestedValue > 10000)
		{
			//processor->sendActionMessage("Value out of range (0-10000 ms accepted)");
			label->setText(lastPortString, dontSendNotification);
			lastPortString = label->getText();
			return;
		}
		else
		{
			setPort((int)requestedValue);
			lastPortString = label->getText();
			//processor->sendActionMessage("Value set");
		}
	}
	
}

void ZMQOutputEditor::setPort(int port)
{
	ZMQOutput* processor = (ZMQOutput*)getProcessor();
	if (processor->setPort(port))
	{
		portValue->setText(String(port), dontSendNotification);
		lastPortString = portValue->getText();
	}
	else
	{
		portValue->setText(lastPortString, dontSendNotification);
		lastPortString = portValue->getText();
	}

}

void ZMQOutputEditor::setActive(bool active)
{
	ZMQOutput* processor = (ZMQOutput*)getProcessor();
	
	processor->setServerActive(active);
	
	if (processor->getServerActive())
	{
		CoreServices::sendStatusMessage("Server is On");
	}
	else if (!processor->getServerActive())
	{
		//CoreServices::sendStatusMessage("Server is Off");
	}
}

int ZMQOutputEditor::getPort()
{
	Value val = portValue->getTextValue();
	return (int)(val.getValue());
}

bool ZMQOutputEditor::getActive()
{
	return activeButton->getToggleState();
}

String ZMQOutputEditor::getServerParameter(int par)
{
	ZMQOutput* processor = (ZMQOutput*)getProcessor();

	if (par == 0)
	{
		return String(processor->getPort());
	}
	else if (par == 1)
	{
		//TODO get the type and return the type
	}
}