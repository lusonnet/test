#include<stdio.h>
#include<malloc.h>

struct node{
	int number;
	int data;
	struct node *next;
}; 

int main(){
	int n,m,k;
	int i;
	int a[100];//��¼�� 
	int count = 0;
	struct node *head,*p,*q,*tail;
	
	head = (struct node*)malloc(sizeof(struct node));//����ͷ���
	head->next = NULL;
	
		scanf("%d %d",&n,&m);
		getchar();
		tail = head;
		for(i=0;i<n;i++)
		{

			p = (struct node*)malloc(sizeof(struct node));
			p->data = i+1;//��¼���		
			scanf("%d",&p->number);				
			tail->next = p;
			
			p->next = head->next;//�γ�ѭ������ 
			tail = p; 
		}
		p = head->next;
		q = tail;
		i = 1;
		while(n)
		{
			if(i==m)//���� 
			{
				a[count] = p->data;
				count++;
				q->next = q->next->next;	
				free(p);
				p = q->next;
				i = 1; 
				m = p -> number;
			}
			else
			{
				q = p;
				p = p->next;
				i++;
			}
		
			n--;
		} 
	free(p);
	head->next = NULL;
		
	
	for(i=0;i<count;i++)
	{
		printf("%d ",&a[i]);
	}
	free(head);
	return 0;
}
