#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int Add(int x, int y)
//{
//
//}
//
//int Sub(int x, int y)
//{
//
//}
//
//int Mul(int x, int y)
//{
//}
//
//int Div(int x, int y)
//{
//}
//void menu()
//{
//	printf("********************\n");
//	printf("******1.add 2.sub***\n");
//	printf("******3.***\n");
//	printf("********************\n");
//	printf("********************\n");
//}
//int main()
//{
	//(*(void(*)())0)();
	//void (*signal(int, void(*)(int)))(int);
	////���Կ���
	//void(*)(int)signal(int,void(*)(int)

	//int (*pf1)(int, int) = Add;//����ָ��
	//int (*pf2)(int, int) = Sub;

	//int (*pfArr[2])(int, int);//����ָ������
	//int (*pfArr[2])(int, int) = { Add,Sub };//����ָ�������ʼ��
	//int input= 0;	
	//do {
	//	menu();
	//	int x = 0;
	//	int y = 0;
	//	int ret = 0;
	//	printf("��ѡ��>");
	//	scanf("%d", &input);
	//	if (input <= 1 && input <= 4)
	//	{
	//		int(*pfArr[5])(int, int) = { NULL,Add,Sub,Mul,Div };
	//		printf("��������������");
	//		scanf("%d %d", &x, &y);
	//		ret = (pfArr[input])(x, y);
	//		printf("ret = %d\n", ret);

	//	}
	//	else if (input == 0)
	//	{
	//		printf("�˳�\n");
	//		break;
	//	}
	//	else
	//		printf("����ѡ��\n");
		//switch (input)
		//{
		//case 1:
		//	break;
		//case 2:
		//	break;
		//case 3:
		//	break;
		//case 4:
		//	break;
		//case 0:
		//	printf("�˳�����\n");
		//	break;
		//default:
		//	printf("ѡ������˳�����\n");
		//	break;

		//}
//	} while (input);
//	
//	return 0;
//}


//int main()
//{
//	int(*p)(int, int);//����ָ��
//	int(*p2[4])(int, int);//����ָ�������
//	int(*(*p3)[4])(int, int) = &p2;//ȡ������ָ������ĵ�ַ
//	return 0;
//}