#include <stdio.h>

int main() {
	signed min_su, input, result;
	min_su = -32768;
	printf("short�� ��ȿ����: -32,768 ~ 32767\n");
	printf("min_su = -32,768�� �� \n");
	printf("���� ������ ������ ���� �Է�: ");
	scanf_s("%hi", &input);
	result = min_su - input;
	printf("���� ����: %hi - %hi = %hi\n", min_su, input, result);
	return 0;
}