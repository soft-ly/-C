#include <stdio.h>
#define nine 9

int main(void) {
	printf("\u25a0 2���� �迭�� 2~9�ܱ��� ����ϴ� ���α׷�\n");
	int val[8][9];

	for (int i = 0; i < 8; i++) {
		printf("<%d�� ���>\n", i + 2);
		for (int j = 0; j < 9; j++) {
			val[i][j] = (i + 2) * (j + 1);
			printf("%d X %d = %02d\n", i + 2, j + 1, val[i][j]);
		}
		printf("\n");
	}
	printf("2 ~ 9�ܱ��� ��� �Ϸ�!");
	return 0;
}