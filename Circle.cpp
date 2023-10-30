#include "Circle.h"

Circle::Circle() {
	radius_ = 10.0f;
	result_ = 0.0f;
}

Circle::~Circle() {

}

void Circle::Size() {
	result_ = radius_ * radius_ * M_PI;
}

void Circle::Draw() {
	printf("円の面積:%f\n", result_);
}