#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>

typedef void (*pFunc)(int*);

void Gambling(int* a) {
	int result = rand() % 6 + 1;
	if (*a == 2) {
		printf("貴方が選んだのは丁(偶数)です\n");
		if (result % 2 == 0) {
			printf("出目は%dで貴方の勝ちです\n\n", result);
		}
		else {
			printf("出目は%dで貴方の負けです\n\n", result);
		}
	}
	else if (*a == 1) {
		printf("貴方が選んだのは半(奇数)です\n");
		if ((result & 1) == 1) {
			printf("出目は%dで貴方の勝ちです\n\n", result);
		}
		else {
			printf("出目は%dで貴方の負けです\n\n", result);
		}
	}
	else {
		printf("1か2を入力して下さい\n");
	}
}

void SetTimeOut(pFunc nt, int inputNum, int sleepTime) {
	for (int i = 0; i < sleepTime; i++) {
		printf("・");
		Sleep(1000);//1秒待つ
	}
	printf("\n");

	nt(&inputNum);
}

int main(void) {
	pFunc gambling;
	int inputNum;
	int sleepTime = 3;

	while (1) {
		printf("半(奇数)なら1、丁(偶数)なら2を入力してください\n");
		scanf_s("%d", &inputNum);

		gambling = Gambling;
		SetTimeOut(gambling, inputNum, sleepTime);
	}

	return 0;
}