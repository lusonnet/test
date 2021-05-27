#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int x1, x2, y1, y2;
//	float n;
//	while (scanf("%d%d%d%d", &x1, &y1, &x2, &y2) != EOF)
//	{
//		n = sqrt((y2 - y1) * (y2 - y1) + (x2 - x1) * (x2 - x1));
//		printf("%.2f\n", n);
//
//	}
//	return 0;
//
//}
//#define PI 3.1415927
//#include<stdio.h>
//
//int main()
//{
//	float r,v;
//	while (scanf("%f",&r) != EOF)
//	{
//		v = PI * r * r * r * 4 / 3;
//		printf("%.3f\n",v);
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	double n = 0;
//	while (scanf("%lf", &n) != EOF)
//	{
//		if (n >= 0)
//			printf("%.2lf\n", n);
//		else
//			printf("%.2lf\n", n * (-1.0));
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int n;
//	while (scanf("%d", &n) != EOF)
//	{
//		if (n <= 100 && n >= 90)
//			printf("A\n");
//		else if (n <= 89 && n >= 80)
//			printf("B\n");
//		else if (n <= 79 && n >= 70)
//			printf("C\n");
//		else if (n <= 69 && n >= 60)
//			printf("D\n");
//		else if (n <= 59 && n >= 0)
//			printf("E\n");
//		else
//			printf("Score is error!\n");
//			
//
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int day[12] = { 31,0,31,30,31,30,31,31,30,31,30,31 };
//	int y, m, d = 0;
//	int total = 0;
//	while (scanf("%d/%d/%d", &y, &m, &d) != EOF)
//	{
//		//if (m == 1)
//		//	printf("%d\n", d - 0);
//		//else
//		//{
//		if ((y % 400 == 0) || (y % 100 != 0) && (y % 4 == 0))
//		{
//			day[1] = 29;
//		}
//		else
//		{
//			day[1] = 28;
//		}
//
//		int i = 0;
//		while (i < m - 1 )
//		{
//			total += day[i];
//			i++;
//		}
//		total += d;
//		printf("%d\n", total);
//		total = 0;
//	}
//
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int n,i;
//	int a[1000];
//	while (scanf("%d", &n) != EOF)
//	{
//		int sum = 1;
//
//		for (i = 0; i < n; i++)
//		{
//			scanf("%d ", &a[i]);
//		}
//		for (i = 0; i < n; i++)
//		{
//			if (a[i] % 2 == 1)
//			{
//				sum *= a[i];
//			}
//		}
//		printf("%d\n", sum);
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int n ;
//	int	m ;
//	int i;
//	int sum1 = 0;
//	int	sum2 = 0;
//
//	//int a[1000];
//	while (scanf("%d%d",&n,&m) != EOF)
//	{
//		if (n > m)
//		{
//			int t = m;
//			m = n;
//			n = t;
//		}
//		//int x = n;
//		//for (i=0;i<m-n+1;i++)
//		//{
//		//	a[i] = x;
//		//	x++;
//		//}
//		//for (i = 0; i < m - n + 1; i++)
//		//{
//		//	if (a[i] % 2 == 0)
//		//	{
//		//		sum1 += a[i] * a[i];
//		//	}
//		//	else
//		//	{
//		//		sum2 += a[i] * a[i] * a[i];
//		//	}
//		//}
//
//		for (i = n; i <= m; i++)
//		{
//			if (i % 2 == 0)
//			{
//				sum1 += i * i;
//			}
//			else
//				sum2 += i * i * i;
//		}
//		printf("%d %d\n", sum1, sum2);
//		sum1 = 0;
//		sum2 = 0;
//	}
//	return 0;
//}


