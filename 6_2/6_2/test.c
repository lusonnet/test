#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//#include<stdlib.h>
//
//struct Stu
//{
//	char name[20];
//	int price;
//};
////
////int name(const void* e1, const void* e2)
////{
////	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
////}
////test()
////{
////	int i;
////	struct Stu s[] = { {"C语言",20},{"Java",30},{"c++",15} };
////	int sz = sizeof(s) / sizeof(s[0]);
////	qsort(s, sz, sizeof(s[0]), name);
////	for (i = 0; i < s; ++i)
////	{
////		printf("%s ", s[i]);
////	}
////	printf("\n");
////
////}
//
//int cmp_int(const void*e1,const void*e2)
//{
//	return *(int*)e2 - *(int*)e1;//降序
//}
//
//int cmp_char(const void* e1, const void* e2)
//{
//	return *(char*)e1 - *(char*)e2;
//}
//
//int cmp_name(const void* e1, const void* e2)
//{
//	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
//}
//
//int cmp_price(const void* e1, const void* e2)
//{
//	return (((struct Stu*)e1)->price, ((struct Stu*)e2)->price);
//}
//int main()
//{
//	//数组排序
//	//int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//int sz = sizeof(arr) / sizeof(arr[0]);
//	//qsort(arr, sz, sizeof(arr[0]), cmp_int);
//
//	//字符排序
//	//char str[] = { 1,2,3,4,5 };
//	//int sz = sizeof(str) / sizeof(str[0]);
//	//qsort(str, sz, sizeof(char), cmp_char);
//	
//	//结构体排序
//	struct Stu s[] = { {"语文",20},{"数学",30},{"英语",15} };
//	int sz = sizeof(s) / sizeof(struct Stu);
//	//qsort(s, sz, sizeof(int), cmp_name);//名字
//	qsort(s, sz, sizeof(s), cmp_price);//价格
//	
//	
//	
//	return 0;
//}

int main()
{
	int a[3][4] = { 0 };

	printf("sizeof(a) = %d\n", sizeof(a));//代表整个二维数组大小
	printf("sizeof(a[0][0] = %d\n", sizeof(a[0][0]));//代表第一行第一个元素
	printf("sizeof(a[0]) = %d\n", sizeof(a[0]));//代表第一行元素总大小
	printf("sizeof(a[0]+1) = %d\n", sizeof(a[0]+1));//代表第一行第一个元素的地址跳过一个整型后的地址
	printf("sizeof(*(a[0]+1)) = %d\n", sizeof(*(a[0]+1)));//代表第一行第二个元素解引用后的类型大小
	printf("sizeof(a+1) = %d\n", sizeof(a+1));//代表首元素地址（即第一行地址） + 1 - 即第二行地址
	printf("sizeof(*(a + 1)) = %d\n", sizeof(*(a + 1)));//代表*(a+1) <=> a[1],第二行元素总大小
	printf("sizeof(&a[0]+1) = %d\n", sizeof(&a[0]+1));//&a[0]代表取出第一行的地址，+1代表取出第二行的地址
	printf("sizeof(*(&a[0] + 1)) = %d\n", sizeof(*(&a[0] + 1)));//解引用，计算的是第二行
	printf("sizeof(*a) = %d\n", sizeof(*a));//代表对第一行地址解引用，计算的是第一行元素总大小
	printf("sizeof(a[3]) = %d\n", sizeof(a[3]));

	return 0;
}