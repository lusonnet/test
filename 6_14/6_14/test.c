#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>

//struct Book
//{
//	char name[20];
//	int price;
//	char id[12];
//}b1,b2,b3;//ȫ�ֱ���
//
//int main()
//{
//	//�ֲ�����
//	struct Book b1;
//	struct Book b2;
//	struct Book b3;
//
//}


//struct
//{
//	char name[20];
//	int price;
//	double d;
//}a;//�����ṹ������ - aΪ����

//struct
//{
//	char name[20];
//	int price;
//	double d;
//}* a;//�����ṹ������ - aΪ����

//struct N
//{
//	int d;
//	struct N n;
//};

//typedef struct
//{
//	int d;
//	Node* next;
//}Node;

//typedef struct Node
//{
//	int d;
//	struct Node* next;
//}Node;

//struct S
//{
//	int i;
//	char c;
//};
//
//int main()
//{
//	struct S s = { 0 };
//	printf("%d\n", sizeof(s));
//	return 0;
//}

//void* my_memmove(void* dest, const void* src, size_t num)
//{
//	char* ret = dest;
//	assert(dest && src);
//	if (dest < src)
//	{
//		while (num--)
//		{
//			*(char*)dest = *(char*)src;
//			dest = (char*)dest + 1;
//			src = (char*)src + 1;
//		}
//	}
//	else
//	{
//		while (num--)
//		{
//			*((char*)dest + num) = *((char*)src + num);
//		}
//	}
//	return ret;
//}


//void* my_memcpy(void* dest,const void* src, size_t num)
//{
//	void* ret = dest;
//	assert(dest && src);
//	while (num--)
//	{
//		*(char*)dest = *(char*)src;
//		dest = (char*)dest + 1;
//		src = (char*)src + 1;
//
//	}
//	return ret;
//}

//struct S
//{
//	char c1;
//	int i;
//	char c2;
//};

//struct S1
//{
//	double d;
//	char c;
//	int i;
//};
//
//struct S2
//{
//	char c1;
//	struct S1 s1;
//	double d;
//};
//
//int main()
//{
//	struct S2 s2 = { 0 };
//	printf("%d\n", sizeof(s2));
//}

//#pragma pack(2)
//#include<stddef.h>
//struct S
//{
//	char c1;
//	int i;
//	char c2;
//};
//
//int main()
//{
//	printf("%d\n", offsetof(struct S, c1));
//	printf("%d\n", offsetof(struct S, i));
//	printf("%d\n", offsetof(struct S, c2));
//
//}

//struct A
//{
//	int a : 2;//2 - ����λ
//	int b : 5;
//	int c : 10;
//	//��ʣ15����λ
//	int d : 30;
//};

//int main()
//{
//	printf("%d\n", sizeof(struct A));
//	return 0;
//}

//enum Color
//{
//	RED,
//	BLUE,
//	GREEN
//};

//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	int len, n, pos = 0;
//	char arr[101];
//	scanf("%d", &n);
//	while (n--)//�ж�ÿ���ַ�
//	{
//		int count[3] = { 0 };
//		int p = 0;
//		scanf("%s", arr);
//		int len = strlen(arr);
//		for (int i = 0; i < len; i++)
//		{
//			if (arr[i] == 'A')
//			{
//				count[p]++;//������Ρ�A���ĸ��� (p - 0;p - 1;p - 2)
//			}
//			else if (arr[i] == 'P' && p == 0)
//			{
//				p = 1;
//			}
//			else if(arr[i] =='T'&& p == 1)
//			{
//				p = 2;
//			}
//			else
//			{
//				break;
//			}
//		}
//		if (p == 2&&count[1]/*A��P֮�����A*/ &&count[0]*count[1] == count[2])//��һ��A����*֮��A�������ں����A����
//		{
//			puts("YES");//��printf����puts���Զ�����
//			//puts����������ַ���ʱ�Ὣ��\0���Զ�ת���ɡ�\n�����������Ҳ����˵��puts����������ַ�������Զ����С�
//		}
//		else
//		{
//			puts("NO");
//		}
//		
//	}
//	return 0;
//
//}


//#include<stdio.h>
//
//struct Student
//{
//	char name[11];
//	char number[11];
//	int score;
//};
//
//int main()
//{
//	int i,n,x,y = 0;
//	int min = 0, max = 0;
//	scanf("%d", &n);
//	struct Student s[100];
//	for (i = 0; i < n; i++)
//	{
//		scanf("%s %s %d", s[i].name, s[i].number, s[i].score);
//		if (s[i].score >= max)
//		{
//			x = i;
//			max = s[i].score;
//		}
//		if (s[i].score <= min)
//		{
//			y = i;
//			min = s[i].score;
//		}
//	}
//	printf("%s %s\n", s[x].name, s[x].number);
//	printf("%s %s\n", s[y].name, s[y].number);
//
//}
//
//
//
#include<stdio.h>

struct Student
{
	char name[11];
	char number[11];
	int score;
};

int main()
{
	int i, n, x, y;
	int min = 0, max = 0;
	scanf("%d", &n);
	struct Student s[n];
	for (i = 0; i < n; i++)
	{
		scanf("%s%s%d", s[i].name,s[i].number, s[i].score);
		if (s[i].score >= max)
		{
			x = i,
			max = s[i].score;
		}
		if (s[i].score <= min)
		{
			y = i,
			min = s[i].score;
		}
	}
	printf("%s\x20%s\n", s[x].name, s[x].number);
	printf("%s\x20%s\n", s[y].name, s[y].number);
	return 0;
}

//int main()
//{
//	int i, n, x, y, min = 0, max = 0;
//	scanf("%d", &n);
//	struct stu a[n];
//	for (i = 0; i < n; i++)
//	{
//		scanf("%s%s%d", a[i].name, a[i].num, &a[i].res);
//		if (a[i].res >= max)
//			x = i, max = a[i].res;
//		if (a[i].res <= min)
//			y = i, min = a[i].res;
//	}
//	printf("%s\x20%s\n", a[x].name, a[x].num);
//	printf("%s\x20%s\n", a[y].name, a[y].num);
//	return 0;
//}