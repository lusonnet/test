#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


//void hanoi(int n, char a, char b, char c)
//{
//	if (n == 1) //限制条件
//	{
//		printf("%c -> %c\n", a, c);
//	}
//	else
//	{
//		//越来越接近限制条件 - (n-1)
//		hanoi(n - 1, a, c, b);//a借助c移动到b
//		printf("%c -> %c\n", a, c); //直接操作
//		hanoi(n - 1, b, a, c);//b借助a移动到c
//	}
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	hanoi(n,'A','B','C');
//	return 0;
//}


