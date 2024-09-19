#include <stdio.h>

int main() {
	int x = 0;
	char sentence[100];
	scanf_s("%s", sentence);
	for (int i = 0; i < 10000; i++) {
		if (sentence[i] == " ")
			x++;
		else {
			printf("error");
		}
	}
	printf("%d", x);
	return 0;
}