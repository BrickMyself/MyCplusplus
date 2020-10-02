//求 1 + 2 + ... + n ，
//要求不能使用乘除法、for、while、
//if、else、switch、case等关键字及条件判断语句（A ? B : C）。
//示例 1：
//
//输入 : n = 3
//	输出 : 6
//	示例 2：
//
//	输入 : n = 9
//	输出 : 45
#include<iostream>
using namespace std;
class Solution {
public:
	int sumNums1(int n) {
		return (sumNums1(n)| sumNums1(n-1));
	}
	int sumNums2(int n) {
		return (sumNums2(n^n - 1));
	}
	int sumNums3(int n) {
		return (sumNums3(n&n - 1));
	}
};
int main()
{
	Solution a;
	cout<<a.sumNums1(10);
	//cout<<a.sumNums2(10);
	//cout<<a.sumNums3(10);
	return 0;
}