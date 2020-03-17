//#include<iostream>
//#include<map>
//#include<utility>
//using namespace std;
//void Function(int m, int n)
//{
//	map<int,int> mymap;
//	int i = 1;
//	while (i <= n&&(i<=m/2))
//	{
//		if ((m - i) <= n&&(i!=m-i))
//		{
//			mymap.insert(pair<int, int>(i, m - i));
//			i++;
//		}
//		else
//			i++;
//	}
//	map<int, int>::iterator ite = mymap.begin();
//	while (ite != mymap.end())
//	{
//		cout << ite->first << " " << ite->second<<endl;
//		++ite;
//	}
//	if (m == n)
//	{
//		cout << m<<" "<<endl;;
//	}
//}
//int main()
//{
//	int n;
//	int m;
//	while (cin >> n && cin >> m)
//	{
//		Function(m, n);
//
//	}
//	return 0;
//}
#include<iostream>
#include<string>
using namespace std;
void ChangeNumber(string &s1)
{
	string s2;
	string::iterator ite = s1.begin();
	while (ite != s1.end())
	{
		if ((*ite >= 'a') && (*ite <= 'z'))
		{
			*ite -= 32;
			++ite;
		}
		else
		++ite;
	}	
	string::iterator ite2 = s1.begin();
	while (ite2 != s1.end())
	{
		cout << *ite2 << endl;
		++ite2;
	}
	string::iterator ite1 = s1.begin();
	while (ite1 != s1.end())
	{
		if ((*ite1 >= 'A') && (*ite1 <= 'C'))
		{
			s2.push_back('1');
			++ite1;
			cout << "s2.push_back(1);" <<endl;
		}
		if ((*ite1 >= 'D') && (*ite1 <= 'F'))
		{
			s2.push_back('2');
			++ite1;
			cout << "s2.push_back(2);" << endl;
		}
		if ((*ite1 >= 'G') && (*ite1 <= 'I'))
		{
			s2.push_back('3');
			++ite1;
			cout << "s2.push_back(3);" << endl;
		}
		if ((*ite1 >= 'J') && (*ite1 <= 'L'))
		{
			s2.push_back('4');
			++ite1;
			cout << "s2.push_back(4);" << endl;
		}
		if ((*ite1 >= 'G') && (*ite1 <= 'I'))
		{
			s2.push_back('5');
			++ite1;
			cout << "s2.push_back(5);" << endl;
		}
		if ((*ite1 >= 'M') && (*ite1 <= 'O'))
		{
			s2.push_back('6');
			++ite1;
			cout << "s2.push_back(6);" << endl;

		}
		if ((*ite1 >= 'P') && (*ite1 <= 'S'))
		{
			s2.push_back('7');
			++ite1;
			cout << "s2.push_back(7);" << endl;

		}
		if ((*ite1 >= 'T') && (*ite1 <= 'V'))
		{
			s2.push_back('8');
			++ite1;
			cout << "s2.push_back(8);" << endl;

		}
		if ((*ite1 >= 'W') && (*ite1 <= 'Z'))
		{
			s2.push_back('9');
			++ite1;
			cout << "s2.push_back(9);" << endl;
		}
		else
		++ite1;
	}
	//cout << s2 << endl;
	s2.insert(3, "-");
	string::iterator ite3 = s2.begin();
	while (ite3 != s2.end())
	{
		cout << *ite3 << endl;
		++ite3;
	}
}
int main()
{
	string s1;
	while (cin >> s1)
	{
		ChangeNumber(s1);
	}
	return 0;
}