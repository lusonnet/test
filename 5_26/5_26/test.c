#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int n = 9;
//	float* pfloat = (float*)&n;
//	printf("n = %d\n", n);
//	printf("*pfloat = %f\n", *pfloat);
//
//	*pfloat = 9.0;
//	printf("n = %d\n", n);
//	printf("*pfloat = %f\n", *pfloat);
//}

//array[i][j]=a[i-1][j]+a[i-1][j-1] - 关键
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int a[14][14];
//	for (int i = 0; i < n; i++)//初始化
//	{
//		int j = 0;
//		for (j = 0; j <= i; j++)
//		{
//			if (j == 0 || i == j)//令第一列和对角线为1
//			{
//				a[i][j] = 1;
//			}
//			else
//			{
//				a[i][j] = a[i - 1][j] + a[i - 1][j - 1];
//			}
//		}
//	}
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n - 1-i; j++)
//		{
//			printf(" ");
//		}
//		for (int j = 0; j <= i; j++)
//		{
//			printf("%d ", a[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//int main()
//{
//	//1为真，0为假
//	//3个真，1个假
//	int kill = 0;
//	for (kill == 'a'; kill <= 'd'; kill++)
//	{
//		if (((kill != 'a') + (kill == 'c') + (kill == 'd') + (kill != 'd')) == 3)
//			printf("凶手为：%c\n", kill);
//	}
//
//	return 0;
//}


int main()
{
	//int one, two, three, four, five;
	//int com = 0;
	//for (com == 'a'; com <= 'e'; com++)
	//{
	//	if((two=='b'||three=='a')+
	//}
	//if(one == )

	int a, b, c, d, e =0;
	for (a = 1; a <= 5; a++)
	{
		for (b = 1; b <= 5; b++)
		{
			for (c = 1; c <= 5; c++)
			{
				for (d = 1; d <= 5; d++)
				{
					for (e = 1; e <= 5; e++)
					{
						if (((b == 2) + (a == 3)) == 1 &&
							((b == 2) + (e == 4)) == 1 &&
							((c == 1) + (d == 2)) == 1 &&
							((c == 5) + (d == 3)) == 1 &&
							((e == 4) + (a == 1))== 1 &&
							(a * b * c * d * e )== 120)
							printf("a=%d\nb=%d\nc=%d\nd=%d\ne=%d\n", a, b, c, d, e);
					}
				}
			}
		}
	}
	return 0;
}

//int main()
//{
//	int a[3][4] = { {1,2,3,4},{2,3,4,5},{3,4,5,6} };
//	int n;
//	scanf("%d", &n);
//	int* p = a;
//	for (int i = 0; i < 3; i++)
//	{
//
//		for (int j = 0; j < 4; j++)
//		{
//			if((i+j))
//		}
//	}
//}