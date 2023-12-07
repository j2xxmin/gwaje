#include <stdio.h>
#include <stdlib.h>
#define _CRT_SECURE_NO_WARNINGS

void main() {
	int cNumber = 0;
	char uNumber = 0;
	int random = 0;

	printf("베스킨라빈스31 게임을 시작합니다.\n\n");
	random = rand();
	if (random % 2 == 1) {
		printf("당신이 선입니다.\n1부터 3까지의 수 중에서 몇 개를 입력하시겠어요?\n");
		scanf_s("%d", &uNumber);
			printf("You: ");
			for (int i = 0; i < uNumber; i++) {
				++cNumber;
				printf("%d ", cNumber);
			}
			printf("\n");
			while (cNumber < 31) {
				printf("Computer: ");
				random = rand() % 3;
				for (int i = 0; i <= random; i++) {
					cNumber++;
					printf("%d ", cNumber);
				}
				printf("\n\n");
				printf("%d부터 %d까지의 수 중에서 몇 개를 입력하시겠어요?\n", cNumber + 1, cNumber + 3);
				scanf_s("%d", &uNumber);
				printf("You: ");
				for (int i = 0; i < uNumber; i++) {
					cNumber++;
					printf("%d ", cNumber);
				}
				printf("\n");
			}
	}
	else {
		printf("컴퓨터가 선입니다.\n");
		while (cNumber < 31) {
			printf("Computer: ");
			random = rand() % 3;
			for (int i = 0; i <= random; i++) {
				cNumber++;
				printf("%d ", cNumber);
			}
			printf("\n");
			printf("%d부터 %까지의 수 중에서 몇 개를 입력하시겠어요?\n", cNumber+1, cNumber+3);
			scanf_s("%d", &cNumber);
			for (int i = 0; i < uNumber; i++) {
				cNumber++;
				printf("%d ", cNumber);
			}
			printf("\n");
		}
	}
	return 0;
}