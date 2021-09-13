#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//union Un
//{
//	char c;
//	int i;
//};
//int main()
//{
//	union Un u;
//	printf("%p\n", &u);
//	printf("%p\n", &(u.c));
//	printf("%p\n", &(u.i));
//
//	return 0;
//}

int main()
{
	union Un
	{
		char c;
		int i;
	};
	union Un u;
	u.i = 1;
	if (u.c == 1)
	{
		printf("Ð¡¶Ë\n");
	}
	else
		printf("´ó¶Ë\n");
	return 0;
}