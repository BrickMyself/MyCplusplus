#include<iostream>
#include<string>
#include<vector>
using namespace std;
//��Ŀ���� ����һ������  ��������Ҫ�ﵽ��������ǿ�ȣ�
//1.���� ��=8
//2.�д�д��ĸ
//3.��Сд��ĸ
//4.������
//5.�������ַ�
// �ﵽ����OK�����򷵻� error
//����������
//12_Aaqq12
//Password123
//PASSWORD_123
//PaSS^word
//12_Aaqq
//�����
//OK
//error
//error
//error
//error
void CheckStringIsRight(string &s1)
{
	int j = 0;
	int temp1 = 0;
	int temp2 = 0;
	int temp3 = 0;
	int temp4 = 0;
	int temp5 = 0;
	if (s1.size() < 8)
	{
		temp1=0;
	}
	else if(s1.size()>=8)
	{
		temp1 = 1;
	}
	for (j = 0; j < s1.size(); j++)
	{
		if (s1[j] >= 'A' && s1[j] <= 'Z')
		{
			temp2 = 1;
		}
		else if (s1[j] >= 'a'&& s1[j] <= 'z')
		{
			temp3 = 1;
		}
		else if (s1[j] >= '0'&& s1[j] <= '9')
		{
			temp4 = 1;
		}
		else
		{
			temp5 = 1;
		}
	}
	if (temp1*temp2*temp3*temp4*temp5 <= 0)
	{
		//cout << temp1 << temp2 << temp3 << temp4 << temp5;
		cout << "error" << endl;
	}
	else if(temp1*temp2*temp3*temp4*temp5 > 0)
	{
		//cout << temp1 << temp2 << temp3 << temp4 << temp5;
		cout << "OK" << endl;
	}
}
int main()
{
	int i = 0;
	vector<string> v;
	string s;
	while (getline(cin, s)&&s!="")
	{
		v.push_back(s);
	}
	cout << endl;
	for (i=0;i<v.size();i++)
	{
		CheckStringIsRight(v[i]);
	}
	return 0;
}
