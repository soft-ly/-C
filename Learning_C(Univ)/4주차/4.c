//#include <stdio.h>
//
//int main() {
//	int price;
//	char place;
//	const float defaultfee = 0.05;
//
//	printf("��ǰ�� ���ݰ� ������ �Է� : ");
//	scanf_s("%d %c", &price, &place, sizeof(place));
//	
//	float dftdeliveryfee = price * defaultfee;
//	float fee = dftdeliveryfee;
//
//	switch (place) {
//	case'A':
//		fee = dftdeliveryfee + 3000;
//		printf("��ǰ ����: %d \n���: %c \n��� ��ۺ�: (�⺻ ��ۺ� + 3000��) %f\n�� ����: %d + %f = %f", price, place, fee, price, fee, price + fee);
//		break;
//	case'B':
//		if (price < 50000) {
//			fee = 0;
//			printf("��ǰ ����: %d \n���: %c \n��� ��ۺ�: (�⺻ ��ۺ� + 3000��) %f\n�� ����: %d + %f = %f", price, place, fee, price, fee, price + fee);
//		}
//		else {
//			printf("��ǰ ����: %d \n���: %c \n��� ��ۺ�: (�⺻ ��ۺ� + 3000��) %f\n�� ����: %d + %f = %f", price, place, fee, price, fee, price + fee);
//		}
//		break;
//	case'C':
//		if (price < 50000) {
//			fee = 0;
//			printf("��ǰ ����: %d \n���: %c \n��� ��ۺ�: (�⺻ ��ۺ� + 3000��) %f\n�� ����: %d + %f = %f", price, place, fee, price, fee, price + fee);
//		}
//		else if (50000 <= price && price <= 100000) {
//			printf("��ǰ ����: %d \n���: %c \n��� ��ۺ�: (�⺻ ��ۺ� + 3000��) %f\n�� ����: %d + %f = %f", price, place, fee, price, fee, price + fee);
//		}
//		else {
//			fee = 1000;
//			printf("��ǰ ����: %d \n���: %c \n��� ��ۺ�: (�⺻ ��ۺ� + 3000��) %f\n�� ����: %d + %f = %f", price, place, fee, price, fee, price + fee);
//		}
//		break;
//	case'D':
//		if (price < 10000) {
//			fee = 0;
//			printf("��ǰ ����: %d \n���: %c \n��� ��ۺ�: (�⺻ ��ۺ� + 3000��) %f\n�� ����: %d + %f = %f", price, place, fee, price, fee, price + fee);
//		}
//		else {
//			fee = 1000;
//			printf("��ǰ ����: %d \n���: %c \n��� ��ۺ�: (�⺻ ��ۺ� + 3000��) %f\n�� ����: %d + %f = %f", price, place, fee, price, fee, price + fee);
//		}
//		break;
//	default:
//		printf("��ǰ ����: %d \n���: %c \n��� ��ۺ�: (�⺻ ��ۺ� + 3000��) %f\n�� ����: %d + %f = %f", price, place, fee, price, fee, price + fee);
//	}
//	
//	return 0;
//
//}