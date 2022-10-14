#pragma once
#include "Event.h"

class InputEvent : 
	public Event {
public:
	virtual unsigned int GetType() const = 0;
};
