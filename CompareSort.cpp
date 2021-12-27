#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>
#define MAX 100000
 
void InsSort(int r[],int length)
{
	int i,j;
	for (i=2;i<=length;i++)
	{
		r[0]=r[i];
		j=i-1;
		while(r[0]<r[j])
		{
			r[j+1]=r[j];
			j=j-1;
		}
		r[j+1]=r[0];
	}
}       
 
void swap(int &x,int &y)
{
	int z;
	z=x;
	x=y;
	y=z;
}

int median3(int a[],int left,int right)
{
	int center=(left+right)/2;
	if(a[left]>a[center])
		swap(a[left],a[center]);
	if(a[left]>a[right])
		swap(a[left],a[right]);
	if(a[center]>a[right])
		swap(a[center],a[right]);
	swap(a[center],a[right-1]);
	return a[right-1];
}

void insertionsort(int a[],int n)
{
	int j,p;
	int tmp;
	for(p=1;p<=n;p++)
	{
		tmp=a[p];
		for(j=p;j>0&&a[j-1]>tmp;j--)
			a[j]=a[j-1];
		a[j]=tmp;
	}
}

void qsort(int a[],int left,int right)
{
	int i,j;
	int pivot;
	if(left+2<=right)
	{
		pivot=median3(a,left,right);
		i=left;j=right-1;
		for(;;)
		{
			while(a[++i]<pivot){}
			while(a[--j]>pivot){}
			if(i<j)
				swap(a[i],a[j]);
			else
				break;
		}
		swap(a[i],a[right-1]);
		qsort(a,left,i-1);
		qsort(a,i+1,right);
	}
	else
		insertionsort(a+left,right-left+1);
}

void quicksort(int a[],int n)
{
	qsort(a,0,n-1);
}     
 
void BubbleSort(int r[],int length)
{
	int i,j,temp;
	for(j=length;j>0;j--)
		for(i=0;i<j-1;i++)
			if(r[i]>r[i+1])
			{
				temp=r[i];
				r[i]=r[i+1];
				r[i+1]=temp;
			}
}      
 
void ShellInsert(int r[],int length,int delta)
{
	int i,j;
	for(i=1+delta;i<=length;i++)
		if(r[i]<r[i-delta])
		{
			r[0]=r[i];
			for(j=i-delta;j>0&&r[0]<r[j];j-=delta)
				r[j+delta]=r[j];
			r[j+delta]=r[0];
		}
}

void  ShellSort(int r[], int length, int delt[], int n)
{ 
	int i;
	for(i=0;i<=n-1;++i)
		ShellInsert(r,length,delt[i]);
}       
 
void SelectSort(int r[],int length)
{
	int i,j,k;
	int n;
	int x;
    n=length;
	for (i=1;i<=n-1;++i)
	{
		k=i;
		for(j=i+1;j<=n;++j)
			if(r[j]<r[k])
				k=j;
			if( k!=i)
			{
				x= r[i];
				r[i]=r[k];
				r[k]=x;
			}
	}
 
}       
 
void sift(int r[],int k,int m)
{
	int t;
	int i,j;
	int x;
	int finished;
	t= r[k];
	x=r[k];
	i=k;
	j=2*i;
	finished=FALSE;
	while(j<=m&&!finished)
	{     
		if(j<m&&r[j]< r[j+1])
			j=j+1;
		if(x>=r[j])
			finished=TRUE;
		else 
		{
			r[i]=r[j];
			i=j;
			j=2*i;
		}
	}
	r[i] =t;
}

void crt_heap(int r[], int length)
{
	int i,n;
    n=length;
	for (i=n/2;i>=1;--i) 
		sift(r,i,n);
}

void HeapSort(int r[],int length)
{
	int i,n;
	int b;
	crt_heap(r,length);
	n= length;
	for (i=n;i>=2;--i)
	{
		b=r[1];
		r[1]=r[i];
		r[i]=b;
		sift(r,1,i-1);
	}
}      
 
void merge(int a[],int tmparray[],int lpos,int rpos,int rightend)
{
	int i,leftend,numelements,tmppos;
	leftend=rpos-1;
	tmppos=lpos;
	numelements=rightend-lpos+1;
	while(lpos<=leftend && rpos<=rightend)
		if(a[lpos]<=a[rpos])
			tmparray[tmppos++]=a[lpos++];
		else
			tmparray[tmppos++]=a[rpos++];
		while(lpos<=leftend)
			tmparray[tmppos++]=a[lpos++];
		while(rpos<=rightend)
			tmparray[tmppos++]=a[rpos++];
		for(i=0;i<numelements;i++,rightend--)
			a[rightend]=tmparray[rightend];
}

void msort(int a[],int tmparray[],int left,int right)
{
	int center;
	if(left<right)
	{
		center=(left+right)/2;
		msort(a,tmparray,left,center);
		msort(a,tmparray,center+1,right);
		merge(a,tmparray,left,center+1,right);
	}
}

void mergesort(int a[],int n)
{
	int *tmparray;
	tmparray=(int*)malloc(n*sizeof(int));
	if(tmparray!=NULL)
	{
		msort(a,tmparray,0,n-1);
		free(tmparray);
	}
	else
		printf("no space for tmp array!");
}        
 
void BInsertSort(int num[],int n)
{
	int length=n;
	int low,high,i,j,m;
	for(i=2;i<=length;i++)
	{
	   num[0]=num[i];
	   low=1;
	   high=i-1;
	   while(low<=high)
	   {
		   m=(low+high)/2;
			if(num[0]<num[m])
				high=m-1;
			else
				low=m+1;
	   }
	   for(j=i-1;j>=high+1;j--)
		   num[j+1]=num[j];
	   num[high+1]=num[0];
	}
}        
 
int main()
{
	long dwStart,dwStop,runtime;
	int num[MAX],a[MAX],i,j;
	dwStart=GetTickCount();
	srand((unsigned)time(NULL));
	for(i=0;i<MAX;i++)
		num[i]=rand();	
	dwStop=GetTickCount();
	runtime=dwStop-dwStart;
	
 
	for(i=0;i<MAX;i++)
		a[i]=num[i];
	dwStart=GetTickCount();
	InsSort(a,MAX);
	dwStop=GetTickCount();
	runtime=dwStop-dwStart;
	printf("插入排序用时：%ldms\n",runtime);
 
	for(i=0;i<MAX;i++)
		a[i]=num[i];
	dwStart=GetTickCount();
	quicksort(a,MAX);
	dwStop=GetTickCount();
	runtime=dwStop-dwStart;
	printf("快速排序用时：%ldms\n",runtime);
 
	for(i=0;i<MAX;i++)
		a[i]=num[i];
	dwStart=GetTickCount();
	BubbleSort(a,MAX);
	dwStop=GetTickCount();
	runtime=dwStop-dwStart;
	printf("冒泡排序用时：%ldms\n",runtime);
 
	int delt[10]={100,80,60,40,20,10,5,3,2,1};
	for(i=0;i<MAX;i++)
		a[i]=num[i];
	dwStart=GetTickCount();
	ShellSort(a,MAX,delt,10);
	dwStop=GetTickCount();
	runtime=dwStop-dwStart;
	printf("希尔排序用时：%ldms\n",runtime);
 
	for(i=0;i<MAX;i++)
		a[i]=num[i];
	dwStart=GetTickCount();
	SelectSort(a,MAX);
	dwStop=GetTickCount();
	runtime=dwStop-dwStart;
	printf("简单选择排序用时：%ldms\n",runtime);
 
	for(i=0;i<MAX;i++)
		a[i]=num[i];
	dwStart=GetTickCount();
	HeapSort(a,MAX);
	dwStop=GetTickCount();
	runtime=dwStop-dwStart;
	printf("堆排序用时：%ldms\n",runtime);
 
	for(i=0;i<MAX;i++)
		a[i]=num[i];
	dwStart=GetTickCount();
	mergesort(a,MAX);
	dwStop=GetTickCount();
	runtime=dwStop-dwStart;
	printf("归并排序用时：%ldms\n",runtime);
 
	for(i=0;i<MAX;i++)
		a[i]=num[i];
	dwStart=GetTickCount();
	BInsertSort(a,MAX);
	dwStop=GetTickCount();
	runtime=dwStop-dwStart;
	printf("折半插入排序用时：%ldms\n",runtime);
	getchar();
}
