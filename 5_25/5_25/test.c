#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//void change(int arr[], int sz)
//{
//	int left = 0;;
//	int right = sz - 1;
//	while (left < right)
//	{
//		while (left < right && arr[left] % 2 == 1)
//		{
//			left++;
//		}
//		while (left < right && arr[right] % 2 == 0)
//		{
//			right--;
//		}
//		if (left < right)
//		{
//			int t = arr[left];
//			arr[left] = arr[right];
//			arr[right] = t;
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 2, 1, 4, 3, 6, 5 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	change(arr, sz);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//
//#include<stdio.h>
//#define MAXN 10000    /* ������ų�����ʾ����a�ĳ��� */
//
//int Count = 0;        /* ��ȫ�ֱ���Count��ʾ����a�д������Ԫ�ظ��� */
//void select(int a[], int option, int value); /* ��������������a���к��ֲ����Ŀ��ƺ��� */
//int input_array(int a[]);    /* ������������a�ĺ��� */
//void print_array(int a[]);    /* �����������a�ĺ��� */
//int insert(int a[], int value);    /* ����������a�в���һ��ֵΪvalue��Ԫ�صĺ��� */
//int del(int a[], int value);    /* ɾ����������a�е���value��Ԫ�صĺ��� */
//int modify(int a[], int value1, int value2); /* ����������a�е���value1��Ԫ�أ��滻Ϊvalue2 */
//int query(int a[], int value);     /* �ö��ַ�����������a�в���Ԫ��value�ĺ��� */
//
//int insert(int a[], int value)
//{
//    int flag = 0, i = 0;
//    for (i; i < Count; i++)
//    {
//        if (value == a[i])
//            flag++;
//
//    }
//    if (flag != 0)return-1;
//    else
//    {
//        for (i = 0; value > a[i]; i++);
//        for (int j = Count; j != i; j--)
//            a[j] = a[j - 1];
//        a[i] = value;
//        Count++;
//        return i;
//    }
//}
//int del(int a[], int value)
//{
//
//}
//int modify(int a[], int value1, int value2)
//{
//
//}
//int query(int a[], int value)
//{
//
//}
//
//int main(void)
//{
//    int option, value, a[MAXN];
//
//    if (input_array(a) == -1) {     /* ���ú��������������� a */
//        printf("Error");        /* a�����������飬�������Ӧ����Ϣ */
//        return 0;
//    }
//
//    printf("[1] Insert\n");    /* ����4����ʾ�˵�*/
//    printf("[2] Delete\n");
//    printf("[3] Update\n");
//    printf("[4] Query\n");
//    printf("[Other option] End\n");
//    while (1) {            /* ѭ�� */
//        scanf("%d", &option);         /* �����û�����ı�� */
//        if (option < 1 || option > 4) {    /* �������1��2��3��4����ı�ţ�����ѭ�� */
//            break;
//        }
//        scanf("%d", &value);         /* �����û�����Ĳ���value */
//        select(a, option, value);         /* ���ÿ��ƺ��� */
//        printf("\n");
//    }
//    printf("Thanks.");            /* �������� */
//
//    return 0;
//}

//int main()
//{
//	int i = -20;
//	unsigned inrt j = 10;
//	printf("%d\n", i + j);
//	return 0;
//}

//char* match(char* s, char ch)
//{
//
//}

//int main()
//{
//	unsigned int i;
//	for (i = 9; i >= 0; i--)
//	{
//		printf("%u\n", i);
//	}
//	return 0;
//}

//int main()
//{
//	char a[1000];
//	int i;
//	for (i = 0; i < 1000; i++)
//	{
//		a[i] = -1 - i;
//	}
//	printf("%d", strlen(a));
//	return 0;
//}


//unsigned char i = 0;
//int main()
//{
//	for (i = 0; i <= 255; i++)
//	{
//		printf("hello\n");
//	}
//
//	return 0;
//}

int main()
{
	int n = 9;

	float* pfloat = (float*)&n;
	printf("n = %d\n", n);
	printf("pfloat = %f\n", *pfloat);

	*pfloat = 9.0;
	printf("num = %d\n", n);
	printf("pfloat = %f\n", *pfloat);

	return 0;
}