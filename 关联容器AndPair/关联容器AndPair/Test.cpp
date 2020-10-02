#include<iostream>
#include<vector>
#include<string>
#include<utility>
#include<stdlib.h>
using namespace std;
int main()
{
	pair<int,int> S;
	S = make_pair(10.3, 'a');
	cout << S.first << " "<<S.second << endl;
	return 0;
}
//int main()
//{
//	pair<int, string>p1(1, "hello");
//	pair<int, string>p2(12,"world");
//	p1.swap(p2);
//	cout << p1.first << " " << p1.second << endl;
//	cout << p2.first << " " << p2.second << endl;
//	return 0;
//}
//
//int main()
//{
//	pair<T1,T2> p1;创建一个空的pair对象 它的两个元素分别是T1和T2类型
//	采用 值初始化  int 初始值是0 string 初始值是"" 一个空字符串
//	pair<int,int> p1(1,0);
//	p.first 返回 p中 名为first 的公有数据成员
//	p.second 返回p中名为second 的公有数据成员
//	cout << p1.first << " " <<p1.second<< endl;
//	pair<T1,T2> p1(v1,v2);
//	创建一个pair对象 ，它的两个元素的类型分别是T1 和 T2 类型
//	其中p1 对象中的first 成员初始化为 v1 second 成员初始化为v2
//	pair<int,int>p2(1, 0);
//	cout << p2.first << " " << p2.second << endl;
//	  p1 < p2 两个 pair 对象之间的小于运算 比较的次序是
//	 如果 p1.first<p2.first 或者
//	(p1.first<p2.first)&&(p1.second<p2.second) 时 p1<p2 才返回true

//	如果两个pair对象的first和second 成员依次相等 则这两个对象相等
//	该运算使用其元素 == 操作符
//	if (p1 == p2)
//	{
//		cout << "true" << endl;
//	}
//	typedef pair<string, string> S;
//	S s1("hello", "world");//使用typedef 简化声明让代码更加简化
//	cout << s1.first << ""<<s1.second << endl;
//	创建新的pair对象
//	标准库定义的make_pair 函数

//	return 0;
//}