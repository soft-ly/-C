#include <stdio.h>
int main(void) {
	int num1, num2, hap;

	printf("1. µÎ Á¤¼ö ÀÔ·Â : ");
	scanf_s("%d %d", &num1, &num2);

	hap = num1 + num2;
	printf("2. µ¡¼À °á°ú : %d + %d = %d\n", num1, num2, hap);

	return 0;
}