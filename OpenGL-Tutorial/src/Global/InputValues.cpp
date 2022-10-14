#include "InputValues.h"
#include <iostream>

float InputValues::horizontal = 0.0f;
float InputValues::vertical = 0.0f;
float InputValues::mousex = 0.0f;
float InputValues::mousey = 0.0f;
float InputValues::scrolx = 0.0f;
float InputValues::scroly = 0.0f;

float InputValues::Get(unsigned int axis) {
	switch (axis)
	{
	case INPUT_HORIZONTAL:
		return horizontal;
		break;
	case INPUT_VERTICAL:
		return vertical;
		break;
	case INPUT_MOUSE_X:
		return mousex;
		break;
	case INPUT_MOUSE_Y:
		return mousey;
		break;
	case INPUT_SCROLL_X:
		return scrolx;
		break;
	case INPUT_SCROLL_Y:
		return scroly;
		break;
	default:
		return 0.0f;
		break;
	}
}

float InputValues::Set(unsigned int axis, float value) {
	switch (axis)
	{
	case INPUT_HORIZONTAL:
		horizontal = value;
		break;
	case INPUT_VERTICAL:
		vertical = value;
		break;
	case INPUT_MOUSE_X:
		mousex = value;
		break;
	case INPUT_MOUSE_Y:
		mousey = value;
		break;
	case INPUT_SCROLL_X:
		scrolx = value;
		break;
	case INPUT_SCROLL_Y:
		scroly = value;
		break;
	default:
		return 0.0f;
		break;
	}
}


