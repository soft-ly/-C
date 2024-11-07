//#include <stdio.h>
//
//int main(void) {
//	char wrd;
//	int asciiwrd=0;
//
//	printf("문자를 입력하시오 : ");
//	scanf_s("%c", &wrd);
//
//	asciiwrd = (int)wrd;
//	printf("%d", asciiwrd);
//	if (97 <= asciiwrd && asciiwrd <= 122) {
//		printf("입력한 %c는(은) \"알파벳 소문자\"입니다.", wrd);
//	}//Lower-Case
//	else if (65 <= asciiwrd && asciiwrd <= 90) {
//		printf("입력한 %c는(은) \"알파벳 대문자\"입니다.", wrd);
//	}//Upper-case
//	else if (48 <= asciiwrd & asciiwrd <= 57) {
//		printf("입력한 %c는(은) \"숫자\"입니다.", wrd);
//	}
//	else {
//		printf("입력한 %c는(은) \"기타문자\"입니다.\n프로그램을 다시 시작하세요.", wrd);
//	}
//
//	return 0;
//}