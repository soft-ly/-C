//#include <stdio.h>
//int isPrime(int n);
//int IsPerfect(int n);
//void printDivisor(int n);
//
//int main() {
//	int primenumber = 0;
//	int perfectprime = 0;
//
//	for (int i = 1; i <= 100; i++) {
//		if (isPrime(i) == 1) {
//			primenumber++;
//		}
//		if (IsPerfect(i) == 1) {
//			perfectprime++;
//			printf("%d : ������, ����� ", i);
//			printDivisor(i);
//		}
//	}
//
//	printf("1���� 100������ �Ҽ��� ���� %d \n", primenumber);
//	printf("1���� 100������ �������� ���� %d \n", perfectprime);
//}
//
//int isPrime(int n) {
//	int divisor=0;
//	for (int i = 1; i <= n; i++) {
//		if (n % i == 0) {
//			divisor++;
//		}
//	}
//	if (divisor > 2) {
//		return 0;
//	}
//	else if (divisor == 2) {
//		return 1;
//	}
//	else if (divisor == 1) {
//		return 0;
//	}
//}
//
//int IsPerfect(int n) {
//	int sum = 0;
//	for (int i = 1; i < n; i++) {
//		if (n % i == 0) {
//			sum += i;
//		}
//	}
//	if (sum == n) {
//		return 1;
//	}
//	else{
//		return 0;
//	}
//}
//
//void printDivisor(int n) {
//	printf("1");
//	for (int i = 2; i <= n; i++) {
//		if (n % i == 0) {
//			printf(", %d", i);
//		}
//	}
//	printf("\n");
//}