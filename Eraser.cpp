#include "Eraser.h"

Eraser::Eraser() {
	printf("%s�𔃂��Ă���\n", name);
}

Eraser::~Eraser() {
	printf("%s�͕s�����A���������H�ׂ镨����Ȃ�����\n\n", name);
}

void Eraser::Eat() {
	printf("%s��H�ׂĂ݂悤�Ƃ���\n", name);
}