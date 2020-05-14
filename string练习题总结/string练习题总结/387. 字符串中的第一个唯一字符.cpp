//给定一个字符串，找到它的第一个不重复的字符，并返回它的索引。如果不存在，则返回 - 1。
//
//案例 :
//
//s = "leetcode"
//返回 0.
//
//s = "loveleetcode",
//返回 2.
//
//
//注意事项：您可以假定该字符串只包含小写字母。
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