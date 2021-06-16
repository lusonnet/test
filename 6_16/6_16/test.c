#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
////1006
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int g, s, b;
//	b = n / 100;
//	s = n / 10 % 10;
//	g = n % 10;
//	for (int i = 0; i < b; i++)
//		printf("B");
//	for (int i = 0; i < s; i++)
//		printf("S");
//	for (int i = 1; i <= g; i++)
//	{
//		printf("%d", i);
//	}
//	return 0;
//}

//1007
#include<stdio.h>
#include<math.h>
int main()
{
	int n ,i ,j =0;
	int k = 2;
	int count = 0;
	scanf("%d", &n);
	for (i = 3; i <= n; i++)
	{
		for ( j = 2; j <= (int)sqrt((float)i); j++)
		{
			if (i % j == 0)
			{
				break;
			}
			
		}
		if (j > sqrt(i))//?
		{
			if (i - k == 2)
			{
				count++;

			}
			k = i;
		}
	}
	printf("%d", count);
	return 0;
}

//#include <stdio.h>
//#include <math.h>//调用函数sqrt(),计算一个非负实数的平方根.
//int main() {
//	int n;
//	scanf("%d", &n);
//	int i, j, cnt = 0;
//	int pre = 2;
//	for (i = 3; i <= n; i++) {//从第二个素数开始遍历
//		for (j = 2; j <= (int)sqrt((float)i); j++)
//			if (i % j == 0)//判断不是素数
//				break;
//		if (j > sqrt(i)) {
//			if (i - pre == 2)//相邻素数相差2
//				cnt++;//计数
//			pre = i;//素数替换
//		}
//	}
//	printf("%d", cnt);
//	return 0;
//}