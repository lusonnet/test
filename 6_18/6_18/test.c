#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<string.h>
//void reverse(char* left, char* right)
//{
//	while (left < right)
//	{
//		char t = 0;
//		t = *left;
//		*left = *right;
//		*right = t;
//		left++;
//		right--;
//	}
//}
//
//int main()
//{
//	char arr[81];
//	gets(arr);
//	int len = strlen(arr);
//	reverse(arr, arr + len - 1);
//	char* start = arr;
//	while (*start)
//	{
//		char* end = start;
//		while (*end != ' ' && *end != '\0')
//		{
//			end++;
//		}
//		reverse(start, end - 1);
//		if (*end == ' ')
//		{
//			start = end + 1;
//		}
//		else
//		{
//			start = end;
//		}
//	}
//	puts(arr);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int m, n;
//	scanf("%d%d", &m, &n);
//	int a[m];
//	for (int i = 0; i < m; i++)
//	{
//		scanf("%d", &a[i]);
//	}
//	for (int i = 0; i < n; i++)
//	{
//		int x = a[m - 1];
//		for (int j = 0; j <= m; j++)
//		{
//			a[m - j] = a[m - j - 1];
//		}
//		a[0] = x;
//	}
//	for (int i = 0; i < m; i++)
//	{
//		printf("%d", a[i]);
//		if (i != m - 1)printf(" ");
//	}
//}

#include<stdio.h>
int main()
{
	int a,b;
	int count = 0;
	while (scanf("%d %d",&a,&b) != EOF)
	{
		if (b != 0)
			count++;
		if (count == 0)
		{
			printf("0 0");
			return 0;
		}

		if (b != 0)
		{
			if (count != 1)
				printf(" ");
			printf("%d %d", a * b, b - 1);
		}
	}
}

#include<stdio.h>
int main() {
	int a, b;
	int count = 0;
	while (scanf("%d %d", &a, &b) != EOF) {
		if (b != 0) count++;
		if (count == 0) {
			printf("0 0");
			return 0;
		}
		if (b != 0) {
			if (count != 1) printf(" ");
			printf("%d %d", a * b, b - 1);
		}
	}
	return 0;
}