#include "Hamburger.h"

Hamburger::Hamburger() {
	printf("%s�𔃂��Ă���\n",name);
}

Hamburger::~Hamburger() {
	printf("%s�͔�����������\n\n", name);
}

void Hamburger::Eat() {
	printf("%s�����V�����V���H�ׂ�\n", name);
}