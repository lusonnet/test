#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int a = 0x11223344;
//	int* pa = &a;
//	*pa = 0;
//
//	char* pa = &a;
//	*pa = 0;
//
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	char* pc = arr;
//	printf("%p\n", p);
//	printf("%p\n", p + 1);
//	printf("%p\n", pc);
//	printf("%p\n", pc + 1);
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = 1;
//	}
//	return 0;
//}

//int main()
//{
//    int i = 0;
//    int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//    for (i = 0; i <= 12; i++)
//    {
//        arr[i] = 0;
//        printf("hello bit\n");
//    }
//    return 0;
//}


//void change(char arr1[], int sz)
//{
//	char arr2[1000] = { 0 };
//	for (int i = 0; i < sz; i += 2)
//	{
//		for (int j = 0; j < sz/2; j++)
//		{
//			arr2[j] = arr1[i]; 
//			break;
//		}
//	}
//	for (int i = 1; i < sz; i += 2)
//	{
//		for (int j = sz / 2 + 1; j < sz ; j++)
//		{
//			arr2[j] = arr1[i];
//			break;
//		}
//
//	}
//	puts(arr2);
//} 
//int main()
//{
//	char c;
//	char arr1[1000];
//	while (c = getchar() != '\n')
//	{
//		int sz = strlen(arr1);
//		change(arr1, sz);
//	}
//
//	return 0;
//}
//

//void change(int arr[], int sz)
//{
//	int left = 0;;
//	int right = sz - 1;
//	while (left < right)
//	{
//		while (left < right && arr[left] % 2 == 1)
//		{
//			left++;
//		}
//		while (left < right && arr[right] % 2 == 0)
//		{
//			right--;
//		}
//		if (left < right)
//		{
//			int t = arr[left];
//			arr[left] = arr[right];
//			arr[right] = t;
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 2, 1, 4, 3, 6, 5 };
//	int sz = sizeof(arr) / sizeof(arr[0]);	
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	change(arr, sz);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//#include<stdlib.h>
//int a = 1;
//
//void test()
//{
//	int a = 2;
//	a += 1;
//}
//int main()
//{
//	test();
//	printf("%d\n", a);
//	
//	return 0;
//}

int main()
{
	int year = 1009, * p = &year;
	/*
	a.*p+=1;
	b.(*p)++;
	c.++(*p);
	d.*p++;
	/
	return 0;
}