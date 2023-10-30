#include "Rectangle.h"

Rectangle::Rectangle() {
	radius_ = 10.0f;
	result_ = 0.0f;
}

Rectangle::~Rectangle() {
	
}

void Rectangle::Size() {
	result_ = radius_ * radius_;
}

void Rectangle::Draw() {
	printf("矩計の面積:%f\n", result_);
}