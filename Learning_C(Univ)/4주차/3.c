//#include <stdio.h>
//int main() {
//	char var1;
//
//	printf("A: 봄\n");
//	printf("S: 여름\n");
//	printf("D: 가을\n");
//	printf("F: 겨울\n");
//	printf("대소 구분 없이 아무거나 출력 가능\n");
//
//
//	printf("계절을 선택할 알파벳 입력 : ");
//	scanf_s("%c", &var1);
//
//	if (var1 != 'A'&& var1 != 'S' && var1 != 'D' && var1 != 'F' && var1 != 'a' && var1 != 's' && var1 != 'd' && var1 != 'f') { printf("허용되지 않는 알파벳입니다. \n대소문자 구별 없이 A, S, D, F만 허용합니다.\n프로그램을 다시 시작하세요"); }
//
//	switch (var1)
//	{
//	case'A':
//	case'a':
//		printf("계절 : 봄\n수행 : 꽃을 가꾼다.");
//		break;
//
//	case'S':
//	case's':
//		printf("계절 : 여름\n수행 : 수영을 한다.");
//		break;
//
//	case'D':
//	case'd':
//		printf("계절 : 가을\n수행 : 추수를 한다.");
//		break;
//
//	case'F':
//	case'f':
//		printf("계절 : 겨울\n수행 : 스키를 탄다.");
//		break;
//	}
//}