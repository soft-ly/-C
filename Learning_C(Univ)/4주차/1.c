//#include <stdio.h>
//
//int main(void) {
//	char wrd;
//	int asciiwrd=0;
//
//	printf("���ڸ� �Է��Ͻÿ� : ");
//	scanf_s("%c", &wrd);
//
//	asciiwrd = (int)wrd;
//	printf("%d", asciiwrd);
//	if (97 <= asciiwrd && asciiwrd <= 122) {
//		printf("�Է��� %c��(��) \"���ĺ� �ҹ���\"�Դϴ�.", wrd);
//	}//Lower-Case
//	else if (65 <= asciiwrd && asciiwrd <= 90) {
//		printf("�Է��� %c��(��) \"���ĺ� �빮��\"�Դϴ�.", wrd);
//	}//Upper-case
//	else if (48 <= asciiwrd & asciiwrd <= 57) {
//		printf("�Է��� %c��(��) \"����\"�Դϴ�.", wrd);
//	}
//	else {
//		printf("�Է��� %c��(��) \"��Ÿ����\"�Դϴ�.\n���α׷��� �ٽ� �����ϼ���.", wrd);
//	}
//
//	return 0;
//}