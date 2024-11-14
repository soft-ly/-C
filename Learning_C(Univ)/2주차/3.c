#include <stdio.h>

int main() {
	int set;
	printf("아스키코드를 사용하여 대문자를 보고싶으면 1을, 소문자는 2를, 숫자 0~9는 3을 누르시오 : ");
	scanf_s("%d", &set);
	
	int i;
	if (set == 1) {
		for (i = 65; i <= 90; i++) {
			printf("%c", i);
		}
	}
	else if (set == 2) {
		for (i = 97; i <= 122; i++) {
			printf("%c", i);
		}
	}
	else if (set == 3) {
		for (i = 48; i <= 57; i++) {
			printf("%c", i);
		}
	}
}