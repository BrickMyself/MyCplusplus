//#include<iostream>
//#include<deque>
//#include<queue>
//#include<stack>
//using namespace std;
//
//void testconstsatck(const stack<int>&s)
//{
//	//s.top() = 5; const ���õĶ��������޸�
//}
//void Test1()//Test stack
//{
//	stack<int> s;//ջ�Ĺ��캯��ֻ������пյ�ջ��������߿�������
//	stack<int> s1;
//	//s1.push(1);
//	//cout << s1.top() << endl;
//	//s1.push(2);
//	//cout << s1.top() << endl;
//	//s1.pop();
//	//cout << s1.top() << endl;
//	//s1.top() = 4;
//	//cout << s1.top() << endl;
//	//const stack<int> s2(s1);
//	//cout << s2.top() << endl;
//	//testconstsatck(s1);
//	//s2.top() = 5;
//	//s2.push(1);
//	//const stack<int> s3(s2);
//	//s3.top() = 5;
//	//s2.push(1);
//	//s2.top() = 3;
//	//int len = s2.size();
//	//int i = 0;
//	//for (i = 0; i <len; i++)
//	//{
//	//	cout << s2.top() << endl;
//	//	s2.pop();
//	//}
//	//int i = 0;
//	//int len = s2.size();//����ջ��Ԫ�ظ���
//	//for (i = 0; i < len; i++)
//	//{
//	//	cout << s2.top() << endl;//topȡջ����Ԫ��
//	//	s2.pop();//ɾ��ջ����Ԫ��
//	//}
//	//if (s2.empty())//empty ����stack�Ƿ�Ϊ�� Ϊ�շ�����  ���򷵻� false
//	//{
//	//	cout << "empty" << endl;
//	//}
//	//else
//	//{
//	//	cout <<"not empty and size="<< s2.size()<<endl;
//	//}
//	////s2.pop();//���ջ����Ԫ���Ѿ�Ϊ�յ�ʱ���������
//	//stack<int> st1;
//	//st1.push(1);
//	//st1.push(2);
//	stack<int> st2;
//	st2.push(5);
//	st2.push(6);
//	st2.push(7);
//	while (st2.size() > 0)
//	{
//		cout << st2.top();
//		st2.pop();
//	}
//	int j;
//	int len1 = st2.size();
//	//for (j = 0; j < len1; j++)
//	//{
//	//	cout << st2.top() << endl;
//	//	st2.pop();
//	//}
//	//st2.emplace(9);
//	//st1.swap(st2);//��������ջ������  ���������ǽ�����ַ
//	//int len1 = st1.size();
//	//int j;
//}
//void Test2()//Test queue ������һ���Ƚ��ȳ������ݽṹ  �ײ�ʵ������˫�˶���  ��һͷ���в������ݵĲ��� 
////��һͷ�������ݵ�ɾ��
//{
//	//����Ļ�����ʽ��stackһ��
//	queue < int> q;//����յ�queue����  Ҳ֧�ֿ��������磺
//	q.push(1);//�ڶ�λ����Ԫ��
//	deque<int> de;
//	de.push_back(1);
//	de.push_back(2);
//	queue<int> q2(de);
//	queue<int> q3(q2);
//	//queue��stack���ڲ�֧�ֵ������Ĳ������޷�����auto ���������͵�����ʶ��  ֻ�ܽ���һ��һ����ɾ�����ݷ���
//	//��ͷ����ջ��������
//	int len = q2.size();//��ȡ������Ԫ�صĸ���
//	int i;
//	if (q2.empty())//���Ϊ���򷵻� �� ���򷵻�false
//	{
//		cout << "empty and size=" <<q2.size()<< endl;
//	}
//	else
//	{
//		cout << "not empty and size=" << q2.size() << endl;
//	}
//	for (i = 0; i < len; i++)
//	{
//		cout << q2.front() << endl;
//		q2.pop();//����ͷ��Ԫ�س���  Ҳ����ɾ��Ԫ��
//	}
//	if (q2.empty())
//	{
//		cout << "empty and size=" << q2.size()<<endl;
//	}
//	cout << "���е�ͷ��" << q3.front() << "���е�β��" << q3.back() << endl;
//	//swap��������queuue�����Ԫ������  ʵ�ʶ��ǽ�����ַ
//	//��C++11�л��ᵽ���������β��Ԫ�صķ���
//	q3.emplace(3);//Ч����push��һ����
//}
////void Test3()//Test constant ����   mutable �ɱ�� iterator
////{
////	const int *ptr;
////	//*ptr = 4;//��ʾ��ֵʱ���ɸĵ�    ֻ�������޸�
////	int *ptr1;
////	*ptr1 = 5;//�ɶ��ɸ�
////}
//void Test3()
//{
//	queue < int> q;
//	q.push(1);
//	q.push(2);
//	q.push(3);
//	q.push(4);
//	while (q.size() > 0)
//	{
//		cout << q.front() << endl;
//		q.pop();
//	}
//}
//int main()
//{
//	//Test1();
//	//Test2();
//	Test3();
//	return 0;
//}