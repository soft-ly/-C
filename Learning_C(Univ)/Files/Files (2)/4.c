//#include <stdio.h>
//int main() {
//	int x, y = 0, sum=0;
//
//error:
//	printf("������ �Է� : ");
//	scanf_s("%d", &x);
//	if (x < 0) {
//		printf("���� ��������(��) ������� �ʽ��ϴ�. \n���� �������� �ٽ� �Է��ϼ���.\n");
//		goto error;
//	}
//	else if (x == 0) {
//		printf("0�� ������� �ʽ��ϴ�. \n���� �������� �ٽ� �Է��ϼ���.\n");
//		goto error;
//	}
//	else if (0 < x) {
//		do {
//			y++;
//			sum += y;
//			
//		} while (y < x);
//		printf("1���� %d���� ���� �հ�� %d", x, sum);
//	}
//	return 0;
//}