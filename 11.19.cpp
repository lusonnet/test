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



int getHeight(Tree rooot)
{
	if(rooot==NULL)return 0;//根节点为空，返回0 
	int leftH = getHeight(rooot->llc);//获取左子树的高度 
	int rightH = getHeight(rooot->rrc);//获取右子树的高度
	//比较左子树和右子树的高度，取较高的子树的高度+1即为树的高度 
	return (leftH>rightH?leftH:rightH )+1;
}

int main()
{
	Tree rooot = createBinaryTree();
	printf("%d",getHeight(rooot));
	return 0;
}
