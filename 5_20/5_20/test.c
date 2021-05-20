#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int my_strlen(char* str)
//{
//	char* start = str;
//	while (*str != '\0')
//	{
//		str++;
//	}
//	return str - start;
//}
//int main()
//{
//	int len = my_strlen("abc");
//	printf("%d\n", len);
//	return 0;
//}

//struct Stu
//{
//	char name[20];
//	int age;
//	char id[20];
//}s1,s2;//全局变量
//
//int main()
//{
//	struct Stu s; //局部变量
//
//	return 0;
//}

//#include<stdio.h>
//#include<math.h>
//int main()
//{
//    float a, b, c;
//    while (scanf("%f %f %f", &a, &b, &c) != EOF)
//    {
//        if (a == 0)
//        {
//            printf("Not quadratic equation");
//        }
//        else
//        {
//            double del = b * b - 4 * a * c;
//            if (del == 0)
//            {
//                double result = (-b + sqrt(del)) / (2 * a);
//                printf("x1=x2=%.2lf", result);
//            }
//            else if (del > 0)
//            {
//                double x = (-b - sqrt(del)) / (2 * a);
//                double y = (-b + sqrt(del)) / (2 * a);
//                printf("x1=%.2lf;x2=%.2lf", x, y);
//            }
//            else
//            {
//                double real = (-b) / (2 * a);//实部
//                double imaginary = sqrt(-del) / (2 * a);//虚部
//                printf("x1=%.2f-%.2fi;x2=%.2f+%.2fi", real, imaginary, real, imaginary);
//            }
//        }
//        printf("\n");
//    }
//    return 0;
//}

