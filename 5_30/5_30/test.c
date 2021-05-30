#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void print_arr(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

int cmp_int(const void* e1, const void* e2)
{
	return *(int*)e1 - *(int*)e2;//ǿ������ת��Ϊ����ָ�� - ����
	//return *(int*)e2 - *(int*)e1;//ǿ������ת��Ϊ����ָ�� - ����
}

void test1()
{
	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	qsort(arr, sz, sizeof(arr[0]), cmp_int);
	print_arr(arr, sz);
	return 0;

}

struct Stu
{
	char name[20];
	int age;
};

int sort_age(const void* e1,const void* e2)
{
	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
}

int sort_name(const void* e1, const void* e2)
{
	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
}
void test2()
{
	struct Stu s[] = { {"zhang",30},{"li",34},{"wan",20} };
	int sz = sizeof(s) / sizeof(s[0]);
	qsort(s, sz, sizeof(s[0]), sort_age);//����
	qsort(s, sz, sizeof(s[0]), sort_name);//����
	//print_arr(s, sz);

}

void bubble_sort(void* base,
				int sz, 
				int width, //δ֪����
				int(*cmp)(const void* e1, const void* e2)//ֻ�ǱȽϲ���Ҫ����	
				)
{
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		int j = 0;
		for (j = 0; j < sz - 1; j++)
		{
			if (cmp((char*)base+j*width,(char*)base+(j+1)*width ) > 0)//�Ƚ�����Ԫ�ص�ַ
			{
				Swap((char*)base + j * width, (char*)base + (j + 1) * width,width);
			}
		}
	}
}
int main()
{
	//test1(); //����
	test2();

}
