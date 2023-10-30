#pragma once
#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>

class IShape {
public:
	virtual void Size() = 0;
	virtual void Draw() = 0;

protected:
};