#include <stdio.h>

int main() {
	float earning;
	float fee, percentage=0;
	
	printf("�ٷ� �ҵ��� �Է� : ");
	scanf_s("%f", &earning);
	
	if (earning <= 10000000) {
		percentage = 0.08;
		fee = earning * percentage;
		printf("����� �ٷ� �ҵ漼�� %f�Դϴ�.", fee);
	}
	else if (earning > 10000000 && 40000000 >= earning) {
		percentage = 0.17;
		fee = earning * percentage;
		printf("����� �ٷ� �ҵ漼�� %f�Դϴ�.", fee);
	}
	else if (earning > 40000000 && 80000000 >= earning) {
		percentage = 0.26;
		fee = earning * percentage;
		printf("����� �ٷ� �ҵ漼�� %f�Դϴ�.", fee);
	}
	else if (earning > 80000000) {
		percentage = 0.35;
		fee = earning * percentage;
		printf("����� �ٷ� �ҵ漼�� %f�Դϴ�.", fee);
	}
}