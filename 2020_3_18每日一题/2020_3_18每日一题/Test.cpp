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
		//���շ�������ת��Ϊ��Сд
		//����:asd_sf_gh
		//ת��ʱ��Ϊ��asdSfGh
	}
	return 0;
}