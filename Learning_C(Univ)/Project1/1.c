//#include <stdio.h>
//int main() {
//	int decimal = 0x0FA37234;
//	int a = decimal, b= decimal, c=decimal;
//	int d = 15;
//	a=a << 8;
//	a=a >> 28;
//	a = ~a;
//	a = a ^ d;//�̻��ϰԵ� a�� - ������ �����淡...
//	b=b << 20;
//	b=b >> 28;
//	c=c << 28;
//	c=c >> 28;
//	printf("���α׷����۽ð� ��(3��) : %d, %d, %d\n", a, b, c);
//	int sum;
//	sum = a * b * c;
//	printf("���α׷�����ð�(��)     : %d��\n", sum);
//	int fullmin, min, hour, sec;
//	sec = sum % 60;
//	fullmin = sum / 60;
//	min = fullmin % 60;
//	hour = fullmin / 60;
//	printf("���α׷�����ð�(�ú���) : %d�� %d�� %d��", hour, min, sec);
//}