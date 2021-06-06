#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int a[2][5] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* ptr1 = (int*)(&aa + 1);
//	int* ptr2 = (int*)(*(aa + 1));
//}

//int main()
//{
//	char* a[] = { "work","at","alibaba" };
//	char** pa = a;
//	pa++;
//	printf("%s\n", *pa);
//	return 0;
//}

//int main()
//{
//	char* c[] = { "ENTER","NEW","POINT","FIRST" };
//	char** cp[] = { c + 3,c + 2, c + 1, c };
//	char*** cpp = cp;
//	printf("%s\n", **++cpp);
//	printf("%s\n", *-- * ++cpp + 3);
//	printf("%s\n", *cpp[-2] + 3);
//	printf("%s\n", cpp[-1][-1] + 1);
//	return 0;
//}


//void reverse(char* left, char* right)
//{
//	while (left<right)
//	{
//		char tmp = 0;
//		tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//
//	}
//}
//
//int main()
//{
//	char arr[20];
//	gets(arr);
//	int len = strlen(arr);
//	reverse(arr, arr + len - 1);
//	char* start = arr;
//	while (*start)
//	{
//		char* end = start;
//		while (*end != ' '&&*end!='\0')
//		{
//			end++;
//		}
//		reverse(start, end - 1);
//		if (*end == ' ')
//			start = end + 1;//跳过空格
//		else
//			start = end;//
//	}	
//	return 0;
//}


//#include<string.h>
//#include<stdio.h>
//#include<assert.h>
//void reverse(char* left, char* right)
//{
//	assert(left && right);
//	while (left < right)
//	{
//		char t = *left;
//		*left = *right;
//		*right = t;
//		left++;
//		right--;
//	}
//}
//
//void rotake(char* str, int k)
//{
//	assert(str);
//	int n = strlen(str);
//	reverse(str, str + k - 1);
//	reverse(str + k, str + n - 1);
//	reverse(str, str + n - 1);
//}
//int main()
//{
//	char arr[10] = { "ABCDEF" };
//	int k = 2;
//	rotake(arr,k);
//	return 0;
//}

//void rotake(char* a, int sz)
//{
//	int k, i, j;
//	int left, right;
//	char house;
//	scanf("%d", &k);
//	for (i = 0; i < k; i++)//每次旋转一个字符
//	{
//		house = a[0];
//		for (j = 0; j < sz - 1; j++)
//		{
//			a[j] = a[j + 1];//往前挪
//		}
//		a[j] = house;
//	}
//	printf("%s", a);
//}


//int main()
//{
//	char a[20] = "abcd";
//	int sz = strlen(a);
//	rotake(a, sz);
//	return 0;
//}
//
//int rotake(char* str1, char* str2)
//{
//	int i = 0;
//	int n = strlen(str1);
//	for (i = 0; i < n ; i++)
//	{
//		char t = *str1;
//		int j = 0;
//		for (j = 0; j < n - 1; j++)
//		{
//			*(str1 + j) = *(str1 + j + 1);
//		}
//		*(str1 + n - 1) = t;
//		if (strcmp(str1, str2) == 0)
//		{
//			return 1;
//		}
//	}
//	return 0;
//}

int rotake(char* str1, char* str2)
{
	if (strlen(str1) != strlen(str2))
	{
		return 0;
	}
	int len = strlen(str1);
	strncat(str1, str1, len);//自己复制自己不能使用strcat函数
	char* ret = strstr(str1, str2);
	return ret != NULL;


	return 0;
}
int main()
{
	char arr1[] = "AABCD";
	char arr2[] = "BCDAA";
	int ret = rotake(arr1,arr2);
	if (ret == 1)
	{
		printf("yes\n");
	}
	else
	{
		printf("no\n");
	}
	return 0;
}