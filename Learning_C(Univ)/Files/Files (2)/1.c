#include <stdio.h>
int main() {
	int x, y = 0;
	
	error:
	printf("������ �Է� : ");
	scanf_s("%d", &x);
	if (x < 0) {
		printf("���� �������� ������� �ʽ��ϴ�. \n���� �������� �ٽ� �Է��ϼ���.\n");
		goto error;
	}
	else if (x == 0) {
		printf("0�� ������� �ʽ��ϴ�. \n���� �������� �ٽ� �Է��ϼ���.\n");
		goto error;
	}
	else if (0 < x) {
		for (int i = 1; i <= x; i + 2) {
			y += i;
			if (i == x - 1) {
				i = x;
			}
		}
		printf("1���� %d���� Ȧ���� ���� �հ�� %d", x, y);
	}
	return 0;
 }