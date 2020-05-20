//输入一个链表，输出该链表中倒数第k个节点。为了符合大多数人的习惯，
//本题从1开始计数，即链表的尾节点是倒数第1个节点。
//例如，一个链表有6个节点，从头节点开始，
//它们的值依次是1、2、3、4、5、6。这个链表的倒数第3个节点是值为4的节点。
//
//示例：
//
//给定一个链表 : 1->2->3->4->5, 和 k = 2.
//
//返回链表 4->5.//注意！！！这里返回的是倒数第k个结点，return 一个结点
//通过这个结点可以访问以后的所有结点
//解题思路
//首先计算一下，这个单链表的长度，然后对链表进行循环，
//（倒数第几个也就是用链表的长度减去K就是正数的第几个）当循环到所要求的结点时，
//保存该结点返回即可
#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
#include<assert.h>
typedef struct ListNode { //定义一个结点结构体 结构体是一种自定义的数据类型 结构体类型是
	//struct ListNode 使用typedef 类型重定义 (重命名一下这样更加简洁)
	int val;//结点的值
	struct ListNode *next;//指向下一个ListNode类型的结点的指针	
	//这里还使用struct ListNode的原因是类型重定义还没有生效
}ListNode;//将struct ListNode 重定义为ListNode
typedef struct List//定义链表结构体
{
	struct ListNode*head;//带头的链表
}List;

void InitList(List*l1)
{
	assert(l1);
	l1->head = NULL;//初始化 头结点什么也不存 像是一个头指针
}
void ListPushBack(List*l1,int value)
{//尾插入结点的基本思想是，每次为新结点申请空间，然后找到尾结点，
 //让尾结点的next指向新结点，而新结点指向空即可
	ListNode *newnode = (ListNode*)malloc(sizeof(ListNode));//为每一个结点申请空间
	ListNode *cur = l1->head;//定义一个头指针，用于找尾结点
	newnode->val = value;
	newnode->next = NULL;
	if (l1->head == NULL)
	{//第一次的时候，链表为空，直接将新结点链到头的后面
		l1->head = newnode;
	}
	else
	{
		while (cur->next != NULL)//找到尾结点
		{
			cur = cur->next;
		}
		cur->next = newnode;//链上新结点
	}
}
void PrintList(List *l1)
{//打印链表中的元素的值
	ListNode*cur = l1->head;
	while (cur!= NULL)
	{
		printf("%d\n", cur->val);
		cur = cur->next;
	}
}
int GetListLength(List*l1)
{//获取链表的长度
	ListNode*cur = l1->head;
	int count = 0;//计数器
	while (cur!= NULL)
	{
		cur = cur->next;//循环走下去的必要条件
		count++;
	}
	printf("%d\n", count);
	return count;
}
void getKthFromEnd(List*l1, int k) 
{
	ListNode*cur = l1->head;
	int length = GetListLength(l1)+1;
	int temp = 1;//用来计数当前是第几个结点 注意结点从1 开始
	while (cur != NULL)
	{
		if (temp == (length-k))//倒数第四个也就是正数第二个因此使用长度5+1 -4 =2
		{
			printf("倒数第%d个结点是%d\n",k, cur->val);
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
	InitList(&l);//初始化
	ListPushBack(&l, 1);//尾插结点
	ListPushBack(&l, 2);
	ListPushBack(&l, 3);
	ListPushBack(&l, 4);
	ListPushBack(&l, 5);
	PrintList(&l);//打印链表
	getKthFromEnd(&l, k);//获取倒数第k个结点
	return 0;
}