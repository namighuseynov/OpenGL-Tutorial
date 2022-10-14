#pragma once
#include "InputEvent.h"
class MouseEvent :
    public InputEvent {
public:
    unsigned int GetType() const = 0;
};
