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
	if(rooot==NULL)return 0;//���ڵ�Ϊ�գ�����0 
	int leftH = getHeight(rooot->llc);//��ȡ�������ĸ߶� 
	int rightH = getHeight(rooot->rrc);//��ȡ�������ĸ߶�
	//�Ƚ����������������ĸ߶ȣ�ȡ�ϸߵ������ĸ߶�+1��Ϊ���ĸ߶� 
	return (leftH>rightH?leftH:rightH )+1;
}

int main()
{
	Tree rooot = createBinaryTree();
	printf("%d",getHeight(rooot));
	return 0;
}
