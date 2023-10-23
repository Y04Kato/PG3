#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
#include <functional>

int main(void) {
	int inputNum;
	int sleepTime = 3;

	std::function<int(int)> timeout = [](int a) {
		for (int i = 0; i < a; i++) {
			printf("・");
			Sleep(1000);//1秒待つ
		}

		printf("\n");

		return 0;
	};

	std::function<int(int)>gambling = [](int a) {
		int result = rand() % 6 + 1;
		if (a == 2) {
			printf("貴方が選んだのは丁(偶数)です\n");
			if (result % 2 == 0) {
				printf("出目は%dで貴方の勝ちです\n\n", result);
			}
			else {
				printf("出目は%dで貴方の負けです\n\n", result);
			}
		}
		else if (a == 1) {
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

		return 0;
	};

	while (1) {
		printf("半(奇数)なら1、丁(偶数)なら2を入力してください\n");
		scanf_s("%d", &inputNum);

		timeout(sleepTime);
		gambling(inputNum);
	}

	return 0;
}