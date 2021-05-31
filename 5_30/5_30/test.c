#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//void print_arr(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
int cmp_int(const void* e1, const void* e2)
{
	return *(int*)e1 - *(int*)e2;//强制类型转化为整型指针 - 升序
	//return *(int*)e2 - *(int*)e1;//强制类型转化为整型指针 - 降序
}
//
//void test1()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);
//	print_arr(arr, sz);
//	return 0;
//
//}
//
struct Stu
{
	char name[20];
	int age;
};
//
int sort_age(const void* e1,const void* e2)
{
	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
}

int sort_name(const void* e1, const void* e2)
{
	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
}
//void test2()
//{
//	struct Stu s[] = { {"zhang",30},{"li",34},{"wan",20} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	qsort(s, sz, sizeof(s[0]), sort_age);//年龄
//	qsort(s, sz, sizeof(s[0]), sort_name);//名字
//	//print_arr(s, sz);
//
//}

Swap(char* buf1, char* buf2, int width)
{
	int i = 0;
	for (i = 0; i < width; i++)//width - 宽度，比较每一个字节
	{
		char t = *buf1;
		*buf1 = *buf2;
		*buf2 = t;
		buf1++;
		buf2++;
	}
}
void bubble_sort(void* base,
				int sz, 
				int width, //未知类型
				int(*cmp)(const void* e1, const void* e2)//只是比较不需要交换	
				)
{
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		int j = 0;
		for (j = 0; j < sz - 1; j++)
		{
			if (cmp((char*)base+j*width,(char*)base+(j+1)*width ) > 0)//比较两个元素地址
			{
				Swap((char*)base + j * width, (char*)base + (j + 1) * width,width);
			}
		}
	}
}

void test4()
{
	struct Stu s[3] = { {"zhang",30},{"li",34},{"wan",20} };
	int sz = sizeof(s) / sizeof(s[0]);
	bubble_sort(s, sz, sizeof(s[0]), sort_age);//年龄
	//bubble_sort(s, sz, sizeof(s[0]), sort_name);//名字
	//print_arr(s, sz);

}
int main()
{
	//test1(); //按照
	//test2();
	test4();
}

//int main()
//{
//	int a = 10;
//	char ch = 'w';
//	void* p = &a;//无具体类型 - 可以存放任意类型
//	p = &ch;
//	//*p;或 p++;都不可以 - 解引用或跳过字节未知
//	return 0;
//}

