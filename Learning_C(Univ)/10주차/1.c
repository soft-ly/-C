#include <stdio.h>
#define listnum 100;

double printing(float anylist[]);
int main(void) {
	printf("\u25a0 1���� �迭 ����� ���� ���� ����� ����ϴ� ���α׷�\n����>> list[5] = {12.3, 35.8, 57.29, 96.53, 28.37}\nȣ��>> ����� ���� �Լ����� �迭 ����� �հ� ����");
	float flist[5] = { 12.3, 35.8, 57.29, 96.53, 28.37 };
	float sum;
	sum = printing(flist);
	printf("\n\n	>>>>> ����� ���� �Լ� ���� <<<<<\n\n��ȯ>> ����� ���� �Լ� -> ���� �Լ�\n���>> �迭 ����� �հ� : %.2f\n", sum);
}

double printing(float anylist[]) {
	float sum = 0;
	for (int i = 0; i < 5; i++) {
		sum += anylist[i];
	}
	return sum;
}