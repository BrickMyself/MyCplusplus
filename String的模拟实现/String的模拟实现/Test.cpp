#include<iostream>
#include<string>
using namespace std;
//string �������ݷ��ʷ���
//������ �ɶ���д
//string �����ַ�����������ݽṹ
void Test1()
{
	string s1("helloworld");
	string::iterator ite = s1.begin();
	cout << " ������ͨ������������ ";
	while (ite != s1.end())
	{
		cout << *ite << " ";
		++ite;
	}
	cout << endl;
}
void Test2()
{
	string s1("helloworld");
	string::reverse_iterator rit = s1.rbegin();
	cout << " ������ͨ������������ ";
	while (rit != s1.rend())
	{
		cout << *rit << " ";
		++rit;
	}
	cout << endl;
}
void Test3()
{
	string s1("helloworld");
	cout << " �±���� :  ";
	for (int i = 0; i < s1.size(); i++)
	{
		cout << s1[i] << " ";
	}
	cout << endl;
}
void Test4(const string& s)//�������string ����ֻ�ܶ���ʱ����ʱ��
{//ֻ��ʹ��const_iterator ���ܶ�string �����е�Ԫ�ؽ��з��� ���ǲ����޸ġ�
	string::const_iterator ite = s.begin();
	cout << " const��������������� ";
	while (ite != s.end())
	{
		cout << *ite << " ";
		++ite;
	}
	cout << endl;
}
void Test5(const string& s)//
{	string::const_reverse_iterator rite = s.rbegin();
	cout << " const��������������� ";
	while (rite != s.rend())
	{
		cout << *rite << " ";
		++rite;
	}
	cout << endl;
}
void Test6()//auto�ؼ��ֵ�ʹ������� 
{
	string s1("helloworld");
	auto ite = s1.begin();//auto�����Զ��ƶ�������
	cout << " auto �ؼ��ֵ�ʹ�� ��";
	while (ite != s1.end())
	{
		cout << *ite << " ";
		++ite;
	}
	cout << endl;
	cout << " auto ��Χfor������ ";//������  ����ֻ��������� C++11֧��
	for (auto e : s1)//��Χ����
	{
		cout << e << " ";
	}//�ײ��ɵ�����ʵ��
	cout << endl;
}
void GetFileSuffix()//��ȡ�ļ��ĺ�׺��
{
	string s1("test.cpp.gz.h.c");
	//int pos = s1.find('.');
	//string s2(s1, pos, s1.size() - pos);
	//cout << s2 << endl;
	//string s3 = s1.substr(pos, s1.size() - pos);
	//cout << s3<<endl;
	string s2;
	int pos = 0;
	int Size = s1.size();
	cout << Size << endl;
	while (Size>=0)
	{
			pos = s1.rfind('.', Size);
			cout << pos << " " << Size << endl;
			cout << s1.substr(pos, Size - pos);
			Size -= (Size - pos);
	}
	//cout << s2;
}
int main()
{
	string s("helloworld");
	//Test1();//���������������ʾ
	//Test2();//���������������ʾ
	//Test3();//�±����
	//Test4(s);//����const����������
	//Test5(s);//����const����������
	//Test6();
	GetFileSuffix();
	return 0;
}
