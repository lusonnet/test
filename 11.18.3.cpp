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
	Node *rooot = NULL;//定义根节点root,初始化为NULL
	if(ch!='#')
	{
		rooot= (Node*)malloc(sizeof(Node));//申请结点空间
		rooot->dataa = ch;//给结点赋值
		rooot->llc = createBinaryTree();//递归创建左子树
		rooot->rrc = createBinaryTree();//递归创建右子树
	}
	else//读取到#
	{
		rooot = NULL;//根节点指向NULL
	}
	return rooot;
} 

void preOrder(Tree rooot)
{
	if(rooot != NULL)
    {
	printf("%c",rooot->dataa);
	preOrder(rooot->llc);
	preOrder(rooot->rrc);
    }
}

void middleOrder(Tree rooot)
{
	if(rooot != NULL)
    {
	middleOrder(rooot->llc);
	printf("%c",rooot->dataa);
	middleOrder(rooot->rrc);
    }
}

void afterOrder(Tree rooot)
{
	if(rooot != NULL){
	afterOrder(rooot->llc);
	afterOrder(rooot->rrc);
	printf("%c",rooot->dataa);
}
}

int main()
{
	Tree rooot = createBinaryTree();//创建二叉树
	preOrder(rooot);//先序遍历
	printf("\n");
	middleOrder(rooot);//中序遍历
	printf("\n");
	afterOrder(rooot);//后序遍历

	return 0;
}

