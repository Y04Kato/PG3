#include <stdio.h>
#include "Percussion.h"
#include "Gong.h"
#include "SnareDrum.h"

int main() {
	const int FoodNum = 3;
	Percussion* percussion[FoodNum];

	for (int i = 0; i < FoodNum; i++) {
		if (i < FoodNum - 1) {
			percussion[i] = new Gong();
		}
		else {
			percussion[i] = new SnareDrum();
		}
	}

	for (int i = 0; i < FoodNum; i++) {
		percussion[i]->Beat();
	}

	for (int i = 0; i < FoodNum; i++) {
		delete percussion[i];
	}


	return 0;
}