//#include <stdio.h>
//
//int main() {
//	int price;
//	char place;
//	const float defaultfee = 0.05;
//
//	printf("제품의 가격과 지역을 입력 : ");
//	scanf_s("%d %c", &price, &place, sizeof(place));
//	
//	float dftdeliveryfee = price * defaultfee;
//	float fee = dftdeliveryfee;
//
//	switch (place) {
//	case'A':
//		fee = dftdeliveryfee + 3000;
//		printf("제품 가격: %d \n장소: %c \n장소 배송비: (기본 배송비 + 3000원) %f\n총 가격: %d + %f = %f", price, place, fee, price, fee, price + fee);
//		break;
//	case'B':
//		if (price < 50000) {
//			fee = 0;
//			printf("제품 가격: %d \n장소: %c \n장소 배송비: (기본 배송비 + 3000원) %f\n총 가격: %d + %f = %f", price, place, fee, price, fee, price + fee);
//		}
//		else {
//			printf("제품 가격: %d \n장소: %c \n장소 배송비: (기본 배송비 + 3000원) %f\n총 가격: %d + %f = %f", price, place, fee, price, fee, price + fee);
//		}
//		break;
//	case'C':
//		if (price < 50000) {
//			fee = 0;
//			printf("제품 가격: %d \n장소: %c \n장소 배송비: (기본 배송비 + 3000원) %f\n총 가격: %d + %f = %f", price, place, fee, price, fee, price + fee);
//		}
//		else if (50000 <= price && price <= 100000) {
//			printf("제품 가격: %d \n장소: %c \n장소 배송비: (기본 배송비 + 3000원) %f\n총 가격: %d + %f = %f", price, place, fee, price, fee, price + fee);
//		}
//		else {
//			fee = 1000;
//			printf("제품 가격: %d \n장소: %c \n장소 배송비: (기본 배송비 + 3000원) %f\n총 가격: %d + %f = %f", price, place, fee, price, fee, price + fee);
//		}
//		break;
//	case'D':
//		if (price < 10000) {
//			fee = 0;
//			printf("제품 가격: %d \n장소: %c \n장소 배송비: (기본 배송비 + 3000원) %f\n총 가격: %d + %f = %f", price, place, fee, price, fee, price + fee);
//		}
//		else {
//			fee = 1000;
//			printf("제품 가격: %d \n장소: %c \n장소 배송비: (기본 배송비 + 3000원) %f\n총 가격: %d + %f = %f", price, place, fee, price, fee, price + fee);
//		}
//		break;
//	default:
//		printf("제품 가격: %d \n장소: %c \n장소 배송비: (기본 배송비 + 3000원) %f\n총 가격: %d + %f = %f", price, place, fee, price, fee, price + fee);
//	}
//	
//	return 0;
//
//}