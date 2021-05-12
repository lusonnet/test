#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int a = 3;
//	int b = 0;
	//if (a && b)
	//{
	//	printf("hehe");
	//}

//	if (a || b)
//	{
//		printf("hehe");
//	}
//
//	return 0;
//}

int main()
{
	int i = 0, a = 0, b = 2, c = 3, d = 4;
	//i = a++ && ++b && d++;
	
	i = a++ || ++b || d++;

	printf("a = %d\nb = %d\nc = %d\nd = %d\n", a, b, c, d);
	return 0;
}