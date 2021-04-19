#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
//void Print(int n)
//{
//	if (n <= 9)
//	{
//		printf("%d ", n);
//	}
//	else
//	{
//		Print(n / 10);
//		printf("%d ", n % 10);
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	Print(n);
//	return 0;
//}


//µÝ¹é
//int Fac(int n)
//{
//	if (n == 1)
//	{
//		return 1;
//	}
//	else
//	{
//		return n * Fac(n - 1);
//	}
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int ret = Fac(n);
//	printf("%d", ret);
//}

////·ÇµÝ¹é
//int Fac(int n)
//{
//	int j = 1;
//	for (int i = 2; i <= n; i++)
//	{
//		j *= i;
//	}
//	return j;
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int ret = Fac(n);
//	printf("%d", ret);
//	return 0;
//}

////µÝ¹é
//
//int Step(char* str)
//{
//	int count;
//	if (*str == '\0')
//	{
//		return 0;
//	}
//	return 1+Step(str + 1);
//}
//
//
////·ÇµÝ¹é
//int Step(char* str)
//{
//	int count;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}

//#include<string.h>
//int reverse_string(char* string)
//{
//	int len;
//	len = strlen(string);
//	char t = *string;
//	if (len == 1)
//		printf("%s", string);
//	else
//	{
//
//	}
//}


//int DigitSum(int n)
//{
//	if (n > 9)
//	{
//		//DigitSum(n/10);
//		return (n%10)+ DigitSum(n / 10);
//
//	}
//	return n;
//
//}


//int kpow(int n, int k)
//{
//	if (k > 0)
//	{
//		return n * kpow(n, k - 1);
//	}
//	else
//		return 1;
//}

////µÝ¹é
//int Fib(int n)
//{
//	if (1 == n || 2 == n)
//		return 1;
//	else
//		return Fib(n - 1) + Fib(n - 2);
//}


//long long Fib(int n)
//{
//	if (1 == n || 2 == n)
//	{
//
//		return 1;
//	}
//	int n1 = 1;
//	int n2 = 1;
//	int sum = 0;
//	for (int i = 3; i < n; i++)
//	{
//		sum = n1 + n2;
//		n1 = n2;
//		n2 = sum;
//	}
//	return sum;
//}


//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}


//int my_strlen(char* str)
//{
//	if (*str != '\0')
//	{
//		return 1 + my_strlen(str + 1);
//	}
//	else
//		return 0;
//}
//int main()
//{
//	char arr[] = "bit";
//
//	printf("%d\n", my_strlen(arr));
//
//	return 0;
//}



//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int ret = 1;
//	//µü´ú
//	for (i = 1; i <= n; i++)
//	{
//		ret = ret * i;
//	}
//	printf("%d\n", ret);
//	return 0;
//}
//
////µÝ¹é
//int Fac(int n)
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n * Fac(n - 1);
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fac(n);
//	printf("%d\n", ret);
//	return 0;
//}

int Fib(int n)
{
	if (n <= 2)
		return 1;
	else
		return  Fib(n - 1) + Fib(n - 2);
}

int main()
{
	int n = 0;
	scanf("%d", &n);
	int ret = Fib(n);
	printf("%d\n", ret);
	return 0;
}