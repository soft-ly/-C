#include <stdio.h>
int main() {
	int x, y = 0;
	
	error:
	printf("정수값 입력 : ");
	scanf_s("%d", &x);
	if (x < 0) {
		printf("음의 정수값은 허용하지 않습니다. \n양의 정수값을 다시 입력하세요.\n");
		goto error;
	}
	else if (x == 0) {
		printf("0을 허용하지 않습니다. \n양의 정수값을 다시 입력하세요.\n");
		goto error;
	}
	else if (0 < x) {
		for (int i = 1; i <= x; i + 2) {
			y += i;
			if (i == x - 1) {
				i = x;
			}
		}
		printf("1부터 %d까지 홀수의 누적 합계는 %d", x, y);
	}
	return 0;
 }