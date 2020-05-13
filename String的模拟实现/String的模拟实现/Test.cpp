#include<iostream>
#include<string>
using namespace std;
//string 对象数据访问方法
//迭代器 可读可写
//string 管理字符串数组的数据结构
void Test1()
{
	string s1("helloworld");
	string::iterator ite = s1.begin();
	cout << " 正向普通迭代器遍历： ";
	while (ite != s1.end())
	{
		cout << *ite << " ";
		++ite;
	}
	cout << endl;
}
void Test2()
{
	string s1("helloworld");
	string::reverse_iterator rit = s1.rbegin();
	cout << " 反向普通迭代器遍历： ";
	while (rit != s1.rend())
	{
		cout << *rit << " ";
		++rit;
	}
	cout << endl;
}
void Test3()
{
	string s1("helloworld");
	cout << " 下标遍历 :  ";
	for (int i = 0; i < s1.size(); i++)
	{
		cout << s1[i] << " ";
	}
	cout << endl;
}
void Test4(const string& s)//当传入的string 对象只能读的时候这时候
{//只能使用const_iterator 才能对string 对象中的元素进行访问 但是不能修改。
	string::const_iterator ite = s.begin();
	cout << " const正向迭代器遍历： ";
	while (ite != s.end())
	{
		cout << *ite << " ";
		++ite;
	}
	cout << endl;
}
void Test5(const string& s)//
{	string::const_reverse_iterator rite = s.rbegin();
	cout << " const反向迭代器遍历： ";
	while (rite != s.rend())
	{
		cout << *rite << " ";
		++rite;
	}
	cout << endl;
}
void Test6()//auto关键字的使用与遍历 
{
	string s1("helloworld");
	auto ite = s1.begin();//auto可以自动推断其类型
	cout << " auto 关键字的使用 ：";
	while (ite != s1.end())
	{
		cout << *ite << " ";
		++ite;
	}
	cout << endl;
	cout << " auto 范围for遍历： ";//代码简洁  但是只能正向遍历 C++11支持
	for (auto e : s1)//范围遍历
	{
		cout << e << " ";
	}//底层由迭代器实现
	cout << endl;
}
void GetFileSuffix()//获取文件的后缀名
{
	string s1("test.cpp.gz.h.c");
	//int pos = s1.find('.');
	//string s2(s1, pos, s1.size() - pos);
	//cout << s2 << endl;
	//string s3 = s1.substr(pos, s1.size() - pos);
	//cout << s3<<endl;
	string s2;
	int pos = 0;
	int Size = s1.size();
	cout << Size << endl;
	while (Size>=0)
	{
			pos = s1.rfind('.', Size);
			cout << pos << " " << Size << endl;
			cout << s1.substr(pos, Size - pos);
			Size -= (Size - pos);
	}
	//cout << s2;
}
int main()
{
	string s("helloworld");
	//Test1();//正向迭代器遍历演示
	//Test2();//反向迭代器遍历演示
	//Test3();//下标遍历
	//Test4(s);//正向const迭代器遍历
	//Test5(s);//反向const迭代器遍历
	//Test6();
	GetFileSuffix();
	return 0;
}
