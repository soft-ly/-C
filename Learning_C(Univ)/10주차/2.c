#include <stdio.h>
#define SR 2 //�л� �� 2�� ���� �迭 ũ��
#define SC 3 //���� �� 3���� ���� �迭 ũ��
#define DR 3 //���� �� 3���� ���� �迭 ũ��
#define DC 12 //���ڿ� �迭 ���

int main(void) {
	int score[SR][SC];
	float avg;
	char det[DR][DC] = { "���� ����", "���� ����", "���� ����" };
	printf("\u25a02���� 3�� ���� ������ ���� ������ ����� ���� ����ϴ� ���α׷�\n");
	for (int play = 0; play < 2; play++){
		printf("��>> [%d��°] �л��� 3�� ���� ������ �Է��Ͻÿ�.\n", play+1);
		int sum=0;
		for (int i = 0; i < 3; i++) {
			printf("%s : ", det[i]);
			scanf_s("%d", &score[play][i]);
			sum += score[play][i];
		}
		avg = (float)sum / 3;
		printf("��>> ��� ���� : %.2f\n\n", avg);
	}
	return 0;
}