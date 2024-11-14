#include <stdio.h> 

int main() {
	int num1, num2;
	float result;

	printf("정수 2개를 입력하세요. \n");
	printf("첫번째 정수 num1 = ");
	scanf_s("%d", &num1);
	printf("두번째 정수 num2 = ");
	scanf_s("%d", &num2);

	result = (float)num1 / num2;
	printf("나눗셈 연산 = num1 / num2 = %d / %d = %f\n", num1, num2, result);
	return 0;
}