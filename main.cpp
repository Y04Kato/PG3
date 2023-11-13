#include <stdio.h>
#include "Percussion.h"
#include "Gong.h"
#include "SnareDrum.h"

int main() {
	const int percussionNum = 3;
	Percussion* percussion[percussionNum];

	for (int i = 0; i < percussionNum; i++) {
		if (i < percussionNum - 1) {
			percussion[i] = new Gong();
		}
		else {
			percussion[i] = new SnareDrum();
		}
	}

	for (int i = 0; i < percussionNum; i++) {
		percussion[i]->Beat();
	}

	for (int i = 0; i < percussionNum; i++) {
		delete percussion[i];
	}


	return 0;
}