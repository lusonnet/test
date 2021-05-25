#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
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
//
//#include<stdio.h>
//#define MAXN 10000    /* 定义符号常量表示数组a的长度 */
//
//int Count = 0;        /* 用全局变量Count表示数组a中待处理的元素个数 */
//void select(int a[], int option, int value); /* 决定对有序数组a进行何种操作的控制函数 */
//int input_array(int a[]);    /* 输入有序数组a的函数 */
//void print_array(int a[]);    /* 输出有序数组a的函数 */
//int insert(int a[], int value);    /* 在有序数组a中插入一个值为value的元素的函数 */
//int del(int a[], int value);    /* 删除有序数组a中等于value的元素的函数 */
//int modify(int a[], int value1, int value2); /* 将有序数组a中等于value1的元素，替换为value2 */
//int query(int a[], int value);     /* 用二分法在有序数组a中查找元素value的函数 */
//
//int insert(int a[], int value)
//{
//    int flag = 0, i = 0;
//    for (i; i < Count; i++)
//    {
//        if (value == a[i])
//            flag++;
//
//    }
//    if (flag != 0)return-1;
//    else
//    {
//        for (i = 0; value > a[i]; i++);
//        for (int j = Count; j != i; j--)
//            a[j] = a[j - 1];
//        a[i] = value;
//        Count++;
//        return i;
//    }
//}
//int del(int a[], int value)
//{
//
//}
//int modify(int a[], int value1, int value2)
//{
//
//}
//int query(int a[], int value)
//{
//
//}
//
//int main(void)
//{
//    int option, value, a[MAXN];
//
//    if (input_array(a) == -1) {     /* 调用函数输入有序数组 a */
//        printf("Error");        /* a不是有序数组，则输出相应的信息 */
//        return 0;
//    }
//
//    printf("[1] Insert\n");    /* 以下4行显示菜单*/
//    printf("[2] Delete\n");
//    printf("[3] Update\n");
//    printf("[4] Query\n");
//    printf("[Other option] End\n");
//    while (1) {            /* 循环 */
//        scanf("%d", &option);         /* 接受用户输入的编号 */
//        if (option < 1 || option > 4) {    /* 如果输入1、2、3、4以外的编号，结束循环 */
//            break;
//        }
//        scanf("%d", &value);         /* 接受用户输入的参数value */
//        select(a, option, value);         /* 调用控制函数 */
//        printf("\n");
//    }
//    printf("Thanks.");            /* 结束操作 */
//
//    return 0;
//}

//int main()
//{
//	int i = -20;
//	unsigned inrt j = 10;
//	printf("%d\n", i + j);
//	return 0;
//}

//char* match(char* s, char ch)
//{
//
//}

//int main()
//{
//	unsigned int i;
//	for (i = 9; i >= 0; i--)
//	{
//		printf("%u\n", i);
//	}
//	return 0;
//}

//int main()
//{
//	char a[1000];
//	int i;
//	for (i = 0; i < 1000; i++)
//	{
//		a[i] = -1 - i;
//	}
//	printf("%d", strlen(a));
//	return 0;
//}


//unsigned char i = 0;
//int main()
//{
//	for (i = 0; i <= 255; i++)
//	{
//		printf("hello\n");
//	}
//
//	return 0;
//}

int main()
{
	int n = 9;

	float* pfloat = (float*)&n;
	printf("n = %d\n", n);
	printf("pfloat = %f\n", *pfloat);

	*pfloat = 9.0;
	printf("num = %d\n", n);
	printf("pfloat = %f\n", *pfloat);

	return 0;
}