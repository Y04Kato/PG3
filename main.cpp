#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>

typedef void (*newType)(int*);

void Gambling(int* a) {
	int result = rand() % 6 + 1;
	if (*a == 2) {
		printf("‹M•û‚ª‘I‚ñ‚¾‚Ì‚Í’š(‹ô”)‚Å‚·\n");
		if (result % 2 == 0) {
			printf("o–Ú‚Í%d‚Å‹M•û‚ÌŸ‚¿‚Å‚·\n\n", result);
		}
		else {
			printf("o–Ú‚Í%d‚Å‹M•û‚Ì•‰‚¯‚Å‚·\n\n", result);
		}
	}
	else if (*a == 1) {
		printf("‹M•û‚ª‘I‚ñ‚¾‚Ì‚Í”¼(Šï”)‚Å‚·\n");
		if ((result & 1) == 1) {
			printf("o–Ú‚Í%d‚Å‹M•û‚ÌŸ‚¿‚Å‚·\n\n", result);
		}
		else {
			printf("o–Ú‚Í%d‚Å‹M•û‚Ì•‰‚¯‚Å‚·\n\n", result);
		}
	}
	else {
		printf("1‚©2‚ğ“ü—Í‚µ‚Ä‰º‚³‚¢\n");
	}
}

void TimeOut(newType nt, int inputNum) {
	for (int i = 0; i < 3; i++) {
		printf("E");
		Sleep(1000);//1•b‘Ò‚Â
	}
	printf("\n");

	nt(&inputNum);
}

int main(void) {
	newType test;
	int inputNum;

	while (1) {
		printf("”¼(Šï”)‚È‚ç1A’š(‹ô”)‚È‚ç2‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢\n");
		scanf_s("%d", &inputNum);

		test = Gambling;
		TimeOut(test, inputNum);
	}

	return 0;
}