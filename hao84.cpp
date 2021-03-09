#include<stdio.h>
int main()
{   
    int val;
    int m;
	int sum=0;
	
	printf("输入需要判断的数字：");
	scanf("%d",&val);
	
	m=val;
	while(m)
	{
		sum=sum*10+m%10;
		m/=10; 
	 } 
	 //if(sum==val)
	 //printf("yes\n");
	 //else
	   printf("%d\n",sum);
	   
	return 0;
}


/*
--------------------------
m=val;
	while(m)
	{
		sum=sum*10+m%10;
		m/=10; 
	 } 
------------------------
判断回文数！
*/ 
