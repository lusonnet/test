#include<stdio.h>
#include<malloc.h>
typedef struct Node
{
	struct Node *llc,*rrc;
	char dataa;
}Node,*Tree;

int count2 = 0;
int count1 = 0;
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

int leftCount(Tree rooot)//叶子结点个数 (左子树和右子树都为空 ） 
{
	if(rooot==NULL)return 0;//结点为空，返回0 （退出递归） 
	//子树和右子树都为空，返回1 
	if(!(rooot->llc)&&!(rooot->rrc))return 1;
    //递归计算左子树和右子树的叶子结点个数
	return leftCount(rooot->llc)+leftCount(rooot->rrc);
	 
}

//输出叶子结点 - 前序遍历 
void OrderLeft(Tree rooot)
{
	Tree node = rooot;//定义根节点 
	if(node!=NULL)//根节点不为空 
	{
		if(rooot->llc==NULL&&rooot->rrc==NULL)//叶子结点输出 
		{
			printf("%c",rooot->dataa);
		}
		OrderLeft(rooot->llc);//按前序遍历左子树 
		OrderLeft(rooot->rrc);//按前序遍历右子树 
	}
} 

void Leftonly1(Tree rooot)
{
	
	if(rooot!=NULL)
	{
		//左子树为空并且右子树不为空或者左子树不为空并且右子树为空 
		if(rooot->llc==NULL&&rooot->rrc!=NULL||rooot->llc!=NULL&&rooot->rrc==NULL)
		{
			count1++; //度为1的节点数+1 
		}
		Leftonly1(rooot->llc);//按前序遍历左子树	
		Leftonly1(rooot->rrc);//按前序遍历右子树 
		
	}
	
}

void Leftonly2(Tree rooot)
{
	
	if(rooot!=NULL)
	{
		//根节点左子树和右子树都不为空 
		if(rooot->llc!=NULL&&rooot->rrc!=NULL) 
		{
			count2++;//度为2的结点数+1 
		}
		Leftonly2(rooot->llc);//按前序遍历左子树			
		Leftonly2(rooot->rrc);//按前序遍历右子树 
		
	}

}

int main()
{
	Tree rooot = createBinaryTree();//创建二叉树 
	Leftonly1(rooot);//计算度为1的节点数 
	Leftonly2(rooot);//计算度为2的节点数 
	printf("%d %d %d",leftCount(rooot),count1,count2);//按题目要求输出 
	printf("\n");
	OrderLeft(rooot);//前序遍历输出叶子结点 
	return 0;
}
