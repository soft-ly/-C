#include <stdio.h>

int main() {
	char op1, op2;
	printf("���� 2���� �����ؼ� �Է��ϼ���. \n");
	printf("1. ù��° ���� �Է�: ");
	scanf_s("%c", &op1, sizeof(op1));

	getchar();
	
	printf("2. �ι�° ���� �Է�: ");
	scanf_s("%c", &op2, sizeof(op2));
	printf("\n");

	printf("ù��° ���� ���: %c\n", op1);
	printf("�ι�° ���� ���: %c\n", op2);

	return 0;
}