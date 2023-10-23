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
	printf("�G�l�~�[�̋ߐ�\n");
	phase_++;
}

void Enemy::Shooting() {
	printf("�G�l�~�[�̎ˌ�\n");
	phase_++;
}

void Enemy::Secession() {
	printf("�G�l�~�[�̗��E\n");
	printf("�G�l�~�[�̍s���I��\n");
}