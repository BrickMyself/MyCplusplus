//����һ���ַ������ҵ����ĵ�һ�����ظ����ַ���������������������������ڣ��򷵻� - 1��
//
//���� :
//
//s = "leetcode"
//���� 0.
//
//s = "loveleetcode",
//���� 2.
//
//
//ע����������Լٶ����ַ���ֻ����Сд��ĸ��
#include<iostream>
#include<string>
using namespace std;
class Solution {
public:
	char firstUniqChar(string s) {
		if (s.empty())
		{
			return -1;
		}
		if (s.size() == 0)
		{
			return 0;
		}
		for (int i = 0; i < s.size(); i++)
		{
			if ((s.rfind(s[i]))==s.find(s[i]))
			{
				return s[i];
			}
		}
		return -1;
	}
};
int main()
{
	string s1("loveleetcode"); 
	string s2("leetcode");
	string s3("cccccc");
	string s4;
	string s5("a");
	//cout << s1.size()<<endl;
	Solution a;
	cout << a.firstUniqChar(s1) <<endl; 
	cout << a.firstUniqChar(s2) << endl;
	cout << a.firstUniqChar(s3) << endl;
	cout << a.firstUniqChar(s4) << endl;
	cout << a.firstUniqChar(s5) << endl;

}