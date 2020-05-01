////你是一个专业的小偷，计划偷窃沿街的房屋。每间房内都藏有一定的现金，
////影响你偷窃的唯一制约因素就是相邻的房屋装有相互连通的防盗系统，
////如果两间相邻的房屋在同一晚上被小偷闯入，系统会自动报警。
////
////给定一个代表每个房屋存放金额的非负整数数组，
////计算你在不触动警报装置的情况下，
////能够偷窃到的最高金额。
////
////示例 1:
////
////输入: [1, 2, 3, 1]
////输出 : 4
////解释 : 偷窃 1 号房屋(金额 = 1) ，然后偷窃 3 号房屋(金额 = 3)。
////偷窃到的最高金额 = 1 + 3 = 4 。
////示例 2 :
////
////输入 : [2, 7, 9, 3, 1]
////输出 : 12
////解释 : 偷窃 1 号房屋(金额 = 2), 偷窃 3 号房屋(金额 = 9)，接着偷窃 5 号房屋(金额 = 1)。
////偷窃到的最高金额 = 2 + 9 + 1 = 12 。
////
//#include<iostream>
//#include<vector>
//#include<new.h>
//using namespace std;
//class Solution {
//public:
//	int max(int x, int y)
//	{
//		return (x > y ? x : y);
//	}
//	int rob(vector<int>& nums) {
//		if (nums.empty())
//		{
//			return 0;
//		}
//		int* dp = new int[nums.size()];
//		dp[0] = nums[0];
//		for (int i = 1; i < nums.size(); i++) 
//		{
//			if (i == 1)
//			{
//				dp[i] = max(nums[0], nums[1]);
//			}
//			else {
//				dp[i] = max(dp[i - 2] + nums[i], dp[i - 1]);
//			}
//		}
//		return dp[nums.size() - 1];
//	}
//};
//
//int main()
//{
//	Solution a;
//	vector<int> v;
//	v.push_back(2);
//	v.push_back(3);
//	v.push_back(7);
//	v.push_back(9);
//	v.push_back(1);
//	v.push_back(7);
//	cout << v[1] << endl;
//	cout << a.rob(v) << endl;;
//	return 0;
//}