#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
#include <functional>
#include <time.h>

int main(void) {
	srand((unsigned int)time(nullptr));
	int inputNum;
	int sleepTime = 3;

	std::function<int()> randDice = []() {
		return  rand() % 6 + 1;
	};

	std::function<void(int, int, int)> setTimeOut = [&](int diceResult, int inputNum, int waitTime) {
		for (int i = 0; i < waitTime; i++) {
			printf("・");
			Sleep(1000);
		}
		printf("\n");

		if (inputNum == 2) {
			printf("貴方が選んだのは丁(偶数)です\n");
			if (diceResult % 2 == 0) {
				printf("出目は%dで貴方の勝ちです\n\n", diceResult);
			}
			else {
				printf("出目は%dで貴方の負けです\n\n", diceResult);
			}
		}
		else if (inputNum == 1) {
			printf("貴方が選んだのは半(奇数)です\n");
			if ((diceResult & 1) == 1) {
				printf("出目は%dで貴方の勝ちです\n\n", diceResult);
			}
			else {
				printf("出目は%dで貴方の負けです\n\n", diceResult);
			}
		}
		else {
			printf("1か2を入力して下さい\n");
		}
	};

	while (1) {
		printf("半(奇数)なら1、丁(偶数)なら2を入力してください\n");
		scanf_s("%d", &inputNum);
		setTimeOut(randDice(), inputNum, 3);
	}

	return 0;
}