//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//int calc_pos(int n);
//int pick_number(void);
//int bigger_number(int x, int y, int z);
//
//int main() {
//	int person1, person2, person3;
//	srand((unsigned)time(NULL));
//	int sum1, sum2, sum3;
//	sum1 = pick_number();
//	person1 = calc_pos(sum1);
//	sum2 = pick_number();
//	person2 = calc_pos(sum2);
//	sum3 = pick_number();
//	person3 = calc_pos(sum3);
//	int answer;
//	answer = bigger_number(person1, person2, person3);
//	printf("3명의 값은 %d, %d, %d이며,\n계산된 결과 가장 높은 값은 %d", person1, person2, person3, answer);
//}
//
//int pick_number(void) {
//	int temp1, temp2, temp3, temp4, temp5;
//	temp1 = rand() % 85;
//	temp2 = rand() % 85;
//	temp3 = rand() % 85;
//	temp4 = rand() % 85;
//	temp5 = rand() % 85;
//	if (temp1 == 0) {
//		temp1 = 85;
//	}
//	if (temp2 == 0) {
//		temp2 = 85;
//	}
//	if (temp3 == 0) {
//		temp3 = 85;
//	}
//	if (temp4 == 0) {
//		temp4 = 85;
//	}
//	if (temp5 == 0) {
//		temp5 = 85;
//	}
//	int sum = 0;
//	sum = temp1 + temp2 + temp3 + temp4 + temp5;
//	return sum;
//}
//
//int calc_pos(int n) {
//	int ones, tens, hunds;
//	ones = n % 10;
//	tens = n % 100;
//	hunds = n % 1000;
//	int sum;
//	sum = (tens + hunds) * ones;
//	return sum;
//}
//
//int bigger_number(int x, int y, int z) {
//	if (x >= y && x >= z) {
//		return x;
//	}
//	if (y >= z && y >= x) {
//		return y;
//	}
//	if (z >= x && z >= y) {
//		return z;
//	}
//}