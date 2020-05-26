#include<iostream>
#include<vector>
#include<string>
using namespace std;
class A
{
public:

private:
	int id;
	string name;
};
void Test1()
{
	vector<A> v5;
	vector<int> v1;
	vector<string> v2;
	vector<double> v3;
	vector<char> v4;
}
void Test2()
{
	vector<int> v1;
	v1.push_back(10);
	vector<int> v2(v1);
	cout << v2[0] << endl;
}
void Test3()
{
	vector<int> v1(10, 1);
	for (auto e : v1)
	{
		cout << e << " ";
	}
	cout << endl;
	vector<string> v2(10, "hi");
	for (auto e : v2)
	{
		cout << e << " ";
	}
	cout << endl;
	vector<double> v3(10, 2.34);
	for (auto e : v3)
	{
		cout << e << " ";
	}
	cout << endl;
	vector<char> v4(10, 'c');
	for (auto e : v4)
	{
		cout << e << " ";
	}
	cout << endl;

}
void Test4()
{
	vector<int> v(5);
	vector<string> v1(5);
	vector<char> v2(5);
	cout << "int: ";
	for (auto e : v)
	{
		cout << e << " ";
	}
	cout << endl;
	cout << "string: ";
	for (auto e : v1)
	{
		cout << e << " ";
	}
	cout << endl;
	cout << "char: ";
	for (auto e : v2)
	{
		cout << e << " ";
	}
}
void Test5()
{
	vector<int> v1(10, 5);
	vector<int> v2(v1.begin(), v1.end());
	for (auto e : v2)
	{
		cout << e << " ";
	}
}
void Test6()
{
	vector<int> v;
	v.push_back(1);
	v.push_back(3);
	v.push_back(2);
	for (auto e : v)
	{
		cout << e << " ";
	}
	cout << endl;
	v.pop_back();
	for (auto e : v)
	{
		cout << e << " ";
	}
}
void Test7()
{
	vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	vector<int> ::iterator ite = v.begin()+1;
	//也就是删除第二个位置的数据
	v.erase(ite);
	for (auto e : v)
	{
		cout << e << " ";
	}
	cout << endl;
	v.insert(v.begin(),5);
	//相当于头插一个数据
	for (auto e : v)
	{
		cout << e << " ";
	}
	cout << endl;
	v.insert(v.begin() + 2, 8);
	//在第指定一个位置插入一个数据
	for (auto e : v)
	{
		cout << e << " ";
	}
}
void Test8()
{
	vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	v.push_back(5);
	v.push_back(6);
	v.push_back(7);
	v.push_back(8);
	vector<int>::iterator ite;//迭代器的定义 包括迭代器的类型 定义的变量
	ite = v.begin();
	while (ite != v.end())//不等于就保持其不会越界
	{
		cout << *ite << " ";//解引用来访问该位置的值
		++ite;
	}
}
void Test9()
{
	vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	vector<int>::reverse_iterator rite;//反向迭代器的定义 包括迭代器的类型 定义的变量
	rite = v.rbegin();
	while (rite != v.rend())//不等于就保持其不会越界
	{
		cout << *rite << " ";//解引用来访问该位置的值
		++rite;
	}
}
void Test10()
{
	vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	vector<int>::iterator ite = v.begin();
	while (ite != v.end())
	{
		*ite += 1;
		cout << *ite << " ";
		++ite;
	}
	cout << endl;
	vector<int>::const_iterator cite = v.cbegin();
	while (cite != v.cend())
	{
		//*cite += 1;
		cout << *cite << " ";
		++cite;
	}
}
void Test11()
{
	vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	for (auto e : v)
	{
		cout << e << " ";
	}
	cout << endl;
	auto ite = v.begin();
	while (ite != v.end())
	{
		cout << *ite << " ";
		++ite;
	}
}
int main()
{
	//Test1();
	//Test2();
	//est3();
	//Test6();
	//Test7();
	//Test9();
	//Test10();
	Test11();
	return 0;
}