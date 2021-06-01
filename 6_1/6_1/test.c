#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//void rotake(char* a, int sz)
//{
//	int k,i,j;
//	int left, right;
//	int house;
//	scanf("%d", &k);
//	for (i = 0; i < k; i++)
//	{
//		house = a[0];
//		for (j = 0; j < sz - 1; j++)
//		{
//			a[j] = a[j+1];
//		}
//		a[j] = house;
//	}
//	printf("%s", a);
//}
//
//int main()
//{
//	char a[20] = "abcd";
//	int sz = strlen(a);
//	rotake(a,sz);
//	return 0;
//}

//int main()
//{
//	int a[] = { 1,2,3,4 };
//	printf("%d\n", sizeof(a));//16
//	printf("%d\n", sizeof(a+0));// 4/8(取决于平台) - 1的地址
//	printf("%d\n", sizeof(*a));// 4
//	printf("%d\n", sizeof(a+1));// 4/8
//	printf("%d\n", sizeof(a[1]));//4
//	printf("\n");
//	printf("%d\n", sizeof(&a));
//	printf("%d\n", sizeof(*&a));
//	printf("%d\n", sizeof(&a + 1));
//	printf("%d\n", sizeof(&a[0]));
//	printf("%d\n", sizeof(&a[0]+1));
//
//	return 0;
//}

//int main()
//{
	//char arr[] = { 'a','b','c','d','e','f' };
	//printf("%d\n", sizeof(arr));
	//printf("%d\n", sizeof(arr+0));
	//printf("%d\n", sizeof(*arr));
	//printf("%d\n", sizeof(arr[1]));
	//printf("%d\n", sizeof(&arr));
	//printf("%d\n", sizeof(&arr+1));
	//printf("%d\n", sizeof(&arr[0]+1));
	
//	char arr[] = { 'a','b','c','d','e','f' };
	//printf("%d\n", strlen(arr));
	//printf("%d\n", strlen(arr + 0));
	//printf("%d\n", strlen(*arr));
	//printf("%d\n", strlen(arr[1]));
	//printf("%d\n", strlen(&arr));
	//printf("%d\n", strlen(&arr + 1));
	//printf("%d\n", stelen(&arr[0] + 1));
//	return 0;
//}


//int main()
//{
//	char arr[] = "abcdef";
	//printf("%d\n", sizeof(arr));
	//printf("%d\n", sizeof(arr + 0));//地址
	//printf("%d\n", sizeof(*arr));
	//printf("%d\n", sizeof(arr[1]));
	//printf("%d\n", sizeof(&arr));//地址
	//printf("%d\n", sizeof(&arr + 1));//地址
	//printf("%d\n", sizeof(&arr[0] + 1));//地址
	//printf("%d\n", strlen(arr));
	//printf("%d\n", strlen(arr + 0));
	//printf("%d\n", strlen(*arr));
	//printf("%d\n", strlen(arr[1]));
//	printf("%d\n", strlen(&arr));
//	printf("%d\n", strlen(&arr + 1));
//	printf("%d\n", strlen(&arr[0] + 1));
//
//	return 0;
//}

//int main()
//{
//	char* p = "abcdef";
//	printf("%d\n", sizeof(p));
//	printf("%d\n", sizeof(p + 0));
//	printf("%d\n", sizeof(*p));
//	printf("%d\n", sizeof(p[1]));
//	printf("%d\n", sizeof(&p));
//	printf("%d\n", sizeof(&p + 1));
//	printf("%d\n", sizeof(&p[0] + 1));
//	return 0;
//}

//int main()
//{
//	char* p = "abcdef";
//	printf("%d\n", strlen(p));
//	printf("%d\n", strlen(p + 0));
//	printf("%d\n", strlen(*p));
//	printf("%d\n", strlen(p[1]));
//	printf("%d\n", strlen(&p));
//	printf("%d\n", strlen(&p + 1));
//	printf("%d\n", strlen(&p[0] + 1));
//	return 0;
//}