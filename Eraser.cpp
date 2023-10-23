#include "Eraser.h"

Eraser::Eraser() {
	name = "消しゴム";
	printf("%sを買ってきた\n", name);
}

Eraser::~Eraser() {
	printf("%sは不味く、そもそも食べる物じゃなかった\n", name);
}

void Eraser::Eat() {
	printf("%sを食べてみようとした\n", name);
}