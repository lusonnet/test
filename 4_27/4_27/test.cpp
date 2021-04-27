#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int division(int sum1,int sum2)
//{
//	return;
//}
//int main()
//{
//	int i = 0;
//	int x, y, n;
//	int sum,sum1,sum2 = 0;
//	scanf("%d %d", &x,&y);
//	for (i = 1; i <= x; i++)
//	{
//		sum *= i;
//		sum1 += sum;
//	}
//	for (i = 1; i <= y; y++)
//	{
//		sum *= i;
//		sum2 += sum;
//	}
//	division(sum1, sum2);
//	printf("%d",n);
//}
//

//
//int factorsum(int number)
//{
//    int sum = 1;
//    for (int i = 2; i <= number/2; i++)
//    {
//        if (number % i == 0)
//            sum += i;
//    }
//    return sum;
//}
//void PrintPN(int m, int n)
//{
//    int cnt = 0;
//    int i;
//    for (int i = m; i <= n ; i++)
//    {
//        if (factorsum(i) == i)
//        {
//            cnt++;
//            printf("%d = 1",i);
//            for (int j = 2; j < i / 2; j++)
//            {
//                if (i % j == 0)
//                {
//
//                }
//                printf(" + %d", j);
//            }
//        }
//           
//    }
//    if(cnt == 0)
//        printf("No perfect number");
//}
//
//int main()
//{
//    int m, n;
//
//    scanf("%d %d", &m, &n);
//    if (factorsum(m) == m) printf("%d is a perfect number\n", m);
//    if (factorsum(n) == n) printf("%d is a perfect number\n", n);
//    PrintPN(m, n);
//
//    return 0;
//}


//3.13/3.0 *h *(r_lower*r_lower + r_upper* r_upper + r_upper*r_lower)

//
//void CharPyramid(int n, char ch)
//{
//	int i,j = 0;
//	for (i = 0; i < n; i++)
//	{
//		for (j = n - i; j > 0; j--)
//		{
//			printf(" ");
//		}
//		for (j = 0; j < n; j++)
//		{
//			printf("%c ", ch);
//	
//		}
//		printf("\n");
//
//	}
//}


