//#include <stdio.h>
//int main() {
//	int x, y = 0;
//
//error:
//	printf("������ �Է� : ");
//	scanf_s("%d", &x);
//	if (x < 0) {
//		printf("���� �������� ������� �ʽ��ϴ�. \n���� �������� �ٽ� �Է��ϼ���.\n");
//		goto error;
//	}
//	else if (x == 0) {
//		printf("0�� ������� �ʽ��ϴ�. \n���� �������� �ٽ� �Է��ϼ���.\n");
//		goto error;
//	}
//	else if (0 < x) {
//		for (int i = 0; i <= x; i++) {
//			if (i % 2 == 1) {
//				continue;
//			}
//			y += i;
//		}
//		printf("1���� %d���� ¦���� ���� �հ�� %d", x, y);
//	}
//	return 0;
//}