#include <stdio.h>
#include <stdlib.h> 
#include <time.h>

void main() {
	int Number;
	int answer;
	int try;
	srand(time(NULL));
	answer = rand() % 100 + 1;

	for (try = 0; ; try++) {
		scanf_s("%d", &Number);
		if (answer > Number) {
			printf("UP\n");
		}
		else if (answer < Number) {
			printf("DOWN\n");
		}
		else {
			printf("�����Դϴ�! %d������ ������ ���߼̽��ϴ�.\n", try);
			break;
		}
	}
}