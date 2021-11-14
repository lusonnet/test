#include<stdio.h>
#define MAX 30 

typedef struct Qnodee{
	int data;
	struct Qnodee* next;
}Qnodee,*QueueePtr;

typedef struct
{
    int a[MAX];
    QueueePtr froont;
    QueueePtr rearr;
}Queuee;


void InitQueuee(Queuee *Q)
{
    Q->froont = Q->rearr = 0;
}

int QueueeEmpty(Queuee *Q)
{
    return (Q->froont == Q->rearr) ?1:0;
}

int QueueeIn(Queuee *Q,int x)
{
    if(((Q->rearr+1)%MAX)==Q->froont)
        return -1;
    Q->a[Q->rearr] = x;
    Q->rearr = (Q->rearr+1)%MAX;
    return 1;
}

int QueueeOut(Queuee *Q,int *x)
{
    if(Q->froont == Q->rearr)
		return -1;
	*x = Q->a[Q->froont];
	Q->froont = (Q->froont+1)%MAX;
	return 1;
	 
}

int GetQueuee(Queuee *Q)
{
    return Q->a[Q->froont];
}

void OutPut(Queuee Q)
{
	QueueePtr q;
	q = Q.front->next;
	while(q)
	{
		printf("%d ",q->data);
		q = q->next;
	}
	printf("\n");
}

int main()
{
	int tmpp,n,x;
    scanf("%d",&n);
    if(n==1)
    	printf("1");
    else
    {
    	Queuee Q1;
    	printf("1\n");
    	printf("1 1\n");
    	InitQueuee(&Q1);
    	for(int i = 0;i < 2;i++)
    	{
    		QueueeIn(&Q1,1);
    	}
    	for(int i = 0;i < n - 2;i++)
    	{
    		Queuee Q2;
    		InitQueuee(&Q2);
    		QueueeIn(&Q2,1);
    		while(!QueueeEmpty(&Q1))
    		{	
    			QueueeOut(&Q1,&x);
    			if(QueueeEmpty(&Q1))
    				QueueeIn(&Q2,1);
				else
				{
					int ret = GetQueuee(&Q1);
					QueueeIn(&Q2,x+ret); 
				}
				
					
    		}
    		Q1=Q2;
    		
		}
			
		
    
    	
	}
    
}
