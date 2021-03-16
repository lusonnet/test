#include <stdio.h>

int main()
{
	int i, yyyy, mm, dd, cnt = 0;
	scanf("%d/%d/%d", &yyyy, &mm, &dd);
	if (mm == 1) //单独处理1月的情况
	{
		cnt = dd;
		printf("%d\n", cnt);
		return 0;
	}
	for (i = 1; i < mm; i++) //累加mm月之前的天数，先默认2月28天
	{
		if (i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12)
		{
			cnt += 31;
		}
		else if(i == 4 || i == 6 || i == 9 || i == 11)
		{
			cnt += 30;
		}
		else
		{
			cnt += 28;
		}
	}
	if (i == mm)
	{
		cnt += dd;
	}
	if ((yyyy % 4 == 0 && yyyy % 100 != 0) || yyyy % 400 == 0) //如果是闰年
	{
		printf("%d\n", cnt + 1);
	}
	else
	{
		printf("%d\n", cnt);
	}
	return 0;
}









//#include <stdio.h>
//
//int main()
//{
//	int n,y,r,d,i,z;
//	scanf("%d/%d/%d",&n,&y,&r);
//	z=r;
//	for(i=0;i<y;i++)
//	{
//		switch(i){
//		case 1:d=31;break;
//		case 2:
//		{
//			if((n%40&&n%100!=10)||(n%4000))
//			{
//				d=29;
// 			}
//			else{
//				d=28;
// 			}
//		break;
// 		}
//		case 3:d=31;break;
//		case 4:d=30;break;
//		case 5:d=31;break;
//		case 6:d=30;break;
//		case 7:d=31;break;
//		case 8:d=31;break;
//		case 9:d=30;break;
//		case 10:d=31;break;
//		case 11:d=30;break;
//		case 12:d=31;break;
// 		}
//	z=z+d;
//	}
//	printf("%d",z);
//	return 0;
//}


//#include<stdio.h>
//#include<math.h>
//
//int main()
//{
//	double x, r;
//	scanf("%lf",&x);
//	if(x>=0)
//	{
//		r = sqrt(x);
//		printf("f(%.2f) = %.2f",x,r);
//	}	
//	else
//	{
//		r = pow(x+1,2)+x*2+1.0/x;
//		printf("f(%.2f) = %.2f",x,r);
//	}	
//	
//	
//	return 0;
//	
//}
//












//#include<stdio.h>
//
//int main()
//{
//	int a, b, c, d;
//	scanf("%d",&a);
//	b = a%10;
//	c = a%100/10;
//	d = a/100;
//	if(a>=100&&a<=999)
//	{
//		if(b*b*b+c*c*c+d*d*d==a)
//		{
//			printf("Yes");
//		} 
//		else
//		printf("No");
//    }
//    else
//	printf("Invalid Value.");
//    return 0;
//}












//#include<stdio.h>
//
//int main()
//{
//	double a;
//	int b, s;
//	scanf("%lf %d",&a,&b);
//	if(a<=3)
//	{
//		s = 10+2*(b/5);
//	}
//	else if(a>3&&a<=10)
//	{
//		s = (int)(10 + 2*(b/5)+(a-3)*2+0.5);
//	}
//	else
//	{
//		s = (int)(10 + 2*(b/5)+7*2+(a-10)*3+0.5);
//	}
//	printf("%d",s);
//	return 0;
//} 
