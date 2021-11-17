#include<stdio.h>
#include<malloc.h>
#define MAX 32767
typedef struct Matrix
{
	int arcs[20][20];
	int poinum;
	int edenum;
	char vex[20];

}Matrix;

typedef struct edge
{
	int begin;
	int end;
	int weight;
	int isfind;
}Edge;

Edge edge[20];

int Location(Matrix *M,char a)//查找函数 
{
	for(int i=0;i<M->poinum;i++){
		if(M->vex[i] == a)
			return i;
		
	}
	return 0;
}

int find(int *parent, int v)
{
    while (parent[v] > 0)
    {
        v = parent[v];
    }
    return v;
}

void Sort(Matrix *M,int k)
{
	Edge tmp;
	int i,j;
	for(i=0;i<k-1;i++)
	{
		for(j=i+1;j<k;j++)
		{
			if(edge[i].weight>edge[j].weight)
			{
				tmp = edge[i];
				edge[i] = edge[j];
				edge[j] = tmp;
			}
		}
	}
}

void kruskal(Matrix *M)
{
	int parent[100] = {0};//数组纪录能否生成环路
	int i,j,k=0;
	int v1,v2;
	for(i=0;i<M->poinum-1;i++)
	{
		for(j=i+1;j<M->poinum;j++)
		{
			if(M->arcs[i][j]!=MAX)
			{
				edge[k].begin = i;
				edge[k].end = j;
				edge[k].weight = M->arcs[i][j];
				edge[k].isfind = 0;
				k++;
			}
		}
	}
	Sort(M,k);
	
	for(i=0;i<M->edenum;i++)
	{
		v1 = find(parent,edge[i].begin);
		v2 = find(parent,edge[i].end);
		
		if(v1!=v2)
		{
			parent[v1] = v2;
			edge[i].isfind = 1;
		}
		printf("(%c,%c,%d,%d)",M->vex[edge[i].begin], M->vex[edge[i].end], edge[i].weight, edge[i].isfind);
	}
}



int main()
{
	int i,j,k,weight;
	Matrix *M = (Matrix*)malloc(sizeof(Matrix));
	char vex1,vex2;
	scanf("%d%d",&M->poinum,&M->edenum);
	getchar();
	for(i=0;i<M->poinum;i++){
		for(j=0;j<M->poinum;j++){
			M->arcs[i][j] = MAX;//初始化 
		}
	} 
	for(i=0;i<M->poinum;i++)
	{
		scanf("%c",&M->vex[i]);
	}
	getchar();
	
	for(i=0;i<M->edenum;i++)
	{
		scanf("(%c,%c,%d)",&vex1,&vex2,&weight);
		j = Location(M,vex1);
		k = Location(M,vex2);
		M->arcs[j][k] = weight;//保存权值 
		M->arcs[k][j] = M->arcs[j][k];
	} 
	
	kruskal(M); 
}
