#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//#include<string.h>
//
//void reverse(char* left, char* right)//执行交换步骤
//{
//	while (left < right)
//	{
//		char t = 0;
//		t = *left;
//		*left = *right;
//		*right = t;
//
//		left++;
//		right--;
//
//	}
//}
//int main()
//{
//	char arr[100] = { 0 };
//	gets(arr);//获取字符串
//	int len = strlen(arr);//获取字符串长度
//	reverse(arr, arr + len - 1); //交换整个字符串
//	
//	char* start = arr;
//	while (*start)
//	{
//		char* end = start;
//		while (*end != ' ' && *end != '\0')//条件1&&条件2
//		{
//			end++;//单个单词长度
//		}
//		reverse(start, end - 1);//交换单个单词
//		if (*end == ' ') //对应条件1
//			start = end + 1;
//		else             //对应条件2，防止越界
//			start = end;
//	}
//	printf("%s\n", arr);
//	return 0;
//}


//int* test()
//{
//	int a = 10;
//	return &a;
//}
//int main()
//{
//	//int* p;
//	//*p = 20;
//
//	//int arr[10] = { 0 };
//	//int* p = arr;
//	//int i = 0;
//	//for (i = 0; i <= 10; i++)
//	//{
//	//	*p = i;
//	//	p++;
//	//}
//
//	int* p = test();
//	*p = 20;
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%d\n", &arr[9] - &arr[0]);
//
//	return 0;
//}
