#include<stdio.h>
int main()
{   
    int val;
    int m;
	int sum=0;
	
	printf("������Ҫ�жϵ����֣�");
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
�жϻ�������
*/ 
