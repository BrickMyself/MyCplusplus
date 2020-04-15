//给你一个有效的 IPv4 地址 address，返回这个 IP 地址的无效化版本。
//
//所谓无效化 IP 地址，其实就是用 "[.]" 代替了每个 "."。
//
//示例 1：
//
//输入：address = "1.1.1.1"
//输出："1[.]1[.]1[.]1"
//示例 2：
//
//输入：address = "255.100.50.0"
//输出："255[.]100[.]50[.]0"
//
//
//提示：
//
//给出的 address 是一个有效的 IPv4 地址
#include<iostream>
#include<string>
using namespace std;
class Solution {
public:
	string defangIPaddr(string address) {
		string s1;
		for (int i = 0; i < address.size(); i++)
		{
			if (address[i] != '.')
			{
				s1.push_back(address[i]);
			}
			if (address[i] == '.')
			{
				s1.push_back('[');
				s1.push_back('.');
				s1.push_back(']');
			}
		}
		return s1;
	}
};
int main()
{
	string s;
	string s3;
	s = "1.1.1.1";
	s3 = "255.100.50.0";
	Solution a;
	cout << a.defangIPaddr(s) << endl;
	cout << a.defangIPaddr(s3) << endl;
	return 0;
}