#include<iostream>
#include<string>
using namespace std;
class Solution {
public:
	string reverseLeftWords(string s, int n) {
		while (1)
		{
			string s1;
			cout << s.size() << endl;
			for (  int i = n; i < s.size(); i++)
			{
				s1.push_back(s[i]);
			}
			for (int j = 0; j < n; j++)
			{
				s1.push_back(s[j]);
			}
			return s1;
		}
	}
};
int main()
{
	Solution a;
	string s="abcdefg";
	int n=2;
	//a.reverseLeftWords(s,n);
	cout << a.reverseLeftWords(s, n) << endl;
	return 0;
}