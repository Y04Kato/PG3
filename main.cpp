#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
#include <functional>

int main(void) {
	int inputNum;
	int sleepTime = 3;

	std::function<int(int)> timeout = [](int a) {
		for (int i = 0; i < a; i++) {
			printf("�E");
			Sleep(1000);//1�b�҂�
		}

		printf("\n");

		return 0;
	};

	std::function<int(int)>gambling = [](int a) {
		int result = rand() % 6 + 1;
		if (a == 2) {
			printf("�M�����I�񂾂̂͒�(����)�ł�\n");
			if (result % 2 == 0) {
				printf("�o�ڂ�%d�ŋM���̏����ł�\n\n", result);
			}
			else {
				printf("�o�ڂ�%d�ŋM���̕����ł�\n\n", result);
			}
		}
		else if (a == 1) {
			printf("�M�����I�񂾂͔̂�(�)�ł�\n");
			if ((result & 1) == 1) {
				printf("�o�ڂ�%d�ŋM���̏����ł�\n\n", result);
			}
			else {
				printf("�o�ڂ�%d�ŋM���̕����ł�\n\n", result);
			}
		}
		else {
			printf("1��2����͂��ĉ�����\n");
		}

		return 0;
	};

	while (1) {
		printf("��(�)�Ȃ�1�A��(����)�Ȃ�2����͂��Ă�������\n");
		scanf_s("%d", &inputNum);

		timeout(sleepTime);
		gambling(inputNum);
	}

	return 0;
}