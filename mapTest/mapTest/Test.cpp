#include<iostream>
#include<map>
#include<string>
#include<utility>
using namespace std;
void Test1()
{
	map<string,string>m;
	m.insert(pair<string,string>("helloworld!","�������!"));
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
	cout << "��ͨ�������������" << endl;
	map<int, string>::iterator mite = m1.begin();
	while (mite != m1.end())
	{
		cout << mite->first << " " << mite->second << endl;
		++mite;
	}
	cout << "��ͨ�������������" << endl;
	map<int, string>::reverse_iterator rmite = m1.rbegin();
	while (rmite != m1.rend())
	{
		rmite->second = "���";
		cout << rmite->first << " " << rmite->second << endl;
		++rmite;
	}
	cout << "const����������" << endl;
	map<int, string>::const_iterator cite = m1.begin();
	while (cite != m1.end())
	{
		cout << cite->first << " " << cite->second << endl;
		++cite;
	}
	cout << "const�������������" << endl;
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
	m.insert(pair<char, string>('a', "С��"));
	m.insert(pair<char, string>('c', "С��"));
	m.insert(pair<char, string>('b', "С��"));
	m.insert(pair<char, string>('d', "С��"));
	for (auto e : m)
	{
		cout << e.first << " " << e.second << endl;
	}
	map<string, string>m1;
	m1.insert(pair<string, string>("he", "С��"));
	m1.insert(pair<string, string>("ha", "С��"));
	m1.insert(pair<string, string>("howareyou", "С��"));
	m1.insert(pair<string, string>("iamfine", "С��"));
	for (auto e : m1)
	{
		cout << e.first << " " << e.second << endl;
	}
}
void Test4(map<int,string> &m)
{
	cout << "��Χ for����" << endl;
	for (auto e : m)
	{
		cout << e.first << " " << e.second << endl;
	}
}
void Test5(map<int, string> &m)
{
	cout << "auto�ؼ��ֵ�ʹ��" << endl;
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
	m1.swap(m2);//ע�⽻��������map��������ͱ�������ͬ��
	for (auto e : m1)
	{
		cout << e.first << " " << e.second << endl;
	}
}
int main()
{
	//Test1();
	map<int, string>m;
	m.insert(pair<int, string>(1001, "С��"));
	m.insert(pair<int, string>(1003, "С��"));
	m.insert(pair<int, string>(1002, "С��"));
	m.insert(pair<int, string>(1000, "С��"));
	//Test2(m);
	//Test4(m);
	//Test5(m);
	//Test8();
	Test10();
	return 0;
}