#include <stdio.h>
#define SR 2 //학생 수 2명에 대한 배열 크기
#define SC 3 //과목 수 3개에 대한 배열 크기
#define DR 3 //과목 수 3개에 대한 배열 크기
#define DC 12 //문자열 배열 요소

int main(void) {
	int score[SR][SC];
	float avg;
	char det[DR][DC] = { "국어 점수", "영어 점수", "수학 점수" };
	printf("\u25a02명의 3개 과목 점수에 대한 총점과 평균을 각각 출력하는 프로그램\n");
	for (int play = 0; play < 2; play++){
		printf("문>> [%d번째] 학생의 3개 과목 점수를 입력하시오.\n", play+1);
		int sum=0;
		for (int i = 0; i < 3; i++) {
			printf("%s : ", det[i]);
			scanf_s("%d", &score[play][i]);
			sum += score[play][i];
		}
		avg = (float)sum / 3;
		printf("답>> 평균 점수 : %.2f\n\n", avg);
	}
	return 0;
}