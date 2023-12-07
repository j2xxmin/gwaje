#include <stdio.h>
#include <stdlib.h>
#define _CRT_SECURE_NO_WARNINGS

void main() {
	int cNumber = 0;
	int uNumber;
	int random = 0;

	printf("베스킨라빈스31 게임을 시작합니다.\n\n");
	random = rand();
	if (random % 2 == 1) {
		printf("당신이 선입니다.\n1부터 3까지의 수 중에서 몇 개를 입력하시겠어요?\n");
		scanf_s("%d", &uNumber);
		printf("You: ");
		for (int i = 0; i < uNumber; i++) {
			++cNumber;
			printf("%d\t", cNumber);
		}
	}
	else {
		printf("컴퓨터가 선입니다.");
	}

	return 0;
}