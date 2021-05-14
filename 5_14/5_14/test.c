#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int n,i, j;
//	int max, min, t, m;
//	scanf("%d", &n);
//	int a[11];
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &a[i]);
//	}
//	min = a[0];
//	for (i = 1; i < n; i++)
//	{
//		if (a[i] < min)
//		{
//			m = i;
//			min = a[i];
//		}
//	}
//
//	t = a[0];
//	a[0] = min;
//	a[m] = t;
//
//	max = a[0];
//	for (i = 1; i < n; i++)
//	{
//		if (max < a[i])
//		{
//			j = i;
//			max = a[i];
//		}
//	}
//
//	t = a[n - 1];
//	a[n - 1] = max;
//	a[j] = t;
//
//	for (i = 0; i < n; i++)
//	{
//		printf("%d ", a[i]);
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//    char c;
//    int letters = 0, space = 0, digit = 0, other = 0;
//    while ((c = getchar()) != '\n')
//    {
//        if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
//        {
//            other++;
//        }
//        else if (c == ' ')
//        {
//            space++;
//        }
//        else if (c >= '0' && c <= '9')
//        {
//            digit++;
//        }
//        else
//        {
//            other++;
//        }
//    }
//    printf("blank = %d, digit = %d, other = %d", space, digit, other);
//    return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int n;
//	int a[100];
//	for (int i = 0; i < n; i++)//n - 已知个数
//	{
//		scanf("%d", &a[i]);
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	//int i = 0;
//	//while(scanf("%d"))
//	char a[100];
//	scanf("%s", &a);
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	int i, choice;
//	printf("[1] apple\n[2] pear\n[3] orange\n[4] grape\n[0] exit\n");
//	for (i = 0; i < 5; i++)
//	{
//		scanf("%d", &choice);
//		switch (choice)
//		{
//		case 1:printf("price = 3.00\n");
//			break;
//		case 2:printf("price = 2.50\n");
//			break;
//		case 3:printf("price = 4.10\n");
//			break;
//		case 4:printf("price = 10.20\n");
//			break;
//		case 0:
//			exit(0);
//		default:printf("price = 0.00\n");
//			break;
//		}
//	}
//
//	return 0;
//}

# include <stdio.h>
int main(void)
{
    int a, c;
    char b;
    scanf("%d%c%d", &a, &b, &c);
    printf("a = %d, b = %c, c = %d\n", a, b, c);
    return 0;
}