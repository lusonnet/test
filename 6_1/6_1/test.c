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
//	printf("sizeof(a) = %d\n", sizeof(a));//16
//	printf("sizeof(a+0) = %d\n", sizeof(a+0));// 4/8(取决于平台) - 1的地址
//	printf("sizeof(*a) = %d\n", sizeof(*a));// 4
//	printf("sizeof(a+1) = %d\n", sizeof(a+1));// 4/8
//	printf("sizeof(a[1]) = %d\n", sizeof(a[1]));//4
//	printf("\n");
//	printf("sizeof(&a) = %d\n", sizeof(&a));
//	printf("sizeof(*&a) = %d\n", sizeof(*&a));
//	printf("sizeof(&a + 1) = %d\n", sizeof(&a + 1));
//	printf("sizeof(&a[0]) = %d\n", sizeof(&a[0]));
//	printf("sizeof(&a[0]+1) = %d\n", sizeof(&a[0]+1));
//
//	return 0;
//}

//int main()
//{
	//char arr[] = { 'a','b','c','d','e','f' };
	//printf("sizeof(arr) = %d\n", sizeof(arr));
	//printf("sizeof(arr+0) = %d\n", sizeof(arr+0));
	//printf("sizeof(*arr) = %d\n", sizeof(*arr));
	//printf("sizeof(arr[1]) = %d\n", sizeof(arr[1]));
	//printf("sizeof(&arr) = %d\n", sizeof(&arr));
	//printf("sizeof(&arr+1) = %d\n", sizeof(&arr+1));
	//printf("sizeof(&arr[0]+1) = %d\n", sizeof(&arr[0]+1));
	
	//char arr[] = { 'a','b','c','d','e','f' };
	//printf("strlen(arr) = %d\n", strlen(arr));
	//printf("strlen(arr + 0) = %d\n", strlen(arr + 0));
	//printf("strlen(*arr) = %d\n", strlen(*arr));
	//printf("strlen(arr[1]) = %d\n", strlen(arr[1]));
//	printf("strlen(&arr) = %d\n", strlen(&arr));
//	printf("strlen(&arr + 1) = %d\n", strlen(&arr + 1));
//	printf("stelen(&arr[0] + 1) = %d\n", strlen(&arr[0] + 1));
//	return 0;
//}


//int main()
//{
//	char arr[] = "abcdef";
	//printf("sizeof(arr) = %d\n", sizeof(arr));
	//printf("sizeof(arr + 0) = %d\n", sizeof(arr + 0));//地址
	//printf("sizeof(*arr) = %d\n", sizeof(*arr));
	//printf("sizeof(arr[1]) = %d\n", sizeof(arr[1]));
	//printf("sizeof(&arr) = %d\n", sizeof(&arr));//地址
	//printf("sizeof(&arr + 1) = %d\n", sizeof(&arr + 1));//地址
	//printf("sizeof(&arr[0] + 1) = %d\n", sizeof(&arr[0] + 1));//地址
	//printf("strlen(arr) = %d\n", strlen(arr));
	//printf("strlen(arr + 0) = %d\n", strlen(arr + 0));
	//printf("%d\n", strlen(*arr));
	//printf("%d\n", strlen(arr[1]));
//	printf("strlen(&arr) = %d\n", strlen(&arr));
//	printf("strlen(&arr + 1) = %d\n", strlen(&arr + 1));
//	printf("strlen(&arr[0] + 1) = %d\n", strlen(&arr[0] + 1));
//
//	return 0;
//}

//int main()
//{
//	char* p = "abcdef";
//	printf("sizeof(p) = %d\n", sizeof(p));
//	printf("sizeof(p + 0) = %d\n", sizeof(p + 0));
//	printf("sizeof(*p) = %d\n", sizeof(*p));
//	printf("sizeof(p[1]) = %d\n", sizeof(p[1]));
//	printf("sizeof(&p) = %d\n", sizeof(&p));
//	printf("sizeof(&p + 1) = %d\n", sizeof(&p + 1));
//	printf("sizeof(&p[0] + 1) = %d\n", sizeof(&p[0] + 1));
//	return 0;
//}

int main()
{
	char* p = "abcdef";
	printf("strlen(p) = %d\n", strlen(p));
	printf("strlen(p + 0) = %d\n", strlen(p + 0));
	//printf("strlen(*p) = %d\n", strlen(*p));
	//printf("strlen(p[1]) = %d\n", strlen(p[1]));
	printf("strlen(&p) = %d\n", strlen(&p));
	printf("strlen(&p + 1) = %d\n", strlen(&p + 1));
	printf("strlen(&p[0] + 1) = %d\n", strlen(&p[0] + 1));
	return 0;
}