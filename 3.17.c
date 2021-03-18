#include<stdio.h>
//#include<string.h>

//int main()
//{
//	int arr1[] = { 1,2,3,4,5};
//	int arr2[] = { 1,2,5,4,3};
//	int ret = memcpy(arr1,arr2,sizeof(arr1));
//	printf("%d",ret);
//	return 0;                           
// } 


//结构体访问 
//结果为c 100 3.140000 hello world 
//struct T
//{
//	double weight;
//	short age;
//};

//struct S
//{
//	char c;
//	struct T st;
//	int a;
//	double d;
//	char arr[20];
//};
//
//int main()
//{
//	//struct S s = {'c',100,3.14,"hello world"};
//	struct S s = {'c',{55.6,30},100,3.14,"hello world"};
//	printf("%c %d %lf %s\n",s.c,s.a,s.d,s.arr);
//	
//	return 0;
//}

//结构体内存对齐
//
//struct S1
//{
//	char c1;
//	int a;
//	char c2;
//};//12
//
//struct S2
//{
//	char c1;
//	char c2;
//	int a;
//}; //8
//
//struct S3
//{
//	double d;
//	char c;
//	int i;
//};//16
//
//struct S4
//{
//	char c1;
//	struct S3 s3;
//	double d;
//};//32
//
//int main()
//{
//	struct S1 s1 = {0};
//	printf("%d\n",sizeof(s1));
//	struct S2 s2 = {0};
//	printf("%d\n",sizeof(s2));
//	struct S4 s4 = {0};
//	printf("%d\n",sizeof(s4));
//	return 0;
//}

//struct S
//{
//	char c1;
//	double d;
//};
//
//int main()
//{
//	struct S s;
//	printf("%d\n",sizeof(s));
//	return 0;
//}
//计算偏移量 
//#include<stddef.h>
//struct S
//{
//	char c;
//	int i;
//	double d;
//};
//
//int main()
//{
//	printf("%d\n",offsetof(struct S,c));//0
//	printf("%d\n",offsetof(struct S,i));//4
//	printf("%d\n",offsetof(struct S,d));//8
//}

//结构体传参
//struct S
//{
//	int a;
//	char c;
//	double d;
//};
//
//void Init(struct S* ps)
//{
//	ps->a = 100;
//	ps->c = 'w';
//	ps->d = 3.14;
//}
//
//void Print1(struct S tmp)
//{
//	printf("%d %c %lf\n",tmp.a,tmp.c,tmp.d);
//}
//
//void Print2(const struct S*ps)
//{
//	printf("%d %c %lf\n",ps->a,ps->c,ps->d);
//}
//
//int main()
//{
//	struct S s = {0};
//	Init(&s);
//	Print1(s);
//	Print2(&s);	
//	s.a = 100;
//	s.c = 'w';
//	s.d = 3.14;
	
//	printf("%d\n",s.a);
//	return 0;
// } 

struct S
{
	int a:2;
	int b:5;
	int c:10;
	int d:30;
};

int main()
{
	struct S s;
	printf("%d\n",sizeof(s));//8
	return 0;
}
