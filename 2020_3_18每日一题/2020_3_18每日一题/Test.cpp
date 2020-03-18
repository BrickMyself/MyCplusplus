#include<iostream>
#include<string>
using namespace std;
void ChangeString(string&s1)
{
	string::iterator ite = s1.begin();
	while (ite != s1.end())
	{
		if ((*ite) =='_')
		{
			++ite;
			if ((*ite) >= 'a' && (*ite) <= 'z')
			{
				(*ite) -= 32;
			}
		}
		++ite;
	}
	int i = 0;
	for (i = 0; i < s1.size(); i++)
	{
		if ((s1[i]) != '_')
		{
			cout << s1[i];
		}
	}
	cout << endl;
}

int main()
{
	string s1;
	while (getline(cin, s1))
	{
		ChangeString(s1);
		//将驼峰命名法转换为大小写
		//例如:asd_sf_gh
		//转换时候为：asdSfGh
	}
	return 0;
}