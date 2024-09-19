#include <stdio.h>
int main() {
	char input_alpha;

	printf("알파벳 입력: ");
	scanf_s("%c", input_alpha);

	printf("입력한 알파벳 출력: %c\n", input_alpha);
	printf("입력한 알파벳의 아스키코드 값 : %d \n", input_alpha);
	return 0;

 }