#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//void PrintN(int N)
//{
//	for (int i = 1; i <= N; i++)
//	{
//		printf("%d\n", i);
//	}
//}
//
//int main()
//{
//	int N;
//
//	scanf("%d", &N);
//	PrintN(N);
//
//	return 0;
//}


//#define MAXN 10
//
//double f(int n, double a[], double x)
//{
//    double m = 1;
//    double sum = a[0];
//    for(int i = 1;i <= n;i++)
//    {
//        m *= x;
//        sum += a[i] * m;
//    }
//    return sum;
//}
//
//int main()
//{
//    int n, i;
//    double a[MAXN], x;
//
//    scanf("%d %lf", &n, &x);
//    for (i = 0; i <= n; i++)
//        scanf("%lf", &a[i]);
//    printf("%.1f\n", f(n, a, x));
//    return 0;
//}

//#include <stdio.h>
//
//#define MAXN 10

//int Sum(int List[], int N)
//{
//    int sum = 0;
//    for (int i = 0; i < N; i++)
//    {
//        sum += List[i];
//    }
//    return sum;
//}

//int main()
//{
//    int List[MAXN], N, i;
//
//    scanf("%d", &N);
//    for (i = 0; i < N; i++)
//        scanf("%d", &List[i]);
//    printf("%d\n", Sum(List, N));
//
//    return 0;
//}


//#include <stdio.h>
//
//#define MAXN 10
//typedef float ElementType;

//ElementType Average(ElementType S[], int N)
//{
//    ElementType sum = 0;
//    for (int i = 0; i < N; i++)
//    {
//        sum += S[i];
//    }
//    sum = sum / N;
//    return sum;
//}

//int main()
//{
//    ElementType S[MAXN];
//    int N, i;
//
//    scanf("%d", &N);
//    for (i = 0; i < N; i++)
//        scanf("%f", &S[i]);
//    printf("%.2f\n", Average(S, N));
//
//    return 0;
//}
//
///* 你的代码将被嵌在这里 */

//#include <stdio.h>
//
//#define MAXN 10
//typedef float ElementType;

//ElementType Max(ElementType S[], int N)
//{
//    ElementType max = S[0];
//    for(int i = 1;i <= N;i++)
//    {
//        if (S[i] > S[0])
//        {
//            max = S[i];
//
//        }
//    }
//    return max;
//}

//int main()
//{
//    ElementType S[MAXN];
//    int N, i;
//
//    scanf("%d", &N);
//    for (i = 0; i < N; i++)
//        scanf("%f", &S[i]);
//    printf("%.2f\n", Max(S, N));
//
//    return 0;
//}

/* 你的代码将被嵌在这里 */


#include <stdio.h>
#include <stdlib.h>

typedef struct Node* PtrToNode;
struct Node {
    int Data; /* 存储结点数据 */
    PtrToNode Next; /* 指向下一个结点的指针 */
};
typedef PtrToNode List; /* 定义单链表类型 */

int FactorialSum(List L)
{
       
}

int main()
{
    int N, i;
    List L, p;

    scanf("%d", &N);
    L = NULL;
    for (i = 0; i < N; i++) {
        p = (List)malloc(sizeof(struct Node));
        scanf("%d", &p->Data);
        p->Next = L;  L = p;
    }
    printf("%d\n", FactorialSum(L));

    return 0;
}

/* 你的代码将被嵌在这里 */