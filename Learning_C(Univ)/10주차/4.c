#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define P 2
#define R 3
#define C 5

int main(void) {
	srand((unsigned)time(NULL));
	printf("\u25a0 3차원 배열 요소를 랜덤으로 출력하는 프로그램\n");
	int list[P][R][C];
	char answer;
	do {
	again:
		for (int i = 0; i < P; i++) {
			printf("[%d면] 출력\n",i+1);
			for (int j = 0; j < R; j++) {
				printf("<%d행 출력> ", j+1);
				for (int k = 0; k < C; k++) {
					list[i][j][k] = 1 + rand() % 100;
					printf("%d ", list[i][j][k]);
				}
				printf("\n");
			}
		}
		printf("\n");
		printf("프로그램 수행 완료!\n");
	answercorrectly:
		printf("프로그램을 다시 시작하겠습니까? (Y / N) : ");
		scanf_s("%c", &answer, sizeof(answer));
		getchar();
		if (answer == 'Y' || answer == 'y') goto again;
		else if (answer == 'N' || answer == 'n') {
			printf("프로그램 종료");
			return 0;
		}
		else {
			printf("알파벳 입력 오류!\n다시 입력하세요.\n"); goto answercorrectly;
		}
	} while (1);
}