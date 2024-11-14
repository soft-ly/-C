//#include <stdio.h>
//
//int main() {
//	int current_time_h, current_time_m;
//	int time;
//
//	printf("출발 시간 (시 분) : ");
//	scanf_s("%d %d", &current_time_h, &current_time_m);
//	printf("등교에 걸린 시간(분) : ");
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
//	printf("학교에 도착한 시간은 %d시 %d분입니다.", current_time_h, current_time_m);
//	return 0;
//}