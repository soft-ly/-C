//#include <stdio.h>
//
//int main() {
//	int var1, var2;
//	
//	printf("���� �Է� : ");
//	scanf_s("%d", &var1);
//
//	if (0 <= var1 && var1 <= 100) {
//		var2 = var1 / 5;
//		switch (var2) {
//		case 0: case 1: case 2: case 3: case 4: case 5: case 6: case 7: case 8: case 9: case 10: case 11:
//			printf("�Է��� ���� : %d\n��� : F", var1);
//			break;
//		case 12:
//			printf("�Է��� ���� : %d\n��� : D0", var1);
//			break;
//		case 13:
//			printf("�Է��� ���� : %d\n��� : D+", var1);
//			break;
//		case 14:
//			printf("�Է��� ���� : %d\n��� : C0", var1);
//			break;
//		case 15:
//			printf("�Է��� ���� : %d\n��� : C+", var1);
//			break;
//		case 16:
//			printf("�Է��� ���� : %d\n��� : B0", var1);
//			break;
//		case 17:
//			printf("�Է��� ���� : %d\n��� : B+", var1);
//			break;
//		case 18:
//			printf("�Է��� ���� : %d\n��� : A0", var1);
//			break;
//		case 19:
//			printf("�Է��� ���� : %d\n��� : A+", var1);
//			break;
//		}
//	}
//	else {
//		printf("�Է��� ���� %d��(��) ��� ������ �ƴմϴ�.\n���α׷��� �ٽ� �����ϼ���.", var1);
//	}
//	return 0;
//}