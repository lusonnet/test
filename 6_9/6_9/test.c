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



//char* my_strstr(char* str1, char* str2)
//{
//	assert(str1 && str2);
//	const char* s1 = NULL;
//	const char* s2 = NULL;
//	const char* cp = str1;
//
//	if (*str2 == '\0')
//		return (char*)str1;
//	while (*cp)
//	{
//		s1 = cp;
//		s2 = str2;
//		while (*s1 && *s2 && (*s1 == *s2))
//		{
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0')
//		{
//			return cp;
//		}
//		if (*s2 == '\0')
//		{
//			return (char*)cp;
//		}
//		cp++;
//	}
//	return NULL;
//}
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "cdef";
//	char* ret = my_strstr(arr1, arr2);
//	if (ret == NULL)
//	{
//		printf("没找到\n");
//	}
//	else
//	{
//		printf("找到了:%s\n", ret);
//	}
//	return 0;
//}

//int main()
//{
//	char arr[] = "lulu@foxmail.com";
//	char* p = "@.";
//	char tmp[20] = { 0 };
//	strcpy(tmp, arr);
//	char* ret = NULL;
//	for(ret = strtok(tmp,p);ret!=NULL;ret = strtok(NULL,p))
//	{
//		printf("%s\n",ret);
//	}
//	//strtok(tmp, p);
//	//strtok(NULL, p);
//
//	return 0;
//}

#include<errno.h>
int main()
{
	//printf("%s\n", strerror(0));
	//printf("%s\n", strerror(1));
	//printf("%s\n", strerror(2));
	//printf("%s\n", strerror(3));
	//printf("%s\n", strerror(4));
	//printf("%s\n", strerror(5));

	FILE* pf = fopen("text.txt", "r");
	if (pf == NULL)
	{
		printf("%s\n", strerror(errno));
		return 1;
	}
	fclose(pf);
	pf = NULL;
	return 0;
}