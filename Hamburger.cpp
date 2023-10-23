#include "Hamburger.h"

Hamburger::Hamburger() {
	name = "ハンバーガー";
	printf("%sを買ってきた\n",name);
}

Hamburger::~Hamburger() {
	printf("%sは美味しかった\n", name);
}

void Hamburger::Eat() {
	printf("%sをムシャムシャ食べる\n", name);
}