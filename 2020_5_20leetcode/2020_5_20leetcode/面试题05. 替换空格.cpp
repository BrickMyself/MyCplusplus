//��ʵ��һ�����������ַ��� s �е�ÿ���ո��滻��"%20"��
//
//
//
//ʾ�� 1��
//
//���룺s = "We are happy."
//�����"We%20are%20happy."
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
			if (s[i] ==' ')
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
int main()
{
	string s1("We are happy.");
	string s2("     ");
	Solution a;
	string s3(a.replaceSpace(s2));
	cout << s3 << endl;
	return 0;
}