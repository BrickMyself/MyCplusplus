#include<iostream>
#include<map>
#include<string>
#include<utility>
using namespace std;
void Test1()
{
	map<string,string>m;
	m.insert(pair<string,string>("helloworld!","你好世界!"));
	map<string, string> m1(m);
	map<string, string> m2(m.begin(), m.end());
	for (auto e : m)
	{
		cout << e.first << " " << e.second << endl;
	}
	for (auto e : m1)
	{
		cout << e.first << " " << e.second << endl;
	}	for (auto e : m2)
	{
		cout << e.first << " " << e.second << endl;
	}
}
void Test2(map<int, string> &m1)
{
	cout << "普通正向迭代器遍历" << endl;
	map<int, string>::iterator mite = m1.begin();
	while (mite != m1.end())
	{
		cout << mite->first << " " << mite->second << endl;
		++mite;
	}
	cout << "普通反向迭代器遍历" << endl;
	map<int, string>::reverse_iterator rmite = m1.rbegin();
	while (rmite != m1.rend())
	{
		rmite->second = "李飞";
		cout << rmite->first << " " << rmite->second << endl;
		++rmite;
	}
	cout << "const迭代器遍历" << endl;
	map<int, string>::const_iterator cite = m1.begin();
	while (cite != m1.end())
	{
		cout << cite->first << " " << cite->second << endl;
		++cite;
	}
	cout << "const反向迭代器遍历" << endl;
	map<int, string>::const_reverse_iterator crite = m1.rbegin();
	while (crite != m1.rend())
	{
		cout << crite->first << " " << crite->second << endl;
		++crite;
	}
}
void Test3()
{
	map<char, string>m;
	m.insert(pair<char, string>('a', "小明"));
	m.insert(pair<char, string>('c', "小红"));
	m.insert(pair<char, string>('b', "小花"));
	m.insert(pair<char, string>('d', "小花"));
	for (auto e : m)
	{
		cout << e.first << " " << e.second << endl;
	}
	map<string, string>m1;
	m1.insert(pair<string, string>("he", "小明"));
	m1.insert(pair<string, string>("ha", "小红"));
	m1.insert(pair<string, string>("howareyou", "小花"));
	m1.insert(pair<string, string>("iamfine", "小花"));
	for (auto e : m1)
	{
		cout << e.first << " " << e.second << endl;
	}
}
void Test4(map<int,string> &m)
{
	cout << "范围 for遍历" << endl;
	for (auto e : m)
	{
		cout << e.first << " " << e.second << endl;
	}
}
void Test5(map<int, string> &m)
{
	cout << "auto关键字的使用" << endl;
	auto mite = m.begin();
	while (mite != m.end())
	{
		cout <<mite->first << " " << mite->second << endl;
		++mite;
	}
}
void Test6()
{
	map<int, string> m;
	pair<int, string> p1(2, "two");
	m.insert(pair<int, string>(1, "one"));
	m.insert(pair<int, string>(1, "first"));
	m.insert(p1);
	for (auto e : m)
	{
		cout << e.first <<" "<<e.second << endl;
	}
}
void Test7()
{
	map<int, string>m;
	m.insert(pair<int, string>(1, "one"));
	m.insert(pair<int, string>(2, "two")); 
	m.insert(pair<int, string>(3, "three"));
	auto a = m.begin();
	m.erase(a);
	m.erase(3);
	for (auto e : m)
	{
		cout << e.first << " " << e.second << endl;
	}
}
void Test8()
{
	map<int, string>m;
	m[1] = "hello";
	m[2] = "world";
	m[3] = "!";
	m[1] = "hi";
	for (auto e : m)
	{
		cout << e.first << " " << e.second << endl;
	}
}
void Test10()
{
	map<int, string> m1;
	m1[1] = "helloworld";
	map<int, string> m2;
	m2[2] = "hiworld";
	m1.swap(m2);//注意交换的两个map对象的类型必须是相同的
	for (auto e : m1)
	{
		cout << e.first << " " << e.second << endl;
	}
}
int main()
{
	//Test1();
	map<int, string>m;
	m.insert(pair<int, string>(1001, "小明"));
	m.insert(pair<int, string>(1003, "小红"));
	m.insert(pair<int, string>(1002, "小花"));
	m.insert(pair<int, string>(1000, "小花"));
	//Test2(m);
	//Test4(m);
	//Test5(m);
	//Test8();
	Test10();
	return 0;
}