#include "Hamburger.h"

Hamburger::Hamburger() {
	printf("%sを買ってきた\n",name);
}

Hamburger::~Hamburger() {
	printf("%sは美味しかった\n\n", name);
}

void Hamburger::Eat() {
	printf("%sをムシャムシャ食べる\n", name);
}