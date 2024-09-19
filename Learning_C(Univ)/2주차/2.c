#include <stdio.h>

int main() {
	char op1, op2;
	printf("문자 2개를 연속해서 입력하세요. \n");
	printf("1. 첫번째 문자 입력: ");
	scanf_s("%c", &op1, sizeof(op1));

	getchar();
	
	printf("2. 두번째 문자 입력: ");
	scanf_s("%c", &op2, sizeof(op2));
	printf("\n");

	printf("첫번째 문자 출력: %c\n", op1);
	printf("두번째 문자 출력: %c\n", op2);

	return 0;
}