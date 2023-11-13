#include "Gong.h"

Gong::Gong() {
	name = "銅鑼";
	printf("%sを用意した\n",name);
}

Gong::~Gong() {
	printf("%sはジャ～ンと鳴り響いた\n", name);
}

void Gong::Beat() {
	printf("%sを叩いた\n", name);
}