#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int a, b = 0;
//	while (scanf("%x%x", &a, &b) != EOF)
//	{
//		printf("%d\n", a + b);
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int n,i;
//	char str = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		for (i = 0; i < n; i++)
//		{
//			gets(str);
//		}
//	}
//	return 0;
//}


void print(int* ptr, int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", *(ptr + i));
	}
}

//void test(char*)
//{
//
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
////	print(p, sz);
//	char ch = 'w';
//	test(&ch);
//
//	char* p1 = &ch;
//	test(p1);
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	int** ppa = &pa;
//	test(ppa);
//	test(&pa);
//
//	int* arr[10] = { 0 };
//	test(arr);//传存放一级指针的数组也是可以的
//	printf("%d\n", a);
//	return 0;
//}

int f(int n)
{}

int main()
{
	int (*pf)(int) = &f;
	int ret = (*pf)(3, 5);
	//等价于int ret = f(3, 5);
	printf("%p\n", &f);
	printf("%p\n", f);
	return 0;
}