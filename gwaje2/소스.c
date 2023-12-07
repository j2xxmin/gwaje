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
			printf("정답입니다! %d번만에 문제를 맞추셨습니다.\n", try);
			break;
		}
	}
}