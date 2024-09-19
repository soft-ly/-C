//예제 5-1

#include <stdio.h>

int main() {
	int x, y;
	printf("두 정수의 사칙연산과 나머지를 원하는 두 정수를 입력하시오.\n");
	scanf_s("%d %d", &x, &y);

	printf("1. 덧셈: %d + %d = %d\n", x, y, x+y);
	printf("2. 뺄셈: %d - %d = %d\n", x, y, x-y);
	printf("3. 곱셈: %d * %d = %d\n", x, y, x*y);
	printf("4. 나눗셈: %d / %d = %d\n", x, y, x/y);
	printf("5. 나머지: %d %% %d = %d\n", x, y, x%y);
}