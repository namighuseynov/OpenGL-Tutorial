#pragma once
#ifndef INPUT_VALUES_H
	#define INPUT_VALUES_H
#endif
	

#define INPUT_HORIZONTAL 0
#define INPUT_VERTICAL 1
#define INPUT_MOUSE_X 2
#define INPUT_MOUSE_Y 3
#define INPUT_SCROLL_X 4
#define INPUT_SCROLL_Y 5

#ifndef INPUT_VALUES_CLASS

class InputValues {
public:
	static float Get(unsigned int axis);
	static float Set(unsigned int, float value);
private:
	static float horizontal;
	static float vertical;
	static float mousex;
	static float mousey;
	static float scrolx;
	static float scroly;

};

#endif // !INPUT_VALUES_CLASS



