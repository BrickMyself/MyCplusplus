#include<stdlib.h>
#include<iostream>
#include<string>
#include<assert.h>
using namespace std;
//void Swap(T&x1, T&x2)
//{
//	T temp;
//	temp = x1;
//	x1 = x2;
//	x2 = temp;
//}
//void test_template1()
//{
//	int x = 10; int y = 12;
//	double x1 = 1.2; double y1 = 2.4;
//	string s("hello"); string q("world");
//	Swap(x, y);
//	Swap(x1, y1);
//	Swap(s, q);
//	cout << x << " " << y << endl;
//	cout << x1 << " " << y1 << endl;
//	cout << s << " " << q << endl;
//}
//T Add(T&x1, T&x2)
//{
//	return x1 + x2;
//}
//void test_template2()
//{
//	int a = 10; int b = 20;
//	double a1 = 10.2; double b1 = 21.2;
//	cout << Add(a1, b1) << endl;
//	cout << Add(a, b) << endl;
//	//cout << Add(a, b1) << endl; 报错没有与参数列表匹配的函数模板
//}
//int Add(int x1, int x2)
//{
//	return 3;
//}
//template<class T>
//T Add(T x1, T x2)
//{
//	return 4;
//}
//void test_template3()
//{
//	int a = 1; int b = 2;
//	cout<< Add(a,b) << endl;
//	cout<<Add<int>(a,b) <<endl; 
//}
//template<class T1,class T2>
//T2 Add(T1 x1, T2 x2)
//{
//	return 3;
//}
//int Add(int x1, int x2)
//{
//	return 2;
//}
//void test_template4()
//{
//	cout << Add(1, 2) << endl;
//	cout << Add(3, 4.0) << endl;
//}
//template<class T>
//class Arry
//{
//public:
//	Arry(int capacity=10000)
//	: _data(new T[capacity])
//	, _size(0)
//	, _capacity(capacity)
//	{}
//	void PushBack(const T& data) 
//	{          
//		_data[_size++] = data;    
//	}        
//	T& operator[](size_t pos)    
//	{       
//		assert(pos < _size);       
//	    return _data[pos];   
//	}
//private:
//	T*  _data;
//    int _size;
//	int _capacity;
//};
//class String
//{
//
//};
//string s("hello");
//template<class T, string>//此处报错非类型模板不能为类类型
//template<class A,double i=10.0>//报错浮点模板参数是非标准的
//void test_template7()
//{
//	Arry<int> a;
//	Arry<string> s;
//	a.PushBack(1);
//	a.PushBack(2);
//	s.PushBack("hello");
//	s.PushBack("world");
//	cout << a[0] << endl;
//	cout << a[1] << endl;
//	cout << s[0] << endl;
//	cout << s[1] << endl;
//}
template<class T>
bool IsEqual(T& left, T& right) 
{ 
	return left == right; 
}

void Test() {
	string p1("b");
	string p2("a");
	if (IsEqual(p1, p2))       
	cout << p1 << endl;    
	else        
	cout << p2 << endl;
}
int main()
{
	Test();
	return 0;
}