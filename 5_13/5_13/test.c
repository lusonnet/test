#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int n, k, t;
//	scanf("%d %d", &n, &k);
//	int a[101];
//	int sz = sizeof(a) / sizeof(a[0]);
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &a[i]);
//	}
//	for (int i = 0; i < k; i++)
//	{
//		for (int j = 0; j < n - 1; j++)
//		{
//			if (a[j] > a[j + 1])
//			{
//				t = a[j];
//				a[j] = a[j + 1];
//				a[j + 1] = t;
//			}
//		}
//	}
//	for (int i = 0; i < n - 1; i++)
//	{
//		printf("%d ", a[i]);
//	}
//	printf("%d", a[n-1]);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	char ch;
//	int count = 0;
//	while (1)//循环一次排查一个单词
//	{
//		int a = 0;
//		scanf("%c", &ch);
//		while (ch != '\n' && ch != ' ' && ch != '.')
//		{
//			a++;
//			scanf("%c", &ch);
//		}
//		if (a != 0)
//		{
//			count++;
//			if (count == 1)
//				printf("%d", a);
//			else
//				printf(" %d", a);
//
//		}
//		if (ch == '.')
//			break;
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int n;
//	int count = 1;
//	scanf("%d", &n);
//	if (n > 0)
//	{
//		while (n > 9)
//		{
//			n /= 10;
//			count++;
//		}
//	}
//	else if (n == 0)
//	{
//		printf("ling");
//	}
//	else
//	{
//
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	char c ;
//	c = getchar();
//	while (c != '\n')
//	{
//		if (c == '-')
//			printf("fu");
//		else if (c == '0')
//			printf("ling");
//		else if (c == '1')
//			printf("yi");
//		else if (c == '2')
//			printf("er");
//		else if (c == '3')
//			printf("san");
//		else if (c == '4')
//			printf("si");
//		else if (c == '5')
//			printf("wu");
//		else if (c == '6')
//			printf("liu");
//		else if (c == '7')
//			printf("qi");
//		else if (c == '8')
//			printf("ba");
//		else if (c == '9')
//			printf("jiu");
//		c = getchar();
//		if (c != '\n')
//			printf(" ");
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int a, b;
//	scanf("%d/%d", &a, &b);
//	int i = a;
//	int j = b;
//	int m;
//	for (int m = 2; m <=a; m++)
//	{
//		while (i % m == 0&&j % m ==0)
//		{
//			i /= m;
//			j /= m;
//		}
//	}
//	printf("%d/%d", i, j);
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	int n, k, i, j;
//	scanf("%d%d", &n, &k);
//	char a[101][11];
//	for (i = 0; i < n; i++)
//	{
//		scanf("%s", a[i]);
//	}
//	for (i = 0; i < k; i++)
//	{
//		for (j = 0; j < n - 1 - i; j++)
//		{
//			if (strcmp(a[j], a[j + 1]) > 0)
//			{
//				char t[11];
//				strcpy(t, a[j]);
//				strcpy(a[j], a[j + 1]);
//				strcpy(a[j + 1], t);
//			}
//		}
//	}
//	for (i = 0; i < n; i++)
//		printf("%s\n", a[i]);
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	int len1, len2;
//	int i, j, k, f;
//	int flag = 1;
//	char s1[81], s2[81];
//	gets(s1);
//	gets(s2);
//	len1 = strlen(s1);
//	len2 = strlen(s2);
//	while (flag)
//	{
//		for (i = 0; i < len1; i++)
//		{
//			flag = 0;
//			if (s1[i] == s2[0])
//			{
//				f = 1;
//				for (j = i, k = 0; k < len2; j++,k++)
//				{
//					if (s1[j] != s2[k])
//					{
//						f = 0;
//						break;
//					}
//				}
//				if (f)
//				{
//					flag = 1;
//					for (; j < len1; j++,i++)
//					{
//						s1[i] = s1[j];
//					}
//					for (; i < len1; i++)
//					{
//						s1[i] = '\0';
//					}
//					break;
//				}
//			}
//			len1 = strlen(s1);
//		}
//	}
//	puts(s1);
//	return 0;
//}

//#include<stdio.h>
//void pr1(double a1, double b1);
//void pr2(double a2, double b2);
//void pr3(double a3, double b3);
//
//void pr1(double a1, double b1)
//{
//	if (b1 >= 0)
//		printf("(%.1lf+%.1lfi) ", a1, b1);
//	else
//		printf("(%.1lf%.1lfi)", a1, b1);
//}
//void pr2(double a2, double b2)
//{
//	if (b2 >= 0)
//		printf(" (%.1lf+%.1lfi) ", a2, b2);
//	else
//		printf(" (%.1lf%.1lfi)", a2, b2);
//
//}
//void pr3(double sb, double xb) {
//	if (-0.05 < sb && sb < 0.05 && -0.05 < xb && xb < 0.05) 
//	{ 
//		printf("= 0.0\n"); 
//	}
//	else if (-0.05 < sb && sb < 0.05) 
//	{ 
//		printf("= %.1lfi\n", xb); 
//	}
//	else if (-0.05 < xb && xb < 0.05) 
//	{ 
//		printf("= %.1lf\n", sb); 
//	}
//	else
//	{
//		if (xb > 0)printf("= %.1lf+%.1lfi\n", sb, xb);
//		else printf("= %.1lf%.1lfi\n", sb, xb);
//	}
//}
//int main()
//{
//	double a1, b1, a2, b2,sb , xb;
//	sb = a1 + a2;
//	xb = b1 + b2;
//	pr1(a1, b1);
//	printf("+");
//	pr2(a2, b2);
//	pr3(sb, xb);
//	
//	return 0;
//}

#include<stdio.h>
int main()
{

	return 0;
}