#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	char str1[] = "hello";
//	char str2[] = "hello";
//	char* str3 = "hello";
//	char* str4 = "hello";
//	if (str1 == str2)
//		printf("str1==str2\n");
//	else
//		printf("str1!=str2\n");
//
//	if (str3 == str4)
//		printf("str3==str4\n");
//	else
//		printf("str3!=str4\n");
//	return 0;
//
//
//	//char* ps = "hello world"; //1.
//	//char arr[] = "hello world"; //2.
//	//*arr = 'w';
//}

//int main()
//{
//	int a[] = { 1,2,3,4,5 };
//	int b[] = { 2,3,4,5,6 };
//	int c[] = { 3,4,5,6,7 };
//	int* arr[3] = { a,b,c };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", *(arr[i] + j));
//			printf("%d ", arr[i][j]);//模拟二维数组
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	int* arr1[10];
//	char* arr2[4];
//	char** arr3[5];
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	char ch = 'w';
//	char* pc = &ch;
//	int arr[10] = { 1,2,3,4,5 };
//	int(*parr)[10] = &arr;
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int* p1 = arr;//整型指针
//	int(*p2)[10] = &arr;//数组指针
//	printf("%p\n", p1);
//	printf("%p\n", p1 + 1);//跳过一个整型
//	printf("%p\n", p2);
//	printf("%p\n", p2 + 1);//跳过一个数组
//	return 0;
//}

//void print(int arr[3][5], int r, int c)//数组形式
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < r; i++)
//	{
//		for (j = 0; j < c; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}

//void print2(int(*p)[5], int r, int c)//指针形式
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < r; i++)
//	{
//		for (j = 0; j < c; j++)
//		{
//			printf("%d",*(*(p + i)+j));//寻找i行j列
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
//	//print1(arr, 3, 5);
//	print2(arr, 3, 5);
//	return 0;
//}

//int arr[5];
//int* parr1[10];
//int(*parr2)[10];
//int(*parr3[10])[5];


//int main()
//{
//	int arr[10] = { 0 };
//	int* arr2[20] = { 0 };
//	test(arr);
//	test2(arr2);
//
//	return 0;
//}

//void test(int arr[]) {}
//void test(int arr[10]) {}
//void test(int *arr) {}
//void test2(int *arr[20]) {}
//void test2(int **arr) {}


//void test(int arr[3][5]) {}
//void test(int arr[][]) {} //error
//void test(int arr[][5]) {}
//void test(int* arr) {} //error 传过来第一行的地址 - 即数组的地址 - 不能用一级指针接收
//void test(int* arr[5]) {}//error
//void test(int (*arr)[5]) {}
//void test(int **arr) {}

//int main()
//{
//	int arr[3][5] = { 0 };
//	test(arr);
//	return 0;
//}

int main()
{
	char a, b, c;
	char t;
	while (scanf("%c%c%c", &a, &b, &c) != EOF)
	{
		getchar(); //必须得加这玩意
		if (a > b)
		{
			t = a;
			a = b;
			b = t;
		}
		if (a > c)
		{
			t = a;
			a = c;
			c = t;
		}
		if (b > c)
		{
			t = b;
			b = c;
			c = t;
		}
		printf("%c %c %c\n", a, b, c);

	}
	return 0;
}