#include <stdio.h>

int main() {
	int hakboo, major, id, class, val = 0;
	printf("�к� �ڵ� (0~15)�� �Է��Ͻÿ�. : ");
	scanf_s("%d", &hakboo);
	val = hakboo << 6;
	printf("���� �ڵ� (0~15)�� �Է��Ͻÿ�. : ");
	scanf_s("%d", &major);
	val = val ^ major;
	val = val << 12;
	printf("�й� �ڵ� (0~255)�� �Է��Ͻÿ�. : ");
	scanf_s("%d", id);
	val = val ^ id;
	val = val << 8;
	printf("�г� �ڵ� (0~15)�� �Է��Ͻÿ�. : ");
	scanf_s("%d", &class)
}