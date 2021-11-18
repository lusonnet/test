#include<stdio.h>
#include<malloc.h>
typedef struct Node
{
	struct Node *llc,*rrc;
	char dataa;
}Node,*Tree;

Tree createBinaryTree(){
	char ch;
	scanf("%c",&ch);
	Node *rooot = NULL;
	if(ch!='#')
	{
		rooot= (Node*)malloc(sizeof(Node));
		rooot->dataa = ch;
		rooot->llc = createBinaryTree();
		rooot->rrc = createBinaryTree();
	}
	else
	{
		rooot = NULL;
	}
	return rooot;
} 

void preOrder(Tree rooot)
{
	Tree stack[30];
	Tree node = rooot;
	int toop = -1;
	while(node||toop!=-1)
	{
		while(node)
		{
			printf("%c",node->dataa);
			stack[++toop] = node;
			node = node->llc;
		}
		if(toop!=-1){
			node = stack[toop--];
			node = node->rrc;
		}
	}
	
}

void middleOrder(Tree rooot)
{
	Tree stack[30];
	Tree node = rooot;
	int toop = -1;
	while(node||toop!=-1)
	{
		while(node){
			stack[++toop] = node;
			node = node->llc;	
		}
		if(toop!=-1)
		{
			node = stack[toop--];
			printf("%c",node->dataa);
			node = node->rrc;
		}
		 
	}
}

int main()
{
	Tree rooot = createBinaryTree();
	preOrder(rooot);
	printf("\n");
	middleOrder(rooot);
	return 0;
}
