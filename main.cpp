#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>

typedef void (*newType)(int*);

void Gambling(int* a) {
	int result = rand() % 6 + 1;
	if (*a == 2) {
		printf("�M�����I�񂾂̂͒�(����)�ł�\n");
		if (result % 2 == 0) {
			printf("�o�ڂ�%d�ŋM���̏����ł�\n\n", result);
		}
		else {
			printf("�o�ڂ�%d�ŋM���̕����ł�\n\n", result);
		}
	}
	else if (*a == 1) {
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
}

void TimeOut(newType nt, int inputNum) {
	for (int i = 0; i < 3; i++) {
		printf("�E");
		Sleep(1000);//1�b�҂�
	}
	printf("\n");

	nt(&inputNum);
}

int main(void) {
	newType test;
	int inputNum;

	while (1) {
		printf("��(�)�Ȃ�1�A��(����)�Ȃ�2����͂��Ă�������\n");
		scanf_s("%d", &inputNum);

		test = Gambling;
		TimeOut(test, inputNum);
	}

	return 0;
}