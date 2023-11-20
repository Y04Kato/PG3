#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
#include <functional>
#include <time.h>

void SetTimeOut(std::function<void(void)> function,int waitTime) {
	for (int i = 0; i < waitTime; i++) {
		printf("�E");
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
		printf("��(�)�Ȃ�1�A��(����)�Ȃ�2����͂��Ă�������\n");
		scanf_s("%d", &inputNum);

		std::function<void()> resultIndication = [&]() {
			int diceResult = randDice();

			if (inputNum == 2) {
				printf("�M�����I�񂾂̂͒�(����)�ł�\n");
				if (diceResult % 2 == 0) {
					printf("�o�ڂ�%d�ŋM���̏����ł�\n\n", diceResult);
				}
				else {
					printf("�o�ڂ�%d�ŋM���̕����ł�\n\n", diceResult);
				}
			}
			else if (inputNum == 1) {
				printf("�M�����I�񂾂͔̂�(�)�ł�\n");
				if ((diceResult & 1) == 1) {
					printf("�o�ڂ�%d�ŋM���̏����ł�\n\n", diceResult);
				}
				else {
					printf("�o�ڂ�%d�ŋM���̕����ł�\n\n", diceResult);
				}
			}
			else {
				printf("1��2����͂��ĉ�����\n");
			}
		};

		SetTimeOut(resultIndication, waitTime);
	}

	return 0;
}