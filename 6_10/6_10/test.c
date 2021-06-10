#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//1002
//int main()
//{
//    int count = 1;
//    int sum = 0;
//    int j;
//    long int n,m;
//    scanf("%ld", &n);
//    m = n;
//    while (m > 9)//位数
//    {
//        m /= 10;
//        count++;
//    }
//    for (int i = 0; i < count; i++)
//    {
//        j = n % 10;
//        n = n / 10 ;
//        sum += j;
//    }
//
//    return 0;
//}

//int main()
//{
//	char s[100];
//	char name[][10] = { "ling","yi","er","san","si","wu","liu","qi","ba","jiu" };
//	int sum = 0;
//	scanf("%s", s);
//	for (int i = 0; s[i] != '\0'; i++)
//	{
//		sum += s[i] - '0';//将字符串转化位数字
//	}
//	int asum[5];
//	int j;
//	for (j = 0; sum >= 10; j++)
//	{
//		asum[j] = sum % 10;
//		sum /= 10;
//	}
//	asum[j] = sum;//存储原来sum和的第一位数字
//	while (j >= 0)//倒序输出
//	{
//		if (j != 0)
//		{
//			printf("%s ", name[asum[j]]);
//		}
//		else
//			printf("%s\n", name[asum[j]]);
//		j--;
//	}
//	return 0;
//}

#include<string.h>
int main()
{
	int n;
	char s[101];
	scanf("%d", &n);
	while (n--)
	{
		gets(s);
		int len = strlen(s);
		for (int i = 0; i < len; i++)
		{
			if (s[i] == 'P' || s[i] == 'A' || s[i] == 'T')
			{
				if()
			}
			else
				printf("NO");
		}
	
	}
}