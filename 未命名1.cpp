void hanoi(int n,char x,char y,char z)
{
	if(n==1)
		printf("%c->%c",x,z);
	else
	{
		hanoi(n-1,x,z,y);
		printf("%c->%c",x,z);
		hanoi(n-1,y,x,z);	
	}
}

int main()
{
	int n;
	scanf("%d",&n);
	hanoi(n,'A','B','C');
	return 0;
}
