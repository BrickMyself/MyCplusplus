﻿//给你一个整数数组 nums，请你返回其中位数为 偶数 的数字的个数。
//示例 1：
//
//输入：nums = [12, 345, 2, 6, 7896]
//输出：2
//解释：
//12 是 2 位数字（位数为偶数） 
//345 是 3 位数字（位数为奇数）  
//2 是 1 位数字（位数为奇数） 
//6 是 1 位数字 位数为奇数） 
//7896 是 4 位数字（位数为偶数）  
//因此只有 12 和 7896 是位数为偶数的数字
//示例 2：
//
//输入：nums = [555, 901, 482, 1771]
//输出：1
//解释：
//只有 1771 是位数为偶数的数字
#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
	int findNumbers(vector<int>& nums) {
		
		int sum=0;
		vector<int>::iterator ite = nums.begin();
		while (ite != nums.end())
		{
			int count = 0;
			while(*ite>=10)
			{
				count++;
				(*ite) /= 10;
				if (*ite > 0 && *ite < 10)
				{
					count++;
				}
				
			}
			//cout << count << endl;
			if ((count % 2 == 0)&&(count>0))
			{
				sum++;
			}
			++ite;

		}
		return sum;
	}
};
int main()
{
	Solution a;
	vector<int> v;
	//555,901,482,1771
	v.push_back(555);
	v.push_back(901);
	v.push_back(482);
	v.push_back(1771);
	//v.push_back(1234);
	cout << a.findNumbers(v);
	return 0;
}