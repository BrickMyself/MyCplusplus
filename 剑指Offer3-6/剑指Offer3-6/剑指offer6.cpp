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
//		l->head = newnode;//��һ�β���ڵ��ʱ�� û�нڵ� ����һ���ڵ���Ϊͷ��� 
//	}
//	else
//	{
//		ListNode *ptr = l->head;
//		while (ptr->next != nullptr)//�ҵ�β���  
//		{
//			ptr = ptr->next;
//		}
//		ptr->next = newnode;//���½ڵ�����β���ĺ��� 
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
//void ReversePrintList(List *l)//�����ӡ�����е����� ����ջ������ ����ȳ����ص�  ����������� ʱ�临�Ӷ��� O��n)  
//{
//	stack<int> s;
//	ListNode* ptr = l->head;
//	while (ptr != nullptr)
//	{
//		s.push(ptr->value);//���ڵ�˳��ѹջ 
//		ptr = ptr->next;
//	}
//	while (!s.empty())
//	{
//		cout<<s.top()<<" ";
//		s.pop();//���γ�ջ�������һ����������  �����ջΪ 1 2 3 4 ���ջ˳��Ϊ 4 3 2 1 ʵ���������ӡ����  ��β��ͷ��ӡ������ 
//	}
//	cout << endl;
//}
//void ReversePrintList2(ListNode *head)//�ݹ�ʵ�ֵ�����ķ����ӡ���ݹ��ӡ��һ���ڵ��ֵ�������ڵ��next��Ϊ�յ������  ��ѭ�������һ���ڵ��ʱ��ʼ���ز���ӡ�ڵ��ֵ 
//{
//	ListNode *ptr = head;
//	if (ptr == nullptr)
//	{
//		return;
//	}
//	else//������һ��ȱ���ǵ��������ĳ��ȷǳ��ĳ���ʱ�� ���ӶȻ�Ƚϵĸߣ����õĺ�����Ƚ��� ��������ջ���   
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