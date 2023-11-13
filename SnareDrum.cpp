#include "SnareDrum.h"

SnareDrum::SnareDrum() {
	name = "スネアドラム";
	printf("%sを用意した\n", name);
}

SnareDrum::~SnareDrum() {
	printf("%sはジャンと鳴った\n", name);
}

void SnareDrum::Beat() {
	printf("%sを叩いた\n", name);
}