#include <stdio.h>
#include "Enemy.h"

int main() {
	Enemy* enemy = new Enemy;

	for (int i = 0; i < 3; i++) {
		enemy->Update();
	}

	return 0;
}