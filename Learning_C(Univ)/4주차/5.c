//#include <stdio.h>
//
//int main() {
//	int current_time_h, current_time_m;
//	int time;
//
//	printf("��� �ð� (�� ��) : ");
//	scanf_s("%d %d", &current_time_h, &current_time_m);
//	printf("��� �ɸ� �ð�(��) : ");
//	scanf_s("%d", &time);
//	int added_hour;
//	added_hour = time / 60;
//	time %= 60;
//	current_time_m += time;
//
//	if (current_time_m >= 60) {
//		current_time_h++;
//		current_time_m -= 60;
//	}
//	current_time_h += added_hour;
//
//	printf("�б��� ������ �ð��� %d�� %d���Դϴ�.", current_time_h, current_time_m);
//	return 0;
//}