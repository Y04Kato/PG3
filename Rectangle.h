#pragma once
#include "IShape.h"

class Rectangle : public IShape {
public:
	Rectangle();
	~Rectangle();

	void Size() override;
	void Draw() override;

protected:
	float radius_;
	float result_;
};
