#include <stdio.h>

int main() {
	int hakboo, major, id, class, val = 0;
	printf("학부 코드 (0~15)를 입력하시오. : ");
	scanf_s("%d", &hakboo);
	val = hakboo << 6;
	printf("전공 코드 (0~15)를 입력하시오. : ");
	scanf_s("%d", &major);
	val = val ^ major;
	val = val << 12;
	printf("학번 코드 (0~255)를 입력하시오. : ");
	scanf_s("%d", id);
	val = val ^ id;
	val = val << 8;
	printf("학년 코드 (0~15)를 입력하시오. : ");
	scanf_s("%d", &class)
}