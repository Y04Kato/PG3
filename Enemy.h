#pragma once
#include <stdio.h>

class Enemy {
public:
	void Adjacent();
	void Shooting();
	void Secession();

	void Update();

private:
	static void (Enemy::* spEnemyMoveTable[])();

	size_t phase_ = 0;

};