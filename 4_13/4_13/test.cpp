#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


//�����������������Լ��

//��һ
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d%d", &m, &n);
//	int max = m>n?n:m;//�������Լ����m��n�Ľ�Сֵ
//	while (1)
//	{
//		if (m % max == 0 && n % max == 0)
//		{
//			printf("���Լ���ǣ�%d\n", max);
//			break;
//		}
//		max--;
//	}
//	return 0;
//}

//������շת�����
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d%d", &m, &n);
//	int t = 0;
//
//	while (t = m % n)
//	{
//		m = n;
//		n = t;
//	}
//	printf("���Լ����%d\n", n);
//	//��С������ = �������/���Լ��
//
//	return 0;
//}


//int main()
//{
//	int y = 0;
//	int count=0;
//	for (y = 1000; y <= 2000; y++)
//	{
		//�ж�y�ǲ�������
		//1.��4���������ܱ�100����
		//2.�ܱ�400����������
		//if (y % 4 == 0)
		//{
		//	if (y % 400 != 0)
		//	{
		//		printf("%d", y);
		//		count++;
		//	}
		//}
		//if (y % 400 == 0)
		//{
		//	printf("%d", y);
		//	count++;
		//}

		//if ((y % 4 == 0) && (y % 100 != 0) || (y % 400 == 0))
		//{
		//	printf("%d ", y);
		//	count++;
//		//}
//	}
//	printf("\ncount=%d\n", count);
//	return 0;
//}


//�ж��Ƿ�Ϊ����
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		int j = 0;
//		for (j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		//ִ��break������
//		if (i == j)
//		{
//			printf("%d ", i);
//		}
//	}
//}

//int main()
//{
//	int count = 0;
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		int j = 0;
//		int flag = 1;//����i��������(�൱��һ����ǣ������ж��Ƿ�Ϊ����)
//		for (j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;//i%j==0  --��i��Ϊ������flag��Ϊ0
//				break;
//			}
//		}
//		//ִ��break������
//		if (flag == 1)//�����Ϊ��������flag���ǵ���1
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\ncoun = %d\n", count);
//	return 0;
//}


//int main()
//{
//flag:
//	printf("hehe\n");
//	printf("haha\n");
//
//	goto flag;
//	return 0;
//}

//�ػ�С����
//ʹ������1�����ڹػ���������롰����������ֹͣ�ػ�

#include<string.h>
#include<stdlib.h>
//int main()
//{
//	//system()---ִ��ϵͳ����
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//again:
//	printf("��ע�⣬��ĵ��Խ���һ���Ӻ�ػ���������룺Ŭ����ש����ȡ���ػ�\n");
//	scanf("%s", input);
//	if (strcmp(input, "Ŭ����ש") == 0)
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//}


//��β���gotoȥִ��
//int main()
//{
//	//system()---ִ��ϵͳ����
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//	while (1)
//	{
//		printf("��ע�⣬��ĵ��Խ���һ���Ӻ�ػ���������룺Ŭ����ש����ȡ���ػ�\n");
//		scanf("%s", input);
//		if (strcmp(input, "Ŭ����ש") == 0)
//		{
//			system("shutdown -a");
//			break;
//		}
//	}
//	return 0;
//	
//}


//for (...)
//{
//	for (...)
//	{
//		for (...)
//		{
//			for (...)
//			{
//				if (disaster)
//					goto error;
//			}
//		}
//	}
//}
//...
//error:
//	if(disaster)
//		//����������

int main()
{
	char arr[] = "hello bit";
	memset(arr, 'x', 5);
	printf("%s\n", arr);
	return 0;
}