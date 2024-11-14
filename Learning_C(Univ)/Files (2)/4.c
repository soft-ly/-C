//#include <stdio.h>
//int main() {
//	int x, y = 0, sum=0;
//
//error:
//	printf("정수값 입력 : ");
//	scanf_s("%d", &x);
//	if (x < 0) {
//		printf("음의 정수값은(는) 허용하지 않습니다. \n양의 정수값을 다시 입력하세요.\n");
//		goto error;
//	}
//	else if (x == 0) {
//		printf("0을 허용하지 않습니다. \n양의 정수값을 다시 입력하세요.\n");
//		goto error;
//	}
//	else if (0 < x) {
//		do {
//			y++;
//			sum += y;
//			
//		} while (y < x);
//		printf("1부터 %d까지 누적 합계는 %d", x, sum);
//	}
//	return 0;
//}