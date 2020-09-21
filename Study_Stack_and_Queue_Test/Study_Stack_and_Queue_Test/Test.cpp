//#include<iostream>
//#include<deque>
//#include<queue>
//#include<stack>
//using namespace std;
//
//void testconstsatck(const stack<int>&s)
//{
//	//s.top() = 5; const 引用的对象不允许修改
//}
//void Test1()//Test stack
//{
//	stack<int> s;//栈的构造函数只允许进行空的栈对象构造或者拷贝构造
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
//	//int len = s2.size();//计算栈的元素个数
//	//for (i = 0; i < len; i++)
//	//{
//	//	cout << s2.top() << endl;//top取栈顶的元素
//	//	s2.pop();//删除栈顶的元素
//	//}
//	//if (s2.empty())//empty 测试stack是否为空 为空返回真  否则返回 false
//	//{
//	//	cout << "empty" << endl;
//	//}
//	//else
//	//{
//	//	cout <<"not empty and size="<< s2.size()<<endl;
//	//}
//	////s2.pop();//如果栈顶的元素已经为空的时候程序会崩溃
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
//	//st1.swap(st2);//交换两个栈的内容  ，本质上是交换地址
//	//int len1 = st1.size();
//	//int j;
//}
//void Test2()//Test queue 队列是一种先进先出的数据结构  底层实际上是双端队列  在一头进行插入数据的操作 
////另一头进行数据的删除
//{
//	//构造的基本方式和stack一样
//	queue < int> q;//构造空的queue对象  也支持拷贝构造如：
//	q.push(1);//在对位插入元素
//	deque<int> de;
//	de.push_back(1);
//	de.push_back(2);
//	queue<int> q2(de);
//	queue<int> q3(q2);
//	//queue和stack由于不支持迭代器的操作，无法进行auto 迭代器类型的智能识别  只能进行一步一步的删除数据访问
//	//队头或者栈顶的数据
//	int len = q2.size();//获取队列中元素的个数
//	int i;
//	if (q2.empty())//如果为空则返回 真 否则返回false
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
//		q2.pop();//将对头的元素出队  也就是删除元素
//	}
//	if (q2.empty())
//	{
//		cout << "empty and size=" << q2.size()<<endl;
//	}
//	cout << "队列的头：" << q3.front() << "队列的尾：" << q3.back() << endl;
//	//swap交换两个queuue对象的元素内容  实际都是交换地址
//	//在C++11中还提到了如下这个尾插元素的方法
//	q3.emplace(3);//效果和push是一样的
//}
////void Test3()//Test constant 常数   mutable 可变的 iterator
////{
////	const int *ptr;
////	//*ptr = 4;//显示左值时不可改的    只读不可修改
////	int *ptr1;
////	*ptr1 = 5;//可读可改
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