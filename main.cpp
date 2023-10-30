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

	for (int i = 0; i < hour; i++) {

		int normalResult = 0;
		int recursiveResult = 0;

		normalResult = Normal(i);
		recursiveResult = Recursive(i);

		printf("一般的な賃金：%d時間働くと%d円\n", i, normalResult);
		printf("再帰的な賃金：%d時間働くと%d円\n\n", i, recursiveResult);

	}
	return 0;
}