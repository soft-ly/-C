#include <stdio.h>
/*
int main() {
	char letter='y';
	int number = 1;
	do {
		switch (letter) {
		case 'y':
		case 'Y':
			printf("<%d ȸ ����>\n", number);
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
			printf("�� %dȸ ���� �� ���α׷��� �����մϴ�.", number);
			break;

		default:
			other:
			printf("���α׷��� �ٽ� �����ϰڽ��ϱ�? (Y/N) : ");
			scanf_s("%c", &letter, sizeof(letter));
			getchar();
			if (letter == 'Y' || letter == 'N' || letter == 'n' || letter == 'y') {
				number++;
				break;
			}
			else {
				printf("�Է��� ���ĺ� \"%c\"��(��) ������� �ʽ��ϴ�.\n", letter);
				goto other;
			}
		}
		if (letter == 'n' || letter == 'N') {
			break;
		}
		
	} while (1);
	return 0;
}*/