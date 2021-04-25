#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
////数组创建
//int arr[3][4];
//char arr[2][4];
//double arr[2][4];

//int main()
//{
	//int arr[3][4];

	//int arr[3][4] = { 1,2,3,4,5,6,7,8,9,10,11,12 };//完全初始化
	//int arr[3][4] = { 1, 2, 3, 4, 5, 6, 7 };//不完全初始化 - 未赋值的元素会自动补0（如果是字符数组，其实是补\0）
	//int arr[3][4] = { {1,2},{3,4},{5,6} };//按行分段赋值
	//int arr[ ][4] = { {1,2},{3,4},{5,6} };//有几行是可以省略的，但是一行有几个元素是不可以省略的。

	//int arr[][4] = { {1,2},{3,4},{5,6} };
	//int i = 0;
	//int j = 0;
	//int* p = &arr[0][0];
	//for (i = 0; i < 12; i++)
	//{
	//	printf("%d ", *p);
	//	p++;
	//}
//}
	//for (i = 0; i < 3; i++)
	//{
	//	for (j = 0; j < 4; j++)
	//	{
			//printf("%d ", arr[i][j]);
		//	printf("&arr[%d][%d] = %p\n",i,j, &arr[i][j]);
		//}
		//printf("\n");
//	}
//	return 0;
//}

//void bubble_sort(int arr[],int sz)
//{
//	int i = 0;
//	int t = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		int flag = 1;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				t = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = t;
//				flag = 0;
//			}
//		}
//		if (flag == 1)
//		{
//			break;
//		}
//	}
//
//}
//int main()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//升序 - 冒泡排序
//	bubble_sort(arr,sz);
//	//printf("%d", arr);
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", &arr);
//	printf("%p\n", &arr+1);//数组加1
//	printf("%p\n", arr);
//	printf("%p\n", arr+1);//数组首元素加1
//
//}



