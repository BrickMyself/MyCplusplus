��Ŀ����
�����ַ������һ�����ʵĳ��ȣ������Կո������
�������� :
һ���ַ������ǿգ�����С��5000��

������� :
����N�����һ�����ʵĳ��ȡ�

ʾ��1
����
����
hello world
���
����
5
#include<iostream>
#include<string>
using namespace std;
void GetLastWordLength(string s)
{
	size_t pos=s.rfind(" ");
	cout << s.size()-pos-1<<endl;
}
int main()
{
	string str;
	while (getline(cin, str))
	{
		GetLastWordLength(str);
	}
	return 0;
}