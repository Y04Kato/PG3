#pragma once
#include "Food.h"

class Hamburger : public Food {
public:
	Hamburger();
	~Hamburger() override;

	void Eat() override;

private:
};
