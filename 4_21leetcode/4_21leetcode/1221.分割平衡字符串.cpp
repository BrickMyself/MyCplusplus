﻿////在一个「平衡字符串」中，'L' 和 'R' 字符的数量是相同的。
////
////给出一个平衡字符串 s，请你将它分割成尽可能多的平衡字符串。
////
////返回可以通过分割得到的平衡字符串的最大数量。
////
////示例 1：
////
////输入：s = "RLRRLLRLRL"
////输出：4
////解释：s 可以分割为 "RL", "RRLL", "RL", "RL", 
////每个子字符串中都包含相同数量的 'L' 和 'R'。
////示例 2：
////
////输入：s = "RLLLLRRRLR"
////输出：3
////解释：s 可以分割为 "RL", "LLLRRR", "LR", 
////每个子字符串中都包含相同数量的 'L' 和 'R'。
////示例 3：
////
////输入：s = "LLLLRRRR"
////输出：1
////解释：s 只能保持原样 "LLLLRRRR".
//#include<iostream>
//#include<string>
//using namespace std;
//class Solution {
//public:
//	int balancedStringSplit(string s) {
//		int temp1=0;
//		int temp2=0;
//		int count=0;
//		for (int i = 0; i < s.size(); i++)
//		{
//			if (s[i] == 'L')
//			{
//				temp1++;
//			}
//			if (s[i] == 'R')
//			{
//				temp2++;
//			}
//			if (temp1 == temp2)
//			{
//				count++;
//				temp1 = 0;
//				temp2 = 0;
//			}
//		}
//		return count;
//	}
//};
//int main()
//{
//	string s("RLRRLLRLRL");
//	Solution a;
//	cout << a.balancedStringSplit(s) << endl;
//
//	return 0;
//}