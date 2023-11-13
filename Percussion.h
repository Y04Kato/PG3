#pragma once
#include <stdio.h>

class Percussion {
public:
	virtual ~Percussion();

	virtual void Beat();

protected:
	const char* name;

};