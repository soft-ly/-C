#include <stdio.h>
#define nine 9

int main(void) {
	printf("\u25a0 2차원 배열로 2~9단까지 출력하는 프로그램\n");
	int val[8][9];

	for (int i = 0; i < 8; i++) {
		printf("<%d단 출력>\n", i + 2);
		for (int j = 0; j < 9; j++) {
			val[i][j] = (i + 2) * (j + 1);
			printf("%d X %d = %02d\n", i + 2, j + 1, val[i][j]);
		}
		printf("\n");
	}
	printf("2 ~ 9단까지 출력 완료!");
	return 0;
}