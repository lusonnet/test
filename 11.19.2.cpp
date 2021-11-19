#include<stdio.h>
#include<malloc.h>

int visited[20] = {0};
typedef struct Matrix
{
	int arcs[20][20];
	int poinum;
	int edenum;
	int vex[20];
} Matrix;


typedef struct{
	int vex[20]; 
	int front;
	int rear;
}*Queue,queue;

int Location(Matrix *M,char a)
{
	for(int i=1;i<=M->poinum;i++){
		if(M->vex[i] == a)
			return i;
		
	}
	return 0;
}
void creat(Matrix *M)
{
	int i,j,k;
	char vex1,vex2;
	scanf("%d %d",&M->poinum,&M->edenum);
	getchar();
	for(i=1;i<=M->poinum;i++){
		for(j=1;j<=M->poinum;j++){
			M->arcs[i][j] = 0;
		}
	} 
	for(i=1;i<=M->poinum;i++){
		scanf("%c",&M->vex[i]);
	}
	getchar();
	for(k=0;k<M->edenum;k++){
		scanf("%c%c",&vex1,&vex2);
		i = Location(M,vex1);
		j = Location(M,vex2);
		getchar();
		M->arcs[i][j] = 1;
	}

	for(i=1;i<=M->poinum;i++){
		int count1 = 0;
		int count2 = 0;
		for(j=1;j<=M->poinum;j++){
			if(M->arcs[i][j] != 0){
				count1++;
			}
			if(M->arcs[j][i] != 0){
				count2++;
			}
		}
		printf("%c %d %d %d\n",M->vex[i],count1,count2,count1+count2);
	}

} 

int FirstMatrix(Matrix *M,int v0){
	for(int i = 1;i<=M->poinum;i++){
		if(M->arcs[v0][i]!=0){
			return i;
		}
	}
}

int NextMatrix(Matrix *M,int v0,int w){
	for(int i = w+1;i <= M->poinum;i++){
		if(M->arcs[v0][i]!=0){
			return i;
		}
	}
	return -1;
}

void DDFS(Matrix *M,int v0){
	printf("%c",M->vex[v0]);
	visited[v0] = 1;
	int w = FirstMatrix(M,v0);
	while(w!=-1){
		if(!visited[w])
		    DDFS(M,w);
		w = NextMatrix(M,v0,w);
	}
	
}

void TraverseG(Matrix * M){
	for(int i = 1;i<= M->poinum;i++){
		visited[i] = 0;
	}
	for(int i = 1;i<=M->poinum;i++){
		if(!visited[i]){
			DDFS(M,i);
		}
	}
}
Queue InitQueue(){
	Queue Q=(Queue)malloc(sizeof(queue));
	Q->front = Q->rear = 0;
	return Q;
}

void EnterQueue(Queue Q,int w){
	Q->rear++;
	Q->vex[Q->rear] = w;
}

int Empty(Queue Q){
	if(Q->rear == 0){
		return 1;
	}
	return 0;
}

void deleteQueue(Queue Q,int *v){
	if(!Empty(Q)){
		*v = Q->vex[Q->rear];
		Q->rear--;  
	}
}

void BBFS(Matrix *M,int v0){
	Queue Q = InitQueue();
	printf("%c",M->vex[v0]);
	visited[v0] = 1;
	EnterQueue(Q,v0);
	while(!Empty(Q)){
		int v;
		deleteQueue(Q,&v);
		int w = FirstMatrix(M,v);
		while(w!=-1){
			if(visited[w]!=1){
				printf("%c",M->vex[w]);
				visited[w] = 1;
				EnterQueue(Q,w);
			}
			w = NextMatrix(M,v,w);
		}
	}
	
}

void BFSTraverseG(Matrix * M){
	for(int i = 1;i<= M->poinum;i++){
		visited[i] = 0;
	}
	for(int i = 1;i<=M->poinum;i++){
		if(!visited[i]){
			BBFS(M,i);
		}
	}
}


int main(){
	Matrix *M = (Matrix*)malloc(sizeof(Matrix));
	creat(M);
	TraverseG(M);
	printf("\n");
	BFSTraverseG(M);
	return 0;
}
 
