//����һ���ַ�������֤���Ƿ��ǻ��Ĵ���ֻ������ĸ�������ַ������Ժ�����ĸ�Ĵ�Сд��
//
//˵���������У����ǽ����ַ�������Ϊ��Ч�Ļ��Ĵ���
//
//ʾ�� 1:
//
//����: "A man, a plan, a canal: Panama"
//	��� : true
//	ʾ�� 2 :
//
//	���� : "race a car"
//	��� : false
#include<iostream>
#include<string>
#include<stdbool.h>
using namespace std;
class Solution {
public:
	
		bool isChar_Number(char ch)
		{
			if ((ch >= 'a'&&ch <= 'z') || (ch >= '0'&&  ch <= '9'))
			{
			return true;
			}
			return false;
		}
		bool isPalindrome(string s)
		{
			if (s.empty())
			{
				return true;
			}
			for (auto &ch : s)
			{
				if (ch >= 'A'&&ch <= 'Z')
				{
					ch += 32;
				}
			}
			size_t start = 0;
			size_t end = s.size() - 1;
			while (start < end)
			{
				while (start < end && false == isChar_Number(s[start]))
					++start;
				while (start < end && false == isChar_Number(s[end]))
					--end;

				if (start < end)
				{
					if (s[start] == s[end])
					{
						++start;
						--end;
					}
					else
						return false;
				}
			}
			return true;
		}

};
int main()
{
	string s1("A man, a plan, a canal: Panama");
	Solution a;
	cout << a.isPalindrome(s1);
	//if (a.isPalindrome(s1) == false)
	//{
	//	cout << "false";
	//}
	//else
	//{
	//	cout << "true";
	//}
	return 0;
}