#include<iostream>
#include<string>
using namespace std;
void firstUniqChar(string s) {
	int count = 0;
	if (s.empty())
	{
		cout << -1;
	}
	if (s.size() == 0)
	{
		cout << s[0];
	}
	for (int i = 0; i < s.size(); i++)
	{
		if ((s.find(s[i])) == s.rfind(s[i]))
		{
			cout << s[i];
			count = 1;
			break;
		}
	}
	if (count = 0)
	{
		cout << -1;
	}

}
int main()
{
	string str;
	while (getline(cin, str))
	{
		firstUniqChar(str);
	}
	return 0;
}