#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int a = 1;
//	int b = 0;
//	if (a > 5)
//		b = 3;
//	else
//		b = -1;
//
//	int b = a > 5 ? 3 : -1;
//	return 0;
//}

//int main()
//{
//	int a = 3;
//	int b = 5;
//	int c = 0;
//	int d = (c = 5, a = c + 3, b = a - 4, c += 5);
//	printf("%d", d);
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	int b = 0;
//	while ()
//	{
//
//	}
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%d\n", arr[4]);
//	return 0;
//}

//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int ret = Add(a, b);
//	printf("%d", ret);
//	return 0;
//}

//struct Book
//{
//	char name[20];
//	char id[10];
//	int price;
//};
//
//int main()
//{
//	int num = 10;
//	struct Book b = { "C语言","1234654",55 };
//	struct Book * pb = &b ;
//	printf("书名：%s\n", b.name);
//	printf("书号：%s\n", b.id);
//	printf("定价：%d\n", b.price);
//
//	printf("书名：%s\n", (*pb).name);
//	printf("书号：%s\n", (*pb).id);
//	printf("定价：%d\n", (*pb).price);
//
//	printf("书名：%s\n", pb->name);
//	printf("书号：%s\n", pb->id);
//	printf("定价：%d\n", pb->price);
//
//
//	return 0;
//}


void exchange(char* s[], int sz)
{
	char* left = s;
	char* right = s[sz - 1];
	while (left < right)
	{
		char t = * left;
		*left = *right;
		*right = t;
		left++;
		right--;
	}
}

int main()
{
	char s[101];
	while (gets(s))
	{
		int sz = sizeof(s) / sizeof(s[0]);
		exchange(s, sz);
	}
	return 0;
}