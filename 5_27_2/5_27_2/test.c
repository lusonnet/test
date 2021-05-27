#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int n;
//	int i;
//	int a, b, c=0;
//	float a[1000];
//	while (scanf("%d", &n) != EOF&&n!=0)
//	{
//		for (i = 0; i < n; i++)
//		{
//			scanf("%f", &a[i]);
//		}
//		for (i = 0; i < n; i++)
//		{
//			if (a[i] < 0)
//				a++;
//			else if (a[i] == 0)
//				b++;
//			else
//				c++;
//		}
//		printf("%d %d %d\n", a, b, c);
//		a = 0;
//		b = 0;
//		c = 0;
//	}
//	return 0;
//}

//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int n, m,i;
//	double a;
//	double sum = 0;
//	while (scanf("%d%d", &n, &m) != EOF)
//	{
//		a = n;
//		for (i = n; i < n + m; i++)
//		{
//			sum += a;
//			a = sqrt(a);
//		}
//		printf("%.2lf\n", sum);
//		sum = 0;
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int m, n;
//	int i;
//	int a, b, c;
//	int flag = 0;
//	while (scanf("%d%d", &m, &n) != EOF)
//	{
//		flag = 0;
//		for(i = m; i <= n; i++)
//		{
//			a = i % 10;
//			b = i / 10 % 10;
//			c = i / 100;
//			if (i == a * a * a + b * b * b + c * c * c)
//			{
//				if (flag == 1)
//				{
//					printf(" ");
//				}
//				printf("%d", i);
//				flag = 1;
//
//			}
//		}
//		if (flag == 0)
//			printf("no");
//		printf("\n");
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int n,x,i;
//	double sum;
//	scanf("%d", &n);
//	while (n--)
//	{
//		scanf("%d", &x);
//		sum = 0;
//		for (i = 1; i <= x; i++)
//		{
//			if (i % 2 == 1)
//			{
//				sum += 1.0 / i;
//			}
//			else if(i % 2 == 0)
//			{
//				sum -= (1.0 / i);
//
//			}
//		}
//		printf("%.2lf\n", sum);
//	}
//
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	double a, b, c;
//	int n = 0;
//	while (scanf("%d", &n)!=EOF)
//	{
//		while (n--)
//		{
//			scanf("%lf %lf %lf", &a, &b, &c);
//			if ((a + b) > c && (a + c) > b && (b + c) > a)
//			{
//				printf("YES\n");
//			}
//			else
//				printf("NO\n");
//		}
//
//	}
//	return 0;
//}