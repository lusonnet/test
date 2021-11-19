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

int leftCount(Tree rooot)//Ҷ�ӽ����� (����������������Ϊ�� �� 
{
	if(rooot==NULL)return 0;//���Ϊ�գ�����0 ���˳��ݹ飩 
	//��������������Ϊ�գ�����1 
	if(!(rooot->llc)&&!(rooot->rrc))return 1;
    //�ݹ��������������������Ҷ�ӽ�����
	return leftCount(rooot->llc)+leftCount(rooot->rrc);
	 
}

//���Ҷ�ӽ�� - ǰ����� 
void OrderLeft(Tree rooot)
{
	Tree node = rooot;//������ڵ� 
	if(node!=NULL)//���ڵ㲻Ϊ�� 
	{
		if(rooot->llc==NULL&&rooot->rrc==NULL)//Ҷ�ӽ����� 
		{
			printf("%c",rooot->dataa);
		}
		OrderLeft(rooot->llc);//��ǰ����������� 
		OrderLeft(rooot->rrc);//��ǰ����������� 
	}
} 

void Leftonly1(Tree rooot)
{
	
	if(rooot!=NULL)
	{
		//������Ϊ�ղ�����������Ϊ�ջ�����������Ϊ�ղ���������Ϊ�� 
		if(rooot->llc==NULL&&rooot->rrc!=NULL||rooot->llc!=NULL&&rooot->rrc==NULL)
		{
			count1++; //��Ϊ1�Ľڵ���+1 
		}
		Leftonly1(rooot->llc);//��ǰ�����������	
		Leftonly1(rooot->rrc);//��ǰ����������� 
		
	}
	
}

void Leftonly2(Tree rooot)
{
	
	if(rooot!=NULL)
	{
		//���ڵ�������������������Ϊ�� 
		if(rooot->llc!=NULL&&rooot->rrc!=NULL) 
		{
			count2++;//��Ϊ2�Ľ����+1 
		}
		Leftonly2(rooot->llc);//��ǰ�����������			
		Leftonly2(rooot->rrc);//��ǰ����������� 
		
	}

}

int main()
{
	Tree rooot = createBinaryTree();//���������� 
	Leftonly1(rooot);//�����Ϊ1�Ľڵ��� 
	Leftonly2(rooot);//�����Ϊ2�Ľڵ��� 
	printf("%d %d %d",leftCount(rooot),count1,count2);//����ĿҪ����� 
	printf("\n");
	OrderLeft(rooot);//ǰ��������Ҷ�ӽ�� 
	return 0;
}
