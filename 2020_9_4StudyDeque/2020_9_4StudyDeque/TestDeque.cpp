#include<iostream>
#include<deque>
#include<string>
#include<list>
using namespace std;
//deque 是双端队列  队列是一头出一头进，可以得知  deque是两端都可以进行插入和删除的一种容器  因此
//在头插和尾插还有头删尾删都是效率比较高的  是两边都可以动态增长的  但是 其  空间是不连续的 
//是分块的  不像  vector 那样是连续的一段空间  因此  deque底层的实现是比较复杂的 
//为了形成表面上的空间连续   底层交给迭代器来处理



//deque 其实在STL中是不被常用的  因为使用  双端队列的情景下  使用vector 即可  
//但是  STL中还有  stack  和 queue  是经常使用的  而  deque 是作为他们两个的底层结构
void Test1()//测试deque的构造方法
{

	deque<int> dq;//构造空的deque对象
	deque<int> dq2(5, 10);//用n个value来构造deque对象 当不给值时采用类型的默认值来构造
	deque<int>dq4(dq2.begin(), dq2.end());//采用一段范围内的元素来构造一个deque对象 通常是迭代器范围
	deque<int> dq3(dq2);//拷贝构造函数
	for (auto e : dq2)
	{
		cout << e << endl;
	}
	cout << endl;
	for (auto e : dq4)
	{
		cout << e << endl;
	}
}
void Test2()//deque的迭代器进行访问的方法
{

	deque<int> deq;
	deq.push_back(1);
	deq.push_back(3);
	deq.push_back(2);
	deq.push_back(6);
	deq.push_back(3);
	deq.push_back(4);
	deque<int>::iterator ite = deq.begin();
	cout << "普通正向迭代器操作元素: ";
	while (ite != deq.end())//普通正向迭代器操作元素
	{
		*ite += 2;
		cout << *ite << " ";
		++ite;
	}
	cout << endl;
	deque<int>::reverse_iterator rite = deq.rbegin();//普通反向迭代器操作元素
	cout << "普通反向迭代器操作元素: ";
	while (rite != deq.rend())
	{
		*rite += 3;
		cout << *rite << " ";
		++rite;
	}
	cout << endl;
	deque<int>::const_iterator cite = deq.cbegin();//const正向迭代器
	cout << "const正向迭代器操作元素: ";
	while (cite != deq.cend())
	{
		//*cite+=1;不允许修改
		cout << *cite << " ";
		++cite;
	}
	cout << endl;
	deque<int>::const_reverse_iterator crite = deq.crbegin();//const反向迭代器
	cout << "const反向迭代器操作元素: ";
	while (crite != deq.crend())
	{
		cout << *crite << " ";
		++crite;
	}
	cout << endl;
}
void Test3()//deque的容量操作
{
	deque<int> deq1;
	deque<string> deq2;
	deq1.push_back(1);
	deq2.push_front("he");
	cout << deq1.size() << endl;
	//cout << deq2.size() << deq2.empty() << endl;
}
void Print(deque<int>&deq)
{
	for (auto e : deq)
	{
		cout << e << endl;
	}
	cout << endl;
}
void Test4()//deque的元素访问操作
{
	//deque是支持随机访问元素的
	deque<int> deq(5, 10);
	cout << deq[3] << endl;
	cout << deq.empty() << endl;//为空返回 0  其余的返回 false
	deq.resize(10);
	Print(deq);
	deq.resize(5, 3);//多出来的空间才会用 后面的值来进行填充   否则用默认值来填充
	Print(deq);
}

void Test5()//deque  的相关访问操作
{
	deque<int> deq(5, 10);
	deque<int> deq2(3, 2);
	deq.assign(6, 2);//也可以将dequ对象修改成n个  val   和构造时是异曲同工之妙
	deq.assign(deq2.begin(), deq2.end());//使用迭代器位置进行修改deque对象的元素内容
	Print(deq);
	Print(deq2);
	deque<int> deq;
	deq.push_front(1);
	deq.push_front(2);
	deque<int>::iterator ite = deq.begin();
	deq.insert(ite+2, 3);
	deq.push_front(3);
	deq.push_front(4);
	deq.pop_front();
	deq.push_back(5);
	deq.push_back(6);
	deq.pop_back();
	cout << deq.back() << " " << deq.front() << endl;
	Print(deq);
	deq.erase(deq.begin());//删除迭代器位置的元素
	deq.erase(deq.begin(), deq.begin() + 1);//删除迭代器位置区间的元素
	deque<int> deq3(5, 10);
	deque<int> deq4(3, 4);
	deque<int> deq5(deq3.begin(), deq4.end());
	Print(deq5);
}
void Test6()
{
	list<int> l;
	l.push_back(1);
	list<int>::iterator ite = l.begin();
	//l.insert(ite + 1,3);
}
void Test7()
{
}
int main()
{
	//Test1();
	//Test2();
	//Test3();
	//Test4();
	Test2();
	return 0;
}