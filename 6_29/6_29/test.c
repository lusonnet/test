#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int zi[101], mu[101];
	int i,n,fenzi,fenmu;
	scanf("%d", &n);
	for ( i = 0; i < n; i++)
	{
		scanf("%d/%d", &zi[i], &mu[i]);
	}
	fenzi = zi[0];
	fenmu = mu[0];
	for (i = 1; i < n; i++)
	{
		if (mu[i] != 0)
		{
			fenzi = fenzi*
		}

	}

}

//辗转相除法 - 求最大公约数

//int gcd(int a, int b)
//{
//	int t;
//	while (b != 0)
//	{
//		t = a % b;
//		a = b;
//		b = t; //辗转
//	}
//	return a;
//}
//
//int main()
//{
//	int x, y;
//	scanf("%d %d", &x, &y);
//	printf("%d", gcd(x, y));
//	return 0;
//}