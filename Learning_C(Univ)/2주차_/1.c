#include <stdio.h>
int main(void) {
	int num1, num2, hap;

	printf("1. 두 정수 입력 : ");
	scanf_s("%d %d", &num1, &num2);

	hap = num1 + num2;
	printf("2. 덧셈 결과 : %d + %d = %d\n", num1, num2, hap);

	return 0;
}