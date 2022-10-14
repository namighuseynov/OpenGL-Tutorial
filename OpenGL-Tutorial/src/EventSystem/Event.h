#pragma once
#ifndef GL_EVENT_SYSTEM

#define GL_EVENT_SYSTEM

enum EventTypes {
	InputEvent,
	MouseEvent,
	KeyEvent,
	ApplicationEvent,
	WindowEvent
};

class Event abstract {
public:
	virtual unsigned int GetType() const = 0;
	static unsigned int descriptor;
};


#endif

