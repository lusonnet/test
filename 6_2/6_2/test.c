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
////	struct Stu s[] = { {"C����",20},{"Java",30},{"c++",15} };
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
//	return *(int*)e2 - *(int*)e1;//����
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
//	//��������
//	//int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//int sz = sizeof(arr) / sizeof(arr[0]);
//	//qsort(arr, sz, sizeof(arr[0]), cmp_int);
//
//	//�ַ�����
//	//char str[] = { 1,2,3,4,5 };
//	//int sz = sizeof(str) / sizeof(str[0]);
//	//qsort(str, sz, sizeof(char), cmp_char);
//	
//	//�ṹ������
//	struct Stu s[] = { {"����",20},{"��ѧ",30},{"Ӣ��",15} };
//	int sz = sizeof(s) / sizeof(struct Stu);
//	//qsort(s, sz, sizeof(int), cmp_name);//����
//	qsort(s, sz, sizeof(s), cmp_price);//�۸�
//	
//	
//	
//	return 0;
//}

int main()
{
	int a[3][4] = { 0 };

	printf("sizeof(a) = %d\n", sizeof(a));//����������ά�����С
	printf("sizeof(a[0][0] = %d\n", sizeof(a[0][0]));//�����һ�е�һ��Ԫ��
	printf("sizeof(a[0]) = %d\n", sizeof(a[0]));//�����һ��Ԫ���ܴ�С
	printf("sizeof(a[0]+1) = %d\n", sizeof(a[0]+1));//�����һ�е�һ��Ԫ�صĵ�ַ����һ�����ͺ�ĵ�ַ
	printf("sizeof(*(a[0]+1)) = %d\n", sizeof(*(a[0]+1)));//�����һ�еڶ���Ԫ�ؽ����ú�����ʹ�С
	printf("sizeof(a+1) = %d\n", sizeof(a+1));//������Ԫ�ص�ַ������һ�е�ַ�� + 1 - ���ڶ��е�ַ
	printf("sizeof(*(a + 1)) = %d\n", sizeof(*(a + 1)));//����*(a+1) <=> a[1],�ڶ���Ԫ���ܴ�С
	printf("sizeof(&a[0]+1) = %d\n", sizeof(&a[0]+1));//&a[0]����ȡ����һ�еĵ�ַ��+1����ȡ���ڶ��еĵ�ַ
	printf("sizeof(*(&a[0] + 1)) = %d\n", sizeof(*(&a[0] + 1)));//�����ã�������ǵڶ���
	printf("sizeof(*a) = %d\n", sizeof(*a));//����Ե�һ�е�ַ�����ã�������ǵ�һ��Ԫ���ܴ�С
	printf("sizeof(a[3]) = %d\n", sizeof(a[3]));

	return 0;
}