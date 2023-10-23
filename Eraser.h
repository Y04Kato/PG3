#pragma once
#include "Food.h"

class Eraser : public Food {
public:
	Eraser();
	~Eraser() override;

	void Eat() override;

private:
};

