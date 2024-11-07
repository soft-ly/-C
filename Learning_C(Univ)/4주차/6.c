#include <stdio.h>

int main() {
	float earning;
	float fee, percentage=0;
	
	printf("근로 소득을 입력 : ");
	scanf_s("%f", &earning);
	
	if (earning <= 10000000) {
		percentage = 0.08;
		fee = earning * percentage;
		printf("당신의 근로 소득세는 %f입니다.", fee);
	}
	else if (earning > 10000000 && 40000000 >= earning) {
		percentage = 0.17;
		fee = earning * percentage;
		printf("당신의 근로 소득세는 %f입니다.", fee);
	}
	else if (earning > 40000000 && 80000000 >= earning) {
		percentage = 0.26;
		fee = earning * percentage;
		printf("당신의 근로 소득세는 %f입니다.", fee);
	}
	else if (earning > 80000000) {
		percentage = 0.35;
		fee = earning * percentage;
		printf("당신의 근로 소득세는 %f입니다.", fee);
	}
}