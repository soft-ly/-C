//���� 5-1

#include <stdio.h>

int main() {
	int x, y;
	printf("�� ������ ��Ģ����� �������� ���ϴ� �� ������ �Է��Ͻÿ�.\n");
	scanf_s("%d %d", &x, &y);

	printf("1. ����: %d + %d = %d\n", x, y, x+y);
	printf("2. ����: %d - %d = %d\n", x, y, x-y);
	printf("3. ����: %d * %d = %d\n", x, y, x*y);
	printf("4. ������: %d / %d = %d\n", x, y, x/y);
	printf("5. ������: %d %% %d = %d\n", x, y, x%y);
}