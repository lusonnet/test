#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//非递归实现
//int my_strlen(char* str)
//{
//	int count = 0;
//
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//void reverse_string(char* str)
//{
//	int left = 0;
//	int right = my_strlen(str - 1);
//	while (left<right)
//	{
//		char t = str[left];
//		str[left] = str[right];
//		str[right] =  t;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	char arr[] = "abcdef";
//	reverse_string(arr);
//	printf("%s\n", arr);
//	return 0;
//}


//递归实现
//void reverse_string(char* str)
//{
//	char tmp = *str;
//	int len = my_strlen(str);
//	*str = *(str + len - 1);
//	*(str + len - 1) = '\0';
//	if (my_strlen(str + 1) >= 2)
//	{
//		reverse_string(str + 1);
//	}
//	*(str + len - 1) = tmp;
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	reverse_string(arr);
//	printf("%s\n", arr);
//	return 0;
//}

#include<string.h>
int main()
{
	//int arr[8];
	//char ch[5];
	//int arr[10] = { 1,2,3,4,5 };//不完全初始化


	char ch5[] = "bit";
	char ch6[] = { 'b','i','t' };
	printf("%d\n", strlen(ch5));
	printf("%d\n", strlen(ch6));
}