#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	double a = 1,ep ;
//	double t = 1;
//	double result = 1;
//	scanf("%lf", &ep);
//	for (a ; t > ep; a++)
//	{
//		t *= a / (2 * a + 1);
//		result += t;
//	}
//	printf("%.6lf", result * 2);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int a;
//	int count = 1;
//	scanf("%d", &a);
//	for (int i = a; i < a + 4; i++)
//	{
//		for (int j = a; j < a + 4; j++)
//		{
//			for (int k = a; k < a + 4; k++)
//			{
//				if (i != j && i != k && j != k)
//				{
//					
//					if (count % 6 != 0)
//					{
//						printf("%d ", i * 100 + j * 10 + k);
//					}
//					else
//						printf("%d\n", i * 100 + j * 10 + k);
//					count += 1;
//				}
//			}
//		}
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int height = 0;
//	int time = 0;
//	int n,up,down;
//	scanf("%d %d %d", &n, &up, &down);
//	while (1)
//	{
//		time++;
//		height += up;
//		if (height >= n)
//		{
//			printf("%d", time);
//			break;
//		}
//		height -= down;
//		time++;
//	}
//}

//#include<stdio.h>
//int main()
//{
//	int n, u, d, i, k = 0;
//	scanf("%d%d%d", &n, &u, &d);
//	for (i = 0; k < n; i++)
//	{
//		k = k + u;
//		if (k < n)
//		{
//			k -= d;
//			i++;
//		}
//	}
//	printf("%d", i);
//	return 0;
//}

//#include<stdio.h>
//float a1, a2, a3, a0;
//
//
//float f(float x)
//{
//	float f1;
//	f1 = a3 * x * x * x + a2 * x * x + a1 * x + a0;
//	return f1;
//}
//int main()
//{
//	float a, b;
//	scanf("%f %f %f %f", &a3, &a2, &a1, &a0);
//	scanf("%f %f", &a, &b);
//	float mid;
//	float left = a;
//	float right = b;
//	while (right - left > 0.001 && f(left) * f(right) <= 0)
//	{
//		if (f(left) == 0)
//		{
//			printf("%.2f", left);
//			return 0;
//		}
//		if (f(right) == 0)
//		{
//			printf("%.2f", right);
//			return 0;
//		}
//		mid = (left + right) / 2;
//		if (f(mid) * f(left) > 0)
//		{
//			left = mid;
//		}
//		else
//			right = mid;
//	}
//	printf("%.2f", (left + right) / 2);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int n;
//	int flag = 0;
//	int y, f;
//	scanf("%d", &n);
//	for (y = 0; y < 50; y++)
//	{
//		for (f = 0; f < 100; f++)
//		{
//			if (98 * f - 199 * y == n)
//			{
//				printf("%d.%d", y, f);
//				flag = 1;
//				break;
//			}
//		}
//	}
//	if (flag == 0)
//	{
//		printf("No Solution");
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-4d", j, i, i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int n;
//	int ret=0;
//	int x, y;
//	scanf("%d", &n);
//	for (x = 1; x < sqrt(n); x++)
//	{
//		for (y = 1; y < sqrt(n); y++)
//		{
//			if ((x * x + y * y) == n&&x<=y)
//			{
//				printf("%d %d\n", x, y);
//				ret = 1;
//			}
//			
//		}
//	}
//	if (!ret )
//	{
//		printf("No Solution\n");
//	}
//	return 0;
//}

#include<stdio.h>
int main()
{
	int turtle, rabbit;
	int t;
	scanf("%d", &t);
	turtle = 3 * t;
	for(int i = 0; i < t; i ++)
	{
		i*9
		for (int j = 0; j < t; j += 10)
		{
			if()
		}
		rabbit = i *
			if (turtle < rabbit)
			{
				printf("^_^ %d", rabbit);
			}
			else
				printf("@_@ %d", turtle);
	}
	return 0;
}

#include <stdio.h>
int main()
{
	int t;
	if (scanf("%d", &t)) {};//输入比赛总时间t
	int w = 0, r = 0;
	for (int i = 1; i <= t; i++)
	{
		w += 3;//乌龟跑过的路程
		r += 9;//兔子跑过的路程
		if (i % 10 == 0 && r > w)//兔子每跑十分钟，进行一次判断
		{
			if (t >= i + 30)
			{
				w += 30 * 3;//乌龟在30分钟内走过的路程
				i += 30;//时间向前推进30分钟
			}
			else
			{
				w += (t - i) * 3;
				i = i + (t - i);
			}
		}
	}
	if (r == w)
	{
		printf("-_- %d", r);
	}
	else if (r > w)
	{
		printf("^_^ %d", r);
	}
	else
	{
		printf("@_@ %d", w);
	}
	return 0;
}