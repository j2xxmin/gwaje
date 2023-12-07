#include <stdio.h>
#include <stdlib.h> 
#include <time.h>

void main() {
	int Number;
	int answer;
	int try;
	srand(time(NULL));
	answer = rand() % 100 + 1;
	printf("1부터 100까지의 수 중에서 입력해주세요.\n");
	while (Number = answer) {
		scanf_s("%d", &Number);
		if (Number > answer) printf("DOWN\n");
		else printf("UP\n");
	}
	printf("정답입니다!");
	return 0;
}