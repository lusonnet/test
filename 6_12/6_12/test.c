#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<ctype.h>
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

int main()
{
	char arr[20] = { 0 };
	scanf("%s", arr);
	int i = 0;
	while (arr[i] != '\0')
	{
		if (isupper(arr[i]))
		{
			arr[i] = tolower(arr[i]);

		}
		printf("%c", arr[i]);
		i++;
	}
	return 0;
}