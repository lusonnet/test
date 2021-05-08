#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
//int main()
//{
//	float a = 6.0f / 5.0f;
//	float a = 6 / 5.0;
//	printf("%f\n", a);
//	return 0;
//}


//int main()
//{
	//int a = 7 % 3.0;
	//printf("%d\n", a);

	//int a = -1;
	//int b = a >> 1;

	//printf("b = %d\n", b);
	//printf("a = %d\n", a);

	//int a = 3;
	//int b = 5;
	//int c = a | b;
	//printf("%d", c);

	//int a = 3;
	//int b = 5;
	//printf("a = %d b = %d\n", a, b);
	//a = a + b;
	//b = a - b;
	//a = a - b;
	//printf("a = %d b = %d\n", a, b);

	//a = a ^ b;
	//b = a ^ b;
	//a = a ^ b;
	//printf("a = %d b = %d\n", a, b);
	//return 0;
//}


//int main()
//{
	//int flag = 5;
	//if (flag)
	//{
	//	printf("hehe\n");
	//}
	//if (!flag)
	//{
	//	printf("haha\n");
	//}
//	int a = 10;
//	int arr[10] = { 0 };
//	
//	//计算数组大小
//	pritnf("%d\n", sizeof(arr));
//	pritnf("%d\n", sizeof(int [10]));
//
//	//计算int类型大小
//	printf("%d\n", sizeof(a));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof a);//从这也可以看出sizeof是一个操作符，不是函数
//	
//	short s = 5;
//	int a = 10;
//	printf("%d\n", sizeof(s = a + 2));
//	printf("%d\n", s);
//	return 0;
//}

//int main()
//{
//	int a = -1;
//	//对补码进行按位取反
//	int b = ~a;
//	printf("%d", b);
//	return 0;
//	
//}

//int main()
//{
//	int a = 10;
//	int b = a++;
//	printf("%d\n", a);//11
//	printf("%d\n", b);//10
//
//	int c = 10;
//	int d = ++a;
//	printf("%d\n", c);//11
//	printf("%d\n", d);//11
//
//	return 0;
//}


#include<stdio.h>
int main()
{
	int a, b, c;
	int count = 0;
	scanf("%d %d", &a, &b);
	c = a ^ b;
	for (int i = 0; i < 32; i++)
	{
		if ((c >> i)&1==1)
		{
			count++;
		}
	}
	printf("%d", count);
	return 0;
}