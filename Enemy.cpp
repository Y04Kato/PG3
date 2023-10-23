#include "Enemy.h"

void (Enemy::* Enemy::spEnemyMoveTable[])() {
	&Enemy::Adjacent,
	&Enemy::Shooting,
	&Enemy::Secession
};

void Enemy::Update() {
	(this->*spEnemyMoveTable[phase_])();
}

void Enemy::Adjacent() {
	printf("エネミーの近接\n");
	phase_++;
}

void Enemy::Shooting() {
	printf("エネミーの射撃\n");
	phase_++;
}

void Enemy::Secession() {
	printf("エネミーの離脱\n");
	printf("エネミーの行動終了\n");
}