#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

//int main()
//{
//	if (strlen("abc") - strlen("abcdef") > 0)
//		printf(">\n");
//	else
//		printf("<=\n");
//	return 0;
//}

//int main()
//{
//	char arr[20] = { 0 };
//	strcpy(arr, "hello");
//	printf("%s\n", arr);
//	return 0;
//}

//#include<assert.h>
//my_strcat(char* dest,const char* src)
//{
//	char* ret = dest;
//	assert(dest && src);
//	while(*dest)
//	{
//		dest++;
//	}
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;//返回目标字符串的地址
//}
//int main()
//{
//	char arr[20] = "hello \0***********";
//	my_strcat(arr,"world");
//	printf("%s\n", arr);
//	return 0;
//}

//int my_strlen(char* arr)
//{
//	int count = 0;
//	while (*arr)
//	{
//		count++;
//		arr++;
//	}
//	return count;
//}

//int my_strcpy(char* dest,const char* src)
//{
//	char* ret = dest;
//	assert(dest && src);
//	while ((*dest++ = *src++) != '\0')
//	{
//		;
//	}
//	return ret;
//}

//int my_strcmp(const char* arr1,const char* arr2)
//{
//	assert(arr1 && arr2);
//	while (*arr1 == *arr2)
//	{
//		if (*arr1 == '\0')
//		{
//			return 0;
//		}
//		arr1++;
//		arr2++;
//	}
//	if (*arr1 != *arr2)
//	{
//		return *arr1 - *arr2;
//	}
//}

//char *my_strcat(char* dest,const char* src)
//{
//	char* ret = dest;
//	while (*dest)
//	{
//		dest++;//找\0
//	}
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}

char* my_strstr(char* str1, char* str2)
{
	assert(str1 && str2);
	const char* s1 = NULL;
	const char* s2 = NULL;
	const char* cp = str1;

	if (*str2 == '\0')
		return (char*)str1;
	while (*cp)
	{
		s1 = cp;
		s2 = str2;
		while (*s1 && *s2 && (*s1 == *s2))
		{
			s1++;
			s2++;
		}
		if (*s2 == '\0')
		{
			return cp;
		}
		if (*s2 == '\0')
		{
			return (char*)cp;
		}
		cp++;
	}
	return NULL;
}