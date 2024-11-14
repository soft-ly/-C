#include <stdio.h>
#define listnum 100;

double printing(float anylist[]);
int main(void) {
	printf("\u25a0 1차원 배열 요소의 덧셈 연산 결과를 출력하는 프로그램\n제시>> list[5] = {12.3, 35.8, 57.29, 96.53, 28.37}\n호출>> 사용자 정의 함수에서 배열 요소의 합계 산출");
	float flist[5] = { 12.3, 35.8, 57.29, 96.53, 28.37 };
	float sum;
	sum = printing(flist);
	printf("\n\n	>>>>> 사용자 정의 함수 영역 <<<<<\n\n반환>> 사용자 정의 함수 -> 메인 함수\n결과>> 배열 요소의 합계 : %.2f\n", sum);
}

double printing(float anylist[]) {
	float sum = 0;
	for (int i = 0; i < 5; i++) {
		sum += anylist[i];
	}
	return sum;
} 