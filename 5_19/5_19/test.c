#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//#include<string.h>
//
//void reverse(char* left, char* right)//ִ�н�������
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
//	gets(arr);//��ȡ�ַ���
//	int len = strlen(arr);//��ȡ�ַ�������
//	reverse(arr, arr + len - 1); //���������ַ���
//	
//	char* start = arr;
//	while (*start)
//	{
//		char* end = start;
//		while (*end != ' ' && *end != '\0')//����1&&����2
//		{
//			end++;//�������ʳ���
//		}
//		reverse(start, end - 1);//������������
//		if (*end == ' ') //��Ӧ����1
//			start = end + 1;
//		else             //��Ӧ����2����ֹԽ��
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
