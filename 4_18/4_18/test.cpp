#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//函数调用自己--递归
//int mian()
//{
//
//}

//int is_leap_year(int n)
//{
//	return (n % 4 == 0 && n % 100 != 0) || n % 400 == 0;
//}
//int main()
//{
//	int y;
//	scanf("%d", &y);
//	if (is_leap_year(y) == 1)
//	{
//		printf("%d 是闰年",y);
//	}
//	else
//	{
//		printf("%d 不是闰年", y);
//	}
//	return 0;
//
//}

//void swap(int* x, int* y)
//{
//	int t;
//	t = *x;
//	*x = *y;
//	*y = t;
//	
//}
//int main()
//{
//	int a, b;
//	scanf("%d %d", &a, &b);
//	swap(&a, &b);
//	printf("%d %d", a, b);
//	return 0;
//}
//

//void Print(int n)
//{
//	int i, j;
//	for (i = 1; i <= n; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d ", j, i, i * j);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	Print( n);
//	return 0;
//}

//void test3()
//{
//	printf("hehe\n");
//}
//
//int test2()
//{
//	test3();
//	return 0;
//}
//
//int main()
//{
//	test2();
//	return 0;
//}

//#include<string.h>
//int main()
//{
	//int len = strlen("abc");
	//printf("%d\n", len);

	//printf("%d\n", strlen("abc"));
	//int a = printf("%d\n", 43);
	//printf("%d", a);
	
	//printf("%d", printf("%d", printf("%d", 43)));
//	return 0;
//}


//int main()
//{
//	printf("hehe\n");
//	main();
//	return 0;
//}

//void print(unsigned int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//int main()
//{
//	unsigned int num = 0;
//	scanf("%u", &num);
//	print(num);
//
//	return 0;


//void test(int n)
//{
//	if (n < 10000)
//	{
//		test(n + 1);
//	}
//}
//
//int main()
//{
//	test(1);
//	return 0;
//}



//int my_strlen(char* str)
//{
//	int count;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//
//	}
//}

//int my_strlen(char* str)
//{
//	if (*str != '\0')
//	{
//		return 1 + my_strlen(str + 1);
//
//	}
//	else
//		return 0;
//}
//int main()
//{
//	char arr[] = "bit";
//
//	printf("%d\n", my_strlen(arr));
//
//	return 0;
//}