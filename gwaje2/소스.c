#include <stdio.h>
#include <stdlib.h> 
#include <time.h>

void main() {
	int Number;
	int answer;
	int try;
	srand(time(NULL));
	answer = rand() % 100 + 1;
	printf("1���� 100������ �� �߿��� �Է����ּ���.\n");
	while (Number = answer) {
		scanf_s("%d", &Number);
		if (Number > answer) printf("DOWN\n");
		else if (Number < answer) printf("UP\n");
		else printf("�����Դϴ�!");
	}
	return 0;
}