#include <stdio.h>

int main() {
	int set;
	printf("�ƽ�Ű�ڵ带 ����Ͽ� �빮�ڸ� ��������� 1��, �ҹ��ڴ� 2��, ���� 0~9�� 3�� �����ÿ� : ");
	scanf_s("%d", &set);
	
	int i;
	if (set == 1) {
		for (i = 65; i <= 90; i++) {
			printf("%c", i);
		}
	}
	else if (set == 2) {
		for (i = 97; i <= 122; i++) {
			printf("%c", i);
		}
	}
	else if (set == 3) {
		for (i = 48; i <= 57; i++) {
			printf("%c", i);
		}
	}
}