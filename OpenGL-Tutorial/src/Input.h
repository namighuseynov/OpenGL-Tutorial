#pragma once
#ifndef INPUT_SYSTEM
	#define INPUT_SYSTEM

	#define AXIS_X 0
	#define AXIS_Y 1

#endif


class Input
{
public:
	static float GetAxis(unsigned int axis);
	static void Update();
private:
	static float x;
	static float y;
};

