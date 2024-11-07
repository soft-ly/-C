#include <stdio.h>
/*
int main() {
	char letter='y';
	int number = 1;
	do {
		switch (letter) {
		case 'y':
		case 'Y':
			printf("<%d 회 실행>\n", number);
			for (int i = 1; i < 10; i++) {
				for (int j = 2; j < 10; j++) {
					printf(" %d x %d = %02d", j, i, j * i);
				}
				printf("\n");
			}
			letter = '\0';
			break;

		case 'n':
		case 'N':
			printf("총 %d회 실행 후 프로그램을 종료합니다.", number);
			break;

		default:
			other:
			printf("프로그램을 다시 실행하겠습니까? (Y/N) : ");
			scanf_s("%c", &letter, sizeof(letter));
			getchar();
			if (letter == 'Y' || letter == 'N' || letter == 'n' || letter == 'y') {
				number++;
				break;
			}
			else {
				printf("입력한 알파벳 \"%c\"는(은) 허용하지 않습니다.\n", letter);
				goto other;
			}
		}
		if (letter == 'n' || letter == 'N') {
			break;
		}
		
	} while (1);
	return 0;
}*/