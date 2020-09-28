//#include<iostream>
//#include<stdlib.h>
//#include<stack>
//#include<time.h>
//using namespace std;
//typedef struct ListNode
//{
//	int value;
//	ListNode* next;
//}ListNode;
//typedef struct List
//{
//	ListNode* head=nullptr;
//}List;
//void AddNode(List *l, int Value)
//{
//	ListNode* newnode = new ListNode();
//	newnode->value = Value;
//	newnode->next = nullptr;
//	if (l->head == nullptr)
//	{
//		cout << "head null" << endl;
//		l->head = newnode;//第一次插入节点的时候 没有节点 将第一个节点置为头结点 
//	}
//	else
//	{
//		ListNode *ptr = l->head;
//		while (ptr->next != nullptr)//找到尾结点  
//		{
//			ptr = ptr->next;
//		}
//		ptr->next = newnode;//将新节点链上尾结点的后面 
//	}
//}
//void PrintList(List *l)
//{
//	if (l->head == nullptr)
//	{
//		cout << "null" << endl;
//		return;
//	}
//	else
//	{
//		ListNode* ptr = l->head;
//		while (ptr->next != nullptr)
//		{
//			cout << ptr->value << endl;
//			ptr = ptr->next;
//		}
//		cout << ptr->value << endl;
//	}
//}
//void ReversePrintList(List *l)//逆向打印链表中的内容 利用栈的特性 后进先出的特点  进行逆序遍历 时间复杂度是 O（n)  
//{
//	stack<int> s;
//	ListNode* ptr = l->head;
//	while (ptr != nullptr)
//	{
//		s.push(ptr->value);//将节点顺序压栈 
//		ptr = ptr->next;
//	}
//	while (!s.empty())
//	{
//		cout<<s.top()<<" ";
//		s.pop();//依次出栈，这就是一个逆序的情况  例如进栈为 1 2 3 4 则出栈顺序为 4 3 2 1 实现了逆序打印链表  从尾到头打印链链表 
//	}
//	cout << endl;
//}
//void ReversePrintList2(ListNode *head)//递归实现单链表的反向打印，递归打印下一个节点的值如果这个节点的next不为空的情况下  当循环到最后一个节点的时候开始返回并打印节点的值 
//{
//	ListNode *ptr = head;
//	if (ptr == nullptr)
//	{
//		return;
//	}
//	else//但是有一个缺点是当这个链表的长度非常的长的时候 复杂度会比较的高，调用的函数会比较深 导致最后的栈溢出   
//	{
//		if (ptr->next != nullptr)
//		{
//
//			ReversePrintList2(ptr->next);
//		}
//		cout<<ptr->value<<" ";
//	}
//}
//int main()
//{
//
//	List l;
//	int i = 0;
//	for (i = 0; i < 3000; i++)
//	{
//		AddNode(&l, i);
//	}
//	clock_t start1, finsh1;
//	clock_t start2, finsh2;
//	double totaltime1, totaltime2;
//	//AddNode(&l,1);
//	//AddNode(&l,2);
//	//AddNode(&l,3);
//	//AddNode(&l,6);
//	//PrintList(&l); 
//	start1 = clock();
//	ReversePrintList(&l);
//	finsh1 = clock();
//	start2 = clock();
//	ReversePrintList2(l.head);
//	finsh2 = clock();
//	totaltime1 = (double)(finsh1 - start1) / CLOCKS_PER_SEC;
//	totaltime2 = (double)(finsh2 - start2) / CLOCKS_PER_SEC;
//	cout << " 1:" << totaltime1 << " 2:" << totaltime2 << endl;
//	return 0;
//}
//#include<iostream>
//#include<string>
//#include"e.h"
//using namespace std;
//int main()
//{
//	int *a = NULL;
	//const char *p[] = { "lu na","xuan ce","yuan ge","li bai" };
	//printf("%s\n", p[2]);
	//printf("%s\n", *p);
	//printf("%s\n", (*p + 1));
	//printf("%s\n", *p + 1);
	//char *w;
	//const char *q_string = "123456789";
 //   cout << sizeof(q_string);
	//unsigned data = 4 + 5 << 2 + 1;
	//cout << data << endl;
	//unsigned data1 = 0x83; data1 &= ~0x0f; data1 |= 0x14;
	//cout << data1 << endl;
	//int s = 1;
	//char *p = (char*)(&s);
	//cout << p[0];
	//int *p_var;
	//char *p1 = (char*)p_var;

//	return 0;
//}