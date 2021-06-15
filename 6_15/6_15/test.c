#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//
//int main()
//{
//	int n,flag;
//	int table[101] = { 0 };
//	scanf("%d", &n);
//	int a[100] = { 0 };
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &flag);
//		table[flag] = 1;
//		for (int i = 0;i < 101;i++)//待验证的正整数 n (1<n≤100)
//		{
//			if (table[i])//对于输入的数进行处理
//			{
//				for (int j = i; j > 1; )
//				{
//					if (j % 2 == 1)
//						j = (3 * j + 1) / 2;
//					else
//						j = j / 2;
//					if (j < 101 && table[j])
//					{
//						table[j] = 0;
//						n--;
//						if (j < i)
//							break;
//					}
//				}
//			}
//		}
//	}
//	for (int i = 100; i >= 1; i--)
//	{
//		if (table[i] == 1)
//			printf("%d%c", i, --n ? ' ' : '\0');//数字间用 1 个空格隔开，但一行中最后一个数字后没有空格
//	}
//	return 0;
//
//
//}

//#include <stdio.h>
//
//int main()
//{
//    int K, n, table[101] = { 0 };
//
//    scanf("%d", &K);
//    for (int i = 0; i < K; i++)
//    {
//        scanf("%d", &n);
//        table[n] = 1;
//    }
//
//    /* find numbers needed to test */
//    for (int i = 1; i <= 100; i++)
//        if (table[i])
//            for (int j = i; j > 1; )
//            {
//                /* calculate for one step */
//                if (j % 2)      j = (3 * j + 1) / 2;
//                else           j /= 2;
//
//                /* see if the new number is in given numbers */
//                if (j <= 100 && table[j])
//                {
//                    table[j] = 0;       /* 'covered' this number */
//                    K--;                /* one less number not 'covered' */
//                    if (j < i) break;    /* did this before, no need going on */
//                }
//            }
//
//    for (int i = 100; i >= 1; i--)
//        if (table[i] == 1)
//            printf("%d%c", i, --K ? ' ' : '\0');
//
//    return 0;
//}

