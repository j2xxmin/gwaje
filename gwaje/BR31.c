#include <stdio.h>
#include <stdlib.h>
#define _CRT_SECURE_NO_WARNINGS

void main() {
	int cNumber = 0;
	int uNumber;
	int random = 0;

	printf("����Ų���31 ������ �����մϴ�.\n\n");
	random = rand();
	if (random % 2 == 1) {
		printf("����� ���Դϴ�.\n1���� 3������ �� �߿��� �� ���� �Է��Ͻðھ��?\n");
		scanf_s("%d", &uNumber);
		printf("You: ");
		for (int i = 0; i < uNumber; i++) {
			++cNumber;
			printf("%d\t", cNumber);
		}
		printf("\n");
		while (cNumber < 31) {
			printf("Computer: ");
			random = rand() % 3;
			for (int i = 0; i <= random; i++) {
				cNumber++;
				printf("%d\t", cNumber);
			}
			printf("\n");
			printf("You: ");
			scanf_s("%d", &uNumber);
			for (int i = 0; i < uNumber; i++) {
				cNumber++;
				printf("%d\t", cNumber);
			}
		}
	}
	else {
		printf("��ǻ�Ͱ� ���Դϴ�.");
	}

	return 0;
}