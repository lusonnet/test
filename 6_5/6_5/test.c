#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//
////ÕûÐÍ
//int cmp(const void* e1, const void* e2)
//{
//	return *(int*)e1 - *(int*)e2;//Ë³Ðò
//	//return *(int*)e1 - *(int*)e2;//ÄæÐò	
//}
//
//int main()
//{
//	int a[6] = { 1,3,8,4,6,2 };
//	int sz = sizeof(a) / sizeof(a[0]);
//	qsort(a, sz, sizeof(a[0]), cmp);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", a[i]);
//	}
//	return 0;
//}
//
//#include<stdio.h>
//#include<string.h>
//
//int cmp(const void* e1, const void* e2)
//{
//	return *(char*)e1 - *(char*)e2;
//}
//int main()
//{
//	char a[10] = "iloveu";
//	int sz = strlen(a);
//	qsort(a, sz, sizeof(a[0]), cmp);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%c ", a[i]);
//	}
//	return 0;
//}
//


//#include<stdio.h>
//#include<stdlib.h>
//
//int cmp(const void* e1, const void* e2)
//{
//	return (*(double*)e1 - *(double*)e2>0)?1:-1;
//}
//int main()
//{
//	int n,i;
//	scanf("%d", &n);
//	double a[1000];
//	for (i = 0; i < n; i++)
//		scanf("%lf", &a[i]);
//	qsort(a, n, sizeof(a[0]), cmp);
//	for (i = 0; i < n; i++)
//	{
//		printf("%lf ", a[i]);
//	}
//}

#include<stdio.h>
#include<stdlib.h>

struct Stu
{
    char name[20];
    int price;
};

//int cmp(const void* e1,const void* e2)
//{
//    return (*(struct Stu*)e1).age - (*(struct Stu*)e2).age;
//}

int cmp(const void* e1, const void* e2)
{
    return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
}
int main()
{
    struct Stu s[100] = { {"cyuyan",40},{"java",25},{"cplusplus",30 } };
    qsort(s, 3, sizeof(s[0]), cmp);
    for (int i = 0; i < 3; i++)
    {
        printf("%s %d\n", s[i].name, s[i].price);
    }
}