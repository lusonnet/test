#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int sum = 0;
//	int i;
//	int a,n;
//	int t = 0;
//	scanf("%d %d", &a,&n);
//	sum = a;
//	for (i = 0; i < n; i++)
//	{
//
//		sum += (t * 10 + a);//why?
//
//		t = t * 10 + a;
//		sum += t ;
//
//	}
//	printf("%d", sum);
//	return 0;
//}

//void Print(int arr[], int sz)
//{
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", *(arr + i));
//	}
//}
//int main()
//{
//	int arr[] = {1,2,3,4,5,6};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	Print(arr, sz);
//	return 0;
//}

//#include<math.h>
//int main()
//{
//	for (int i = 0; i <100000; i++)
//	{
//		int count = 1;
//		int n = i;
//		while (n > 9)
//		{
//			count++;
//			n /= 10;
//		}
//		int sum = 0;
//		int m = i;
//		while (m)
//		{
//			int b = m % 10;
//			sum += (int)pow(b, count);
//			m /= 10;
//		}
//		if (i == sum)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

int main()
{
	int n,i;
	char a[10];
	scanf("%d", &n);
	char c = 'a';
	for (i = 0; i <= 9; i++)
	{
		a[i] = c;
		c += 1;
	}

	return 0;
}
