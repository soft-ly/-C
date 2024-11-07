//#include <stdio.h>
//int main() {
//	int decimal = 0x0FA37234;
//	int a = decimal, b= decimal, c=decimal;
//	int d = 15;
//	a=a << 8;
//	a=a >> 28;
//	a = ~a;
//	a = a ^ d;//이상하게도 a만 - 값으로 나오길래...
//	b=b << 20;
//	b=b >> 28;
//	c=c << 28;
//	c=c >> 28;
//	printf("프로그램시작시간 값(3개) : %d, %d, %d\n", a, b, c);
//	int sum;
//	sum = a * b * c;
//	printf("프로그램실행시간(초)     : %d초\n", sum);
//	int fullmin, min, hour, sec;
//	sec = sum % 60;
//	fullmin = sum / 60;
//	min = fullmin % 60;
//	hour = fullmin / 60;
//	printf("프로그램실행시간(시분초) : %d시 %d분 %d초", hour, min, sec);
//}