//从一个字符串中提取数字
//#include<iostream>
//#include<string>
//#include<vector>
//using namespace std;
//void CountNumber(string &s1)
//{
//	vector<int> v;
//	int i = 0;
//	string::iterator it = s1.begin();
//	while (it != s1.end())
//	{
//		if ((*it) >= '0' && (*it) <= '9')
//		{
//			v.push_back((*it-48));
//			++it;
//		}
//		else
//		{
//			++it;
//		}
//			
//	}
//	vector<int>::iterator ite = v.begin();
//	while (ite != v.end())
//	{
//		cout << *ite;
//		++ite;
//	}
//}
//int main()
//{
//	string s1;
//	while (getline(cin, s1))
//	{
//		CountNumber(s1);
//	}
//	return 0;
//}
#include <iostream>
#include <string>
using namespace std;
int main()
{
	string str;
	while (getline(cin, str))
	{
		for (auto e : str)
		{
			if (e >= '0' && e <= '9')
				cout << e;
		}
		cout << endl;
	}
	return 0;
}

