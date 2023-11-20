#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
#include <functional>
#include <time.h>

void SetTimeOut(std::function<void(void)> function,int waitTime) {
	for (int i = 0; i < waitTime; i++) {
		printf("・");
		Sleep(1000);
	}
	printf("\n");
	function();
}

int main(void) {
	srand((unsigned int)time(nullptr));
	int inputNum;
	int waitTime = 3;

	std::function<int()> randDice = []() {
		return  rand() % 6 + 1;
	};

	while (1) {
		printf("半(奇数)なら1、丁(偶数)なら2を入力してください\n");
		scanf_s("%d", &inputNum);

		std::function<void()> resultIndication = [&]() {
			int diceResult = randDice();

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

		SetTimeOut(resultIndication, waitTime);
	}

	return 0;
}