/*
#include <stdio.h>
#include <stdlib.h>
void convertinch(float a);
void convertmeter(float a);

int main() {
	float size;
	char type;
	do {
		printf("A. 인치를 센티미터로 환산하는 프로그램\nB. 평을 평방미터로 환산하는 프로그램\nQ. 프로그램 종료\n\n선택 : ");
		scanf_s("%c", &type, sizeof(type));
		if (type == 'A' || type == 'a') {
			printf("A. 인치를 센티미터로 환산하는 프로그램 \n문> 인치(inch)를 입력하세요 : ");
			scanf_s("%f", size, sizeof(size));
			convertinch(size);
		}
		else if (type == 'B' || type == 'b') {
			printf("A. 평를 평방미터로 환산하는 프로그램 \n문> 평을 입력하세요 : ");
			scanf_s("%f", size, sizeof(size));
			convertmeter(size);
		}
		else if (type == 'Q' || type == 'q') {
			printf("프로그램을 종료합니다.");
			exit(0);
		}
		else 
			continue;
	} while (1);
	return 0;
}

void convertinch(float a)
{
	float answer;
	answer = a * 2.5399;
	printf("\n[인치를 센티미터로 환산하는 함수 호출]\n\n답> %.2f인치(inch)는 %.2f센티미터(cm)", a, answer);
}

void convertmeter(float a)
{
	float answer;
	answer = a * 3.3058;
	printf("\n[평을 평방미터로 환산하는 함수 호출]\n\n답> %.2f평은 %.2f평방미터", a, answer);
}
*/