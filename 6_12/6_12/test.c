#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<ctype.h>
#include<assert.h>
//int main()
//{
//	FILE* pf = fopen("text.txt", "r");
//
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//}

//int main()
//{
//	char arr[20] = { 0 };
//	scanf("%s", arr);
//	int i = 0;
//	while (arr[i] != '\0')
//	{
//		if (isupper(arr[i]))
//		{
//			arr[i] = tolower(arr[i]);
//
//		}
//		printf("%c", arr[i]);
//		i++;
//	}
//	return 0;
//}



//void* my_memcpy(void* dest, const void* src, size_t num)
//{
//	void* ret = dest;
//	assert(dest && src);
//	while(num--)
//	{
//		*(char*)dest = *(char*)src;
//		dest = (char*)dest + 1;
//		src = (char*)src + 1;
//	}
//	return ret;
//}

//int main()
//{
//	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[20] = { 0 };
//	my_memcpy(arr2, arr1, 20);
//	return 0;
//}


//void* my_memmove(void* dest, void* src, size_t num)
//{
//	void* ret = dest;
//	assert(dest && src);
//	if (dest < src)//从前往后
//	{
//		while (num--)
//		{
//			*(char*)dest = *(char*)src;
//			dest = (char*)dest + 1;
//			src = (char*)src + 1;
//		}
//	}
//	else//从后往前
//	{
//		while (num--)
//		{
//			*((char*)dest + num) = *((char*)src + num);//随着num--,自行从后往前
//		}
//	}
//	return ret;
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	my_memcpy(arr+2, arr, 20);
//	return 0;
//}

//int main()
//{
//	float arr1[] = { 1.0,2.0,3.0,4.0 };
//	float arr2[] = { 1.0,3.0, };
//	int ret = memcmp(arr1, arr2, 6);// - 0
//	//int ret = memcmp(arr1,arr2,7);// - -1
//	printf("%d\n", ret);
//
//}

int main()
{
	int arr[10] = { 0 };
	memset(arr, 1, 20);
	return 0;
}