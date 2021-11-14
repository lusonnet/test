#include<stdio.h>
#define Max 30
typedef struct Queue
{
	int front;
	int rear;
	int a[Max];
	
}Queue;

void InitQueue(Queue *Q)
{
	Q->front = Q->rear = 0;	
}
int main()
{
	Queue Q; 
	InitQueue(&Q);
}
