#include <stdio.h>
#include "Food.h"
#include "Hamburger.h"
#include "Eraser.h"

int main() {
	const int FoodNum = 3;
	Food* food[FoodNum];

	for (int i = 0; i < FoodNum; i++) {
		if (i < FoodNum - 1) {
			food[i] = new Hamburger();
		}
		else {
			food[i] = new Eraser();
		}
	}

	for (int i = 0; i < FoodNum; i++) {
		food[i]->Eat();
	}

	for (int i = 0; i < FoodNum; i++) {
		delete food[i];
	}


	return 0;
}