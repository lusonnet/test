#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
//
//union Un
//{
//	char a[5];
//	int i;
//};
//int main()
//{
//	union Un u;
//	printf("%d\n", sizeof(u));
//
//	return 0;
//}


//int main()
//{
//	int arr[10];
//	//开辟空间 - 40个字节
//	int* p = (int*)malloc(10 * sizeof(int));//malloc默认返回类型为void*,最好强制类型转换为int*
//	return 0;
//}

int main()
{
	int* p = (int*)malloc(40);
	if (p == NULL)
	{
		return 1;
	}
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d ", *(p + i));
	}
	free(p);
	p = NULL;
	return 0;
}