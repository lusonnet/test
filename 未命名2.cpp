#include<stdio.h>
#include<malloc.h>
typedef struct Node
{

    int password;
    int num;
    struct Node *next;
}Node;

int main(){
	Node *L;
	int n,m;
	int i;
	scanf("%d %d",&n,&m);
	Node *p,*s,*q;
	s=L;
	
	for(i=0;i<n;i++)
	{
		p = (Node*)malloc(sizeof(Node));
		p->num = i +1;
		scanf("%d",&p->password);
		s->next = p;
		s = p;
	}
	L=L->next;
	s->next = L;//����ѭ������
	
    int x,j;
    q=L;
    //�ҵ���һ��Ҫ���ֵ���
    for(j=1;j<m;j++)
      q=q->next;
    while(n)
    {
        x=q->next->password;//��ʱ���������
        //�����ź������е�����
        printf("%d ",q->next->num);
        //����
        q->next=q->next->next;
        for(j=1;j<x;j++)
            q=q->next;
        n--;
    }

}
