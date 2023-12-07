#include <stdio.h>
#include <stdlib.h>
#define _CRT_SECURE_NO_WARNINGS

void main() {
	int cNumber = 0;
	int uNumber = 0;
	int random = 0;

	printf("베스킨라빈스31 게임을 시작합니다.");
	random = rand();
	if (random % 2 == 1) {
		printf("당신이 선입니다.\n1부터 3까지의 수 중에서 몇 개를 입력하시겠어요?");
		scanf("%d", uNumber);
		printf("You: ");
	}
	else {

	}
}