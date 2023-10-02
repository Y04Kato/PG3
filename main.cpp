#include <stdio.h>

int Normal(int n) {
	return (n * 1072);
}

int Recursive(int n) {
	if (n <= 1) {
		return (100);
	}

	return (Recursive(n - 1) * 2 - 50);
}

int main(void) {
	int hour = 10;

	for (int i = 1; i < hour; i++) {

		int normalResult = 0;
		int recursiveResult = 0;

		normalResult = Normal(i);
		recursiveResult = Recursive(i);

		printf("��ʓI�Ȓ����F%d���ԓ�����%d�~\n", i, normalResult);
		printf("�ċA�I�Ȓ����F%d���ԓ�����%d�~\n\n", i, recursiveResult);

	}
	return 0;
}