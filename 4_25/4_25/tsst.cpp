#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>


//int main()
//{
//	int i=0, n, * p, * q;
//	printf("%d", &n);
//	p = (int*)malloc(n * sizeof(int));
//	for (q = p; q < p + n; q++)	
//
//	{
//		scanf("%d", q);
//	}
//	for (q = p; i < n; i++)
//		printf("%d", q[i]);
//	free(p);
//}

//int main()
//{
	//int a
	/*for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4 - i; j++)
		{
			if (*q[j] < *q[j + 1])
			{
				d
			}
		}
	}*/ 

//}
//#include<string.h>
//#include<stdlib.h>
//int main()
//{
//	int i,l,j=0;
//	char c[600000];
//	gets_s(c);
//	l = strlen(c);
//	for (i = 0; i < l; i++)
//	{
//		if (c[i] == ' ')
//		{
//			c[i] = '\0';
//		}
//	}
//	for (; l >= 0; l--)
//	{
//		
//		if (c[l - 1] == '\0' && c[l] != '\0')
//		{
//			int flag = 0;
//			for (i = l; c[i] != '\0'; i++)
//			{
//				putchar(c[i]);
//			}
//			for (j = 0; j < l - 1; j++)
//			{
//				if (c[j] != '\0')
//				{
//					flag = 1;
//					break;
//				}
//			}
//			if (flag)
//				printf(" ");
//		}
//		
//		
//	}
//	for (i=0; i < l; i++)
//	{
//		if (c[i] != '\0')
//		{
//			putchar(c[i]);
//		}
//		else
//			break;
//			
//	}
//}
#include<string.h>
#include<stdlib.h>
//int main()
//{
//	char a[100];
//	int i,l;
//	gets_s(a);
//	//l = strlen(a);
//	for (i = 0; a[i]!='#'; i++)
//	{
//		if (a[i] >= 'a' && a[i] <= 'z' )
//		{
//			a[i] -= 32;
//		}
//		else if (a[i] >= 'A' && a[i] <= 'Z')
//		{
//			a[i] += 32;
//		}
//		else
//		{
//			a[i] = a[i];
//		}
//	}
//	for (i = 0; a[i] != '#'; i++)
//	{
//		printf("%c", a[i]);
//	}
//	return 0;
//}


//int main()
//{
//	int i,n;
//	scanf("%d", &n);
//	int a[100];
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &a[i]);
//	}
//	if (n == 1)
//		printf("%d", a[0]);
//	for (i = 0; i < n - 1; )
//	{
//		int j = 3;
//		while (j)
//		{
//			if (i + 1 == n)
//				break;
//			if (i % 3 == 0)
//				printf("%d", a[i + 1] - a[i]);
//			else
//				printf(" %d", a[i + 1] - a[i]);
//			j--; i++;
//		}
//		if (i == n - 1)
//			break;
//		printf("\n");
//	}
//}
//void bubblesort(int arr[], int sz)
//{
//	int i, j, t;
//	for (i = 0; i < sz - 1; i++)//ÌËÊý
//	{
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				t = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = arr[t];
//			}
//		}
//	}
//}
//int main()
//{
//	int arr[100] = { 0 };
//	scanf("%d", &arr[i]);
//	
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printf("%d ", arr[i]);
//	
//	
//}

//void init(int arr[],int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = 0;
//	}
//}
//
//void print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ",arr[i] );
//	}
//}
//
//void reverse(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	int t;
//	while (left < right)
//	{
//		t = arr[left];
//		arr[left] = arr[right];
//		arr[right] = t;
//		left++;
//		right--;
//	}
//}

//void swap(int* x,int* y)
//{
//	int t;
//	t = *x;
//	*x = *y;
//	*y = t;
//}
//int main() 
//{
//	int i, j, k=0;
//	int arr1[10];
//	int arr2[10];
//	for (i = 0; i < 10; ++i) 
//	{
//		scanf("%d",&arr1[i]);
//	}
//	for (j = 0; j < 10; ++j) 
//	{
//		scanf("%d",&arr2[j]);
//	}
//	for (k = 0; k < 10; ++k) {
//		swap(&arr1[k],&arr2[k]);
//	}
//	for (i = 0; i < 10; ++i)
//	{
//		printf("%d ",arr1[i]);
//	}
//	printf("\n");
//	for (j = 0; j < 10; ++j) 
//	{
//		printf("%d ",arr2[j]);
//	}
//	printf("\n");
//	system("pause");
//	return 0;
//}


