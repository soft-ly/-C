#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define P 2
#define R 3
#define C 5

int main(void) {
	srand((unsigned)time(NULL));
	printf("\u25a0 3���� �迭 ��Ҹ� �������� ����ϴ� ���α׷�\n");
	int list[P][R][C];
	char answer;
	do {
	again:
		for (int i = 0; i < P; i++) {
			printf("[%d��] ���\n",i+1);
			for (int j = 0; j < R; j++) {
				printf("<%d�� ���> ", j+1);
				for (int k = 0; k < C; k++) {
					list[i][j][k] = 1 + rand() % 100;
					printf("%d ", list[i][j][k]);
				}
				printf("\n");
			}
		}
		printf("\n");
		printf("���α׷� ���� �Ϸ�!\n");
	answercorrectly:
		printf("���α׷��� �ٽ� �����ϰڽ��ϱ�? (Y / N) : ");
		scanf_s("%c", &answer, sizeof(answer));
		getchar();
		if (answer == 'Y' || answer == 'y') goto again;
		else if (answer == 'N' || answer == 'n') {
			printf("���α׷� ����");
			return 0;
		}
		else {
			printf("���ĺ� �Է� ����!\n�ٽ� �Է��ϼ���.\n"); goto answercorrectly;
		}
	} while (1);
}