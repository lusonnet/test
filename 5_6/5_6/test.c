#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//#define MAX 100
//int count;
//int items[MAX];
//int n;
//
//void f(int remain_value, int start, int num)
//{
//	if (remain_value != 0)
//	{
//		for (int i = start; i <= remain_value; i++)
//		{
//			items[num] = i;
//			f(remain_value - i, i, num + 1);
//		}
//	}
//	else
//	{
//		count++;
//		printf("%d=%d", n, items[0]);
//		for (int j = 1; j < num; j++)
//		{
//			printf("+%d", items[j]);
//		}
//		if (count % 4 == 0)
//		{
//			printf("\n");
//		}
//		else if (count % 4 != 0 && items[0] != n)
//			printf(";");
//
//	}
//}
//int main()
//{
//	count = 0;
//	scanf("%d", &n);
//	f(n, 1, 0);
//	return 0;
//}

//int mian()
//{
//	float a, b, c, d;
//	scanf("%f %f %f %f", &a, &b, &c, &d);
//	printf("(%.1f+%.1fi) + (%.1f+%.1fi) = %.1fi",a,b,c,d,(a+c)+);
//
//}

//int main()
//{
//	float year, time;
//	scanf("%f %f", &year, &time);
//	if (year >= 5)//老员工
//	{
//		if (time > 40)
//		{
//			printf("%.2f", (time - 40) * 50 * 1.5 + 40 * 50);
//		}
//		else
//			printf("%.2f", time * 50);
//	}
//	else
//	{
//		if (time > 40)
//		{
//			printf("%.2d", (time - 40) * 30 * 1.5 + 40 * 30);
//		}
//		else
//			printf("%.2d", time * 30);
//
//	}
//	return 0;
//}

//int main()
//{
//	float x, y;
//	scanf("%f", &x);
//	if (x <= 15)
//	{
//		y = (4 * x) / 3;
//		printf("%.2f", y);
//	}
//	else
//	{
//		y = 2.5 * x - 17.5;
//		printf("%.2f", y);
//	}
//	return 0;
//}

//int main()
//{
//	int a, b;
//	char c;
//	scanf("%d %c %d", &a, &c, &b);
//	if (c == '+')
//	{
//		printf("%d", a + b);
//	}
//	else if (c == '-')
//	{
//		printf("%d", a - b);
//	}
//	else if (c == '*')
//	{
//		printf("%d", a * b);
//	}
//	else if (c == '%' && b != 0)
//	{
//		printf("%d", a / b);
//	}
//	else if (c == '%' && b != 0)
//	{
//		printf("%d", a % b);
//	}
//	else
//		printf("ERROR");
//
//	return 0;
//}


//int main()
//{
//	float o, h, l, c;
//	scanf("%f %f %f %f", &o, &h, &l, &c);
//	if (c < o)
//	{
//		printf("BW-Solid");		
//		if (l < o && l < c)
//		{
//			printf(" with Lower Shadow");
//		}
//
//	}
//	else if (c > o)
//		printf("R-Hollow");
//	else if (o == c)
//		printf("R-Cross");
//
//}
//
//#include <stdio.h>
//
//int main() {
//	double Open, High, Low, Close;
//	char line1[15] = "Lower Shadow";
//	char line2[15] = "Upper Shadow";
//	scanf("%lf %lf %lf %lf", &Open, &High, &Low, &Close);
//	if (Close < Open) {                     //判断日K蜡烛类型 
//		if (Low < Open && Low < Close) {         //判断是否有下影线 
//			if (High > Open && High > Close) {      //判断是否同时包含上影线和下影线 
//				printf("BW-Solid with %s and %s", line1, line2);
//			}
//			else {
//				printf("BW-Solid with %s", line1);
//			}
//		}
//		else if (High > Open && High > Close) {      //判断是否有上影线 
//			printf("BW-Solid with %s", line2);
//		}
//		else {
//			printf("BW-Solid");
//		}
//	}
//	else if (Close > Open) {
//		if (Low < Open && Low < Close) {
//			if (High > Open && High > Close) {
//				printf("R-Hollow with %s and %s", line1, line2);
//			}
//			else {
//				printf("R-Hollow with %s", line1);
//			}
//		}
//		else if (High > Open && High > Close) {
//			printf("R-Hollow with %s", line2);
//		}
//		else {
//			printf("R-Hollow");
//		}
//	}
//	else {
//		if (Low < Open && Low < Close) {
//			if (High > Open && High > Close) {
//				printf("R-Cross with %s and %s", line1, line2);
//			}
//			else {
//				printf("R-Cross with %s", line1);
//			}
//		}
//		else if (High > Open && High > Close) {
//			printf("R-Cross with %s", line2);
//		}
//		else {
//			printf("R-Cross");
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int a, b;
//	int  count = 0;
//	int sum = 0;
//	scanf("%d %d", &a, &b);
//	for (int i = a; i <= b; i++)
//	{
//		printf("%5d", i);
//		count++;
//		sum += i;
//		if (count % 5 == 0&&count!=0)
//		{
//			printf("\n");
//		}
//	}
//	if (count % 5 != 0)
//		printf("\n");
//	printf("Sum = %d",sum);
//	return 0;
//}