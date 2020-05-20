//����һ����������������е�����k���ڵ㡣Ϊ�˷��ϴ�����˵�ϰ�ߣ�
//�����1��ʼ�������������β�ڵ��ǵ�����1���ڵ㡣
//���磬һ��������6���ڵ㣬��ͷ�ڵ㿪ʼ��
//���ǵ�ֵ������1��2��3��4��5��6���������ĵ�����3���ڵ���ֵΪ4�Ľڵ㡣
//
//ʾ����
//
//����һ������ : 1->2->3->4->5, �� k = 2.
//
//�������� 4->5.//ע�⣡�������ﷵ�ص��ǵ�����k����㣬return һ�����
//ͨ����������Է����Ժ�����н��
//����˼·
//���ȼ���һ�£����������ĳ��ȣ�Ȼ����������ѭ����
//�������ڼ���Ҳ����������ĳ��ȼ�ȥK���������ĵڼ�������ѭ������Ҫ��Ľ��ʱ��
//����ý�㷵�ؼ���
#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
#include<assert.h>
typedef struct ListNode { //����һ�����ṹ�� �ṹ����һ���Զ������������ �ṹ��������
	//struct ListNode ʹ��typedef �����ض��� (������һ���������Ӽ��)
	int val;//����ֵ
	struct ListNode *next;//ָ����һ��ListNode���͵Ľ���ָ��	
	//���ﻹʹ��struct ListNode��ԭ���������ض��廹û����Ч
}ListNode;//��struct ListNode �ض���ΪListNode
typedef struct List//��������ṹ��
{
	struct ListNode*head;//��ͷ������
}List;

void InitList(List*l1)
{
	assert(l1);
	l1->head = NULL;//��ʼ�� ͷ���ʲôҲ���� ����һ��ͷָ��
}
void ListPushBack(List*l1,int value)
{//β������Ļ���˼���ǣ�ÿ��Ϊ�½������ռ䣬Ȼ���ҵ�β��㣬
 //��β����nextָ���½�㣬���½��ָ��ռ���
	ListNode *newnode = (ListNode*)malloc(sizeof(ListNode));//Ϊÿһ���������ռ�
	ListNode *cur = l1->head;//����һ��ͷָ�룬������β���
	newnode->val = value;
	newnode->next = NULL;
	if (l1->head == NULL)
	{//��һ�ε�ʱ������Ϊ�գ�ֱ�ӽ��½������ͷ�ĺ���
		l1->head = newnode;
	}
	else
	{
		while (cur->next != NULL)//�ҵ�β���
		{
			cur = cur->next;
		}
		cur->next = newnode;//�����½��
	}
}
void PrintList(List *l1)
{//��ӡ�����е�Ԫ�ص�ֵ
	ListNode*cur = l1->head;
	while (cur!= NULL)
	{
		printf("%d\n", cur->val);
		cur = cur->next;
	}
}
int GetListLength(List*l1)
{//��ȡ����ĳ���
	ListNode*cur = l1->head;
	int count = 0;//������
	while (cur!= NULL)
	{
		cur = cur->next;//ѭ������ȥ�ı�Ҫ����
		count++;
	}
	printf("%d\n", count);
	return count;
}
void getKthFromEnd(List*l1, int k) 
{
	ListNode*cur = l1->head;
	int length = GetListLength(l1)+1;
	int temp = 1;//����������ǰ�ǵڼ������ ע�����1 ��ʼ
	while (cur != NULL)
	{
		if (temp == (length-k))//�������ĸ�Ҳ���������ڶ������ʹ�ó���5+1 -4 =2
		{
			printf("������%d�������%d\n",k, cur->val);
			break;
			//return cur;
		}
		cur = cur->next;
		temp++;

	}
}
int main()
{
	List l;
	int k = 4;
	InitList(&l);//��ʼ��
	ListPushBack(&l, 1);//β����
	ListPushBack(&l, 2);
	ListPushBack(&l, 3);
	ListPushBack(&l, 4);
	ListPushBack(&l, 5);
	PrintList(&l);//��ӡ����
	getKthFromEnd(&l, k);//��ȡ������k�����
	return 0;
}