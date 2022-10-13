#include "Input.h"

float Input::x = 0.0f;
float Input::y = 0.0f;

float Input::GetAxis(unsigned int axis) {
	switch (axis) {
	case AXIS_X:
		return x;
		break;
	case AXIS_Y:
		return y;
		break;
	default:
		break;
	}
}

void Input::Update() {
	
}

