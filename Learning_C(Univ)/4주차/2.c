//#include <stdio.h>
//
//int main() {
//	int var1, var2;
//	
//	printf("점수 입력 : ");
//	scanf_s("%d", &var1);
//
//	if (0 <= var1 && var1 <= 100) {
//		var2 = var1 / 5;
//		switch (var2) {
//		case 0: case 1: case 2: case 3: case 4: case 5: case 6: case 7: case 8: case 9: case 10: case 11:
//			printf("입력한 점수 : %d\n등급 : F", var1);
//			break;
//		case 12:
//			printf("입력한 점수 : %d\n등급 : D0", var1);
//			break;
//		case 13:
//			printf("입력한 점수 : %d\n등급 : D+", var1);
//			break;
//		case 14:
//			printf("입력한 점수 : %d\n등급 : C0", var1);
//			break;
//		case 15:
//			printf("입력한 점수 : %d\n등급 : C+", var1);
//			break;
//		case 16:
//			printf("입력한 점수 : %d\n등급 : B0", var1);
//			break;
//		case 17:
//			printf("입력한 점수 : %d\n등급 : B+", var1);
//			break;
//		case 18:
//			printf("입력한 점수 : %d\n등급 : A0", var1);
//			break;
//		case 19:
//			printf("입력한 점수 : %d\n등급 : A+", var1);
//			break;
//		}
//	}
//	else {
//		printf("입력한 점수 %d는(은) 허용 구간이 아닙니다.\n프로그램을 다시 실행하세요.", var1);
//	}
//	return 0;
//}