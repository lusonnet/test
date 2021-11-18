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
	Node *rooot = NULL;//������ڵ�root,��ʼ��ΪNULL
	if(ch!='#')
	{
		rooot= (Node*)malloc(sizeof(Node));//������ռ�
		rooot->dataa = ch;//����㸳ֵ
		rooot->llc = createBinaryTree();//�ݹ鴴��������
		rooot->rrc = createBinaryTree();//�ݹ鴴��������
	}
	else//��ȡ��#
	{
		rooot = NULL;//���ڵ�ָ��NULL
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
	Tree rooot = createBinaryTree();//����������
	preOrder(rooot);//�������
	printf("\n");
	middleOrder(rooot);//�������
	printf("\n");
	afterOrder(rooot);//�������

	return 0;
}

