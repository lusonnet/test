#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


//给定两个数，求最大公约数

//法一
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d%d", &m, &n);
//	int max = m>n?n:m;//假设最大公约数是m和n的较小值
//	while (1)
//	{
//		if (m % max == 0 && n % max == 0)
//		{
//			printf("最大公约数是：%d\n", max);
//			break;
//		}
//		max--;
//	}
//	return 0;
//}

//法二：辗转相除法
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d%d", &m, &n);
//	int t = 0;
//
//	while (t = m % n)
//	{
//		m = n;
//		n = t;
//	}
//	printf("最大公约数：%d\n", n);
//	//最小公倍数 = 两数相乘/最大公约数
//
//	return 0;
//}


//int main()
//{
//	int y = 0;
//	int count=0;
//	for (y = 1000; y <= 2000; y++)
//	{
		//判断y是不是闰年
		//1.被4整除，不能被100整除
		//2.能被400整除是闰年
		//if (y % 4 == 0)
		//{
		//	if (y % 400 != 0)
		//	{
		//		printf("%d", y);
		//		count++;
		//	}
		//}
		//if (y % 400 == 0)
		//{
		//	printf("%d", y);
		//	count++;
		//}

		//if ((y % 4 == 0) && (y % 100 != 0) || (y % 400 == 0))
		//{
		//	printf("%d ", y);
		//	count++;
//		//}
//	}
//	printf("\ncount=%d\n", count);
//	return 0;
//}


//判断是否为素数
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		int j = 0;
//		for (j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		//执行break跳到这
//		if (i == j)
//		{
//			printf("%d ", i);
//		}
//	}
//}

//int main()
//{
//	int count = 0;
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		int j = 0;
//		int flag = 1;//假设i就是素数(相当于一个标记，方便判断是否为素数)
//		for (j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;//i%j==0  --则i不为素数，flag变为0
//				break;
//			}
//		}
//		//执行break跳到这
//		if (flag == 1)//如果不为素数，则flag还是等于1
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\ncoun = %d\n", count);
//	return 0;
//}


//int main()
//{
//flag:
//	printf("hehe\n");
//	printf("haha\n");
//
//	goto flag;
//	return 0;
//}

//关机小程序
//使电脑在1分钟内关机，如果输入“我是猪”，则停止关机

#include<string.h>
#include<stdlib.h>
//int main()
//{
//	//system()---执行系统命令
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//again:
//	printf("请注意，你的电脑将在一分钟后关机，如果输入：努力搬砖，就取消关机\n");
//	scanf("%s", input);
//	if (strcmp(input, "努力搬砖") == 0)
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//}


//如何不用goto去执行
//int main()
//{
//	//system()---执行系统命令
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//	while (1)
//	{
//		printf("请注意，你的电脑将在一分钟后关机，如果输入：努力搬砖，就取消关机\n");
//		scanf("%s", input);
//		if (strcmp(input, "努力搬砖") == 0)
//		{
//			system("shutdown -a");
//			break;
//		}
//	}
//	return 0;
//	
//}


//for (...)
//{
//	for (...)
//	{
//		for (...)
//		{
//			for (...)
//			{
//				if (disaster)
//					goto error;
//			}
//		}
//	}
//}
//...
//error:
//	if(disaster)
//		//处理错误情况

int main()
{
	char arr[] = "hello bit";
	memset(arr, 'x', 5);
	printf("%s\n", arr);
	return 0;
}