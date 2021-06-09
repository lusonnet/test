#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>
//int strcmp(const char* string1, const char* string2);
//int main()
//{
//	int ret = strcmp("abbb", "abc");
//	printf("%d\n", ret);
//	return 0;
//}
//int my_strcmp(const char* s1, const char* s2)
//{
//	assert(s1 && s2);
//	while (*s1 == *s2)
//	{
//		if (*s1 == '\0')
//		{
//			return 0;
//		}
//		s1++;
//		s2++;
//	}
//	//if (*s1 > *s2)
//	//{
//	//	return 1;
	//}
	//else
	//	return -1;

//	return *s1 - *s2;
//}

//int main()
//{
//	char* p = "abcdef";
//	char* q = "abcdef";
//	int ret = my_strcmp(p, q);
//	if (ret > 0)
//	{
//		printf("p>q\n");
//	}
//	else if (ret < 0)
//		printf("p<q\n");
//	else
//		printf("p=q\n");
//	return 0;
//}

//int main()
//{
//	char arr1[20] = "abcdef";
//	char arr2[] = "qwer";
//	strncpy(arr1, arr2, 6);
//	printf("%s\n", arr1);
//	return 0;
//}

//int main()
//{
//	char arr1[20] = "hello";
//	char arr2[] = "world";
//	strncat(arr1, arr2, 3);
//	printf("%s\n", arr1);
//	return 0;
//}

//int main()
//{
//	char* p = "abcdef";
//	char* q = "abcqwert";
//	int ret = strncmp(p, q, 3);
//	printf("%d\n", ret);
//	return 0;
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
int main()
{
	char arr1[] = "abcdef";
	char arr2[] = "cdef";
	char* ret = my_strstr(arr1, arr2);
	if (ret == NULL)
	{
		printf("没找到\n");
	}
	else
	{
		printf("找到了:%s\n", ret);
	}
	return 0;
}