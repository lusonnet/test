#define _CRT_SECURE_NO_WARNINGS 1

//#include<string.h>
//int main()
//{
//	int n,i,l;
//	char a[100];
//	gets(a);
//	scanf("%d", &n);
//	if (n > strlen(a))
//	{
//		n = n % strlen(a);
//	}
//	for (i = n; i < strlen(a); i++)
//	{
//		printf("%c", a[i]);
//	}
//	for (int i = 0; i < n; i++)
//	{
//		printf("%c", a[i]);
//	}
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	int n,i;
//	char a[100];
//	gets(a);
//	scanf("%d", &n);
//	if (n > strlen(a))
//	{
//		n = n % strlen(a);
//	}
//	for (i = n; i < strlen(a); i++)
//	{
//		printf("%c", a[i]);
//	}
//	for (i = 0; i < n; i++)
//	{
//		printf("%c", a[i]);
//	}
//	return 0;
//}
//
#include<stdio.h>
//int main()
//{
//	int i,t,j;
//	int a[1001];
//	int n;
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		a[i] = i + 1;
//	}
//	for(i = n - 1; i >= 0; i--)
//	{
//		for (int k = 1; k <= 3; k++)
//		{
//			t = a[0];
//			for (j = 0; j < i; j++)
//			{
//				a[j] = a[j + 1];
//			}
//			a[j] = t;
//		}
//	}
//	printf("%d", a[0]);
//	return 0;
//}

//int main()
//{
//	int a = 1;
//	int b = (++a) + (++a) + (++a);
//	printf("%d", b);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	printf("%p\n", &a);// & - 取地址操作符
//	int* pa = &a;
//	*pa = 20;// * - 解引用操作符 - 间接访问操作符
//	printf("%d\n", a);//20
//	return 0;
//}

//int main()
//{
//	int a = (int)3.14;
//	printf("%d", a);
//	return 0;
//}

void test1(int arr[])
{
	printf("%d\n", sizeof(arr));
}

void test2(int ch[])
{
	printf("%d\n", sizeof(ch));
}
int main()
{
	int arr[10] = { 0 };
	char ch[10] = { 0 };
	printf("%d\n", sizeof(arr));
	printf("%d\n", sizeof(ch));
	test1(arr);
	test2(ch);
	return 0;
}