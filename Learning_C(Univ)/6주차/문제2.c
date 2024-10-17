#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void hanoi();

int main() {
	char reply;
	do {
		printf("[탑의 원판 이동하는 함수 호출]\n\n");
		hanoi();

		print("프로그램을 다시 실행하겠습니까? (Y/N) : ");
		scanf_s("%c", &reply, sizeof(reply));
		if (reply == 'Y' || reply == 'y') {
			printf("[탑의 원판 이동하는 함수 호출]\n\n");
			hanoi();
		}
		else if (reply == 'N' || reply == 'n') {
			printf("\n프로그램 종료");
			break;
		}
		else {
			printf("\n%c는(은) 허용되지 않는 알파벳입니다.\n알파벳을 다시 입력하세요.\n");
			continue;
		}
	} while (1)
}

void hanoi() {
	char RoomA='\0', RoomB='\0', RoomC='\0';
	int A = 1, B = 2, C = 3;


}
//\n원판을 모두 이동하였습니다.\n