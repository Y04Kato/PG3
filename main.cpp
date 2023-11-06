#include <stdio.h>

int NormalSalary(int pay, int hour) {
	if (hour <= 0) {
		return pay;
	}

	return pay + NormalSalary(pay, hour - 1);
}

int RecursiveSalary(int pay, int hour) {
	if (hour <= 0) {
		return pay;
	}

	return pay + RecursiveSalary(pay * 2 - 50, hour - 1);
}

int main(void) {
	int hour = 10 - 1;

	for (int i = 1; i <= hour; i++) {

		int normalResult = 0;
		int recursiveResult = 0;

		normalResult = NormalSalary(1072, i - 1);
		recursiveResult = RecursiveSalary(100, i - 1);

		printf("一般的な賃金：%d時間働くと%d円\n", i, normalResult);
		printf("再帰的な賃金：%d時間働くと%d円\n\n", i, recursiveResult);

	}
	return 0;
}