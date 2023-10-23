#pragma once
#include <stdio.h>

class Food {
public:
	virtual ~Food();

	virtual void Eat();

protected:
	const char* name;

};