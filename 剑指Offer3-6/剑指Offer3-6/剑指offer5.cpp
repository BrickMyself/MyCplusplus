#include<iostream>
#include<string>
using namespace std;
class Solution {
public:
	string replaceSpace(string& s) {
		string s1;
		string s2("%20");
		for (int i = 0; i < s.size(); i++)
		{
			if (s[i] == ' ')
			{
				s1 += s2;
			}
			if (s[i] != ' ')
			{
				s1.push_back(s[i]);
			}
		}
		return s1;
	}
};
class Solution1 {
public:
	string replaceSpace(string& s) {
		int k = s.size()-1;//原来字符串末尾的位置
		cout << s[k] << endl;
		if (s.empty())
		{
			return s;
		}
		int i = 0;
		int count=0;
		for (auto e : s)
		{
			if (e == ' ')
			{
				count++;
			}
		}
		for (i = 0; i < count; i++)
		{
			s.push_back('  ');
		}
		s.push_back('\0');
		int j = s.size()-1;//新的长度之后的末尾
		while (k >= 0 &&j>k)
		{
			if (s[k] == ' ')
			{
				s[j--] = '0';
				s[j--] = '2';
				s[j--] = '%';
				k--;
			}
			else
			{
				s[j--] = s[k];
			}
			--k;
		}
		return s;
	}
};
int main()
{
	Solution1 a;
	string s;
	while (getline(cin, s))
	{
		cout<<a.replaceSpace(s);
	}
	return 0;
}