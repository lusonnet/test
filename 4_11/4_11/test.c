#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//	int i = 0;
//	int k = 0;
//	for (i = 0,k=0; k = 0; i++, k++)
//		k++;
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	do
//	{
//		if (i == 5)
//			continue;
//			//break;
//			
//		printf("%d", i);
//		i++;
//	} while (i<=10);
//	return 0;
//}

//int main()
//{
//	int n,i,j;
//	int sum = 1;
//	int sum1 = 0;
//	scanf("%d", &n);
	//for (n = 1; n <= 3; n++)
	//{
	//	sum = 1;//��һ������Ҫ!Ҫ��sum��ʼΪ1
	//	for (i = 1; i <= n; i++)
	//		sum *= i;
	//	sum1 = sum1+sum;
	//}

	//����д��
//  for (n = 1; n <= 3; n++)
//	{
//		sum *= i;
//		sum1 += sum;
//	}
//	printf("%d", sum1);
//	return 0;
//
//

//#include<stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	int left = 0;
//	int right = sz - 1;
//
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("�ҵ��ˣ��±��ǣ�%d\n", mid);
//			break;
//		}
//
//	}
//	if (left < right)
//	{
//		printf("�Ҳ�����\n");
//	}
//}

//#include<string.h>
//#include<windows.h>
//int main()
//{
//	char arr1[] = "welcome to bit!!!!!!";
//	char arr2[] = "####################";
//	int left = 0;
//	int right = strlen(arr1) - 1;
//	
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		Sleep(1000);//˯��һ��
//		system("cls");
//		printf("%s\n", arr2);
//		left++;
//		right--;
//	}
//	return 0;
//}


//int main()
//{
//	int i;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//			count++;
//		if (i / 10 == 9)
//			count++;
//	}
//	printf("%d", count);
//	return 0;
//}

//int main()
//{
//	int a[10] = {0};
//	int i;
//	int max = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &a[i]);
//	}
//	
//	//max = a[0];
//	for (i = 1; i < 10; i++)
//	{
//		if (a[i] > a[0])
//			max = a[i];
//	}
//	printf("%d", max);
//	return 0;
//}

//int main()
//{
//	int i, j, n;
//	for (i = 1; i < 10; i++)
//	{
//		int n = i;
//		for (j = 1; j <= n; j++)
//		{
//			printf("%d*%d=%2d ", j, i, i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//int main()
//{
//
//	return 0;
//}


//��������Ϸ
//#include<stdlib.h>
//#include<time.h>
//
//void game()//��������Ϸ����
//{
//	//1.���������
//	//rand����������һ��0-32767֮�������
//
//	srand((unsigned int)time(NULL));//ʱ���
//	int ret = rand()%100+1;//0-99��+1��Ϊ1-100
//	//printf("%d\n", ret);
//	
//	//2.������
//	int guess = 0;
//	while (1)
//	{
//		printf("������֣�>");
//		scanf("%d", &guess);
//		if (guess < ret)
//		{
//			printf("��С��\n");
//		}
		//else if (guess > ret)
		//{
		//	printf("�´���\n");
		//}
		//else
		//{
		//	printf("��ϲ�㣡�¶���\n");
		//	break;
		//}
//
//
//	}
//}
//
//void menu()
//{
//	printf("***************************\n");
//	printf("******1.play **************\n");
//	printf("******0.exit **************\n");
//	printf("***************************\n");
//
//}
//int main()
//{
//	int input = 0;
//	do
//	{
//		menu();
//		printf("��ѡ��>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ");
//			break;
//		default:
//			printf("ѡ���������ѡ");
//			break;
//		}
//	} while (input);
//	return 0;
//}

//int main()
//{
//	int a[2][3] = { {1,2,3},{4,5,6} };
//	int b[3][2] = { {1,4}, {2,5},{3,6} };
//	int c[2][2] = { {0,0},{0,0} };
//	int i, j, k;
//	for (i = 0; i < 2; i++)
//	{
//		for (j = 0; j < 2; j++)
//		{
//			for (k = 0; k < 3; k++)
//				c[i][j] = c[i][j] + a[i][k] * b[k][j];
//		}
//	}
//	printf("the array a*array b is :\n");
//	for (i = 0; i < 2; i++)
//	{
//		for(j=0;j<2;j++)
//			printf("%4d\n", c[i][j]);
//		printf("\n");
//	}
//	return 0;
//}

//#include<stdlib.h>
//void play()
//{
//	int ret = rand() % 100 + 1;
//	int guess = 0;
//	while (1)
//	{
//		printf("������֣�");
//		scanf("%d", &guess);
//		if (guess < ret);
//		{
//			printf("��С��\n");
//		}
//		else if (guess > ret)
//		{
//			printf("�´���\n");
//		}
//		else
//		{
//			printf("��ϲ�㣡�¶���\n");
//			break;
//		}
//	
//
//	}
//}
//void menu()
//{
//	printf("***************************\n");
//	printf("******1.play **************\n");
//	printf("******0.exit **************\n");
//	printf("***************************\n");
//
//}
//
//int main()
//{
//	srand((unsigned)time(NULL));
//	int input = 0;
//	do
//	{
//		menu();
//		printf("��ѡ��>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			play();
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("ѡ���������ѡ��");
//			break;
//		}
//	} while (input);
//}

#include<string.h>
int main()
{
	int i = 0;
	char password[20] = { 0 };
	for (i = 0; i < 3; i++)
	{
		printf("���������룺>");
		scanf("%s", password);
		if (strcmp(password, "123456") == 0)
		{
			printf("��¼�ɹ�\n");
			break;
		}
		else
		{
			printf("���������������\n");
		}
		
	}
	if (i == 3)
	{
		printf("��������������˳�����\n");
	}
	return 0;
}