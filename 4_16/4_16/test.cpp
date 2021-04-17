#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
//#include<string.h>
//
//int main()
//{
//	char arr1[20] = { 0 };
//	char arr2[] = "hello bit";
//	strcpy(arr1, arr2);
//	printf("%s", arr1);
//	return 0;
//}



//int main()
//{
//	char arr[] = "hello bit";
//	memset(arr, 'x', 5);
//
//	printf("%s\n", arr);
//	return 0;
//}

//ret_type fun_name(paral, * )
//{
//	statement;
//}

//int get_max(int x, int y)
//{
//	int z = 0;
//	if (x > y)
//		z = x;
//	else
//		z = y;
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = get_max(a, b);
//
//	printf("max=%d\n", max);
//	return 0;
//}


//函数返回类型的地方写：void，表示这个函数不返回任何值，也不需要返回
//                    如果什么都不写，则会自动返回int类型
//void Swap2(int* pa, int* pb)
//{
//	int tmp = 0;
//	tmp = *pa;
//	*pa = tmp;
//}
//
//void Swap1(int x, int y)
//{
//	int z = 0;
//	z = x;
//	x = y;
//	y = z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	Swap1(a, b);
//	printf("交换前：a= %d b = %d\n", a, b);
//	Swap2(&a, &b);
//	printf("交换后：a= %d b = %d", a, b);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	*pa = 20;
//	printf("%d", a);
//	return 0;
//}


//#include<math.h>
//int is_prine(int n)
//{
//	int j = 0;
//	for (j = 2; j < sqrt(n); j++)
//	{
//		if (n % j == 0)
//			return 0;
//	}
//	return 1;
//}
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		if (is_prine(i) == 1)
//		{
//			printf("%d是素数 \n", i);
//			count++;
//		}
//	}
//	printf("%d ", count);
//	return 0;
//}

//int is_leap_year(int n)
//{
	//if (n % 4 == 0 && n % 100 != 0 || n % 400 == 0)
	//{
	//	return 1;
	//}
	//else
	//	return 0;

//	return (n % 4 == 0 && n % 100 != 0 || n % 400 == 0);
//}
//int main()
//{
//	int y = 0;
//	for (y = 1000; y <= 2000; y++)
//	{
//		if (is_leap_year(y) == 1)
//		{
//			printf("%d ",y);
//		}
//	}
//}


//int binary_search(int a[], int k)
//{
//	int left = 0;
//	int sz = sizeof(a) / sizeof(a[0]);
//	
//	int right = sz - 1;
//	
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (a[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (a[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int key = 7;
//	//int sz = sizeof(arr) / sizeof(arr[0]);
//	//找不到返回-1(不与数组下标冲突)
//
//	int ret = binary_search(arr,key);
//	if (-1 == ret)
//	{
//		printf("找不到\n");
//	}
//	else
//	{
//		printf("找到了，下标是：%d\n", ret);
//	}
//	return 0;
//}


//void Add(int* p)
//{
//	(*p)++;
//}
//int main()
//{
//	int num = 0;
//	Add(&num);
//	printf("%d\n", num);
//	Add(&num);
//	printf("%d\n", num);
//	Add(&num);
//	printf("%d\n", num);
//	return 0;
//}

