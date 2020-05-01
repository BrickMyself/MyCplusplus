////给你一个以行程长度编码压缩的整数列表 nums 。
////
////考虑每对相邻的两个元素
////\[freq, val] = [nums[2 * i], nums[2 * i + 1]] 
////（其中 i >= 0 ），
////每一对都表示解压后子列表中有 freq 个值为 val 的元素，
////你需要从左到右连接所有子列表以生成解压后的列表。
////
////请你返回解压后的列表。
////
////示例：
////
////输入：nums = [1, 2, 3, 4]
////输出：[2, 4, 4, 4]
////解释：第一对[1, 2] 代表着 2 的出现频次为 1，所以生成数组[2]。
////第二对[3, 4] 代表着 4 的出现频次为 3，所以生成数组[4, 4, 4]。
////最后将它们串联到一起[2] + [4, 4, 4] = [2, 4, 4, 4]。
////示例 2：
////
////输入：nums = [1, 1, 2, 3]
////输出：[1, 3, 3]
////
////提示：
////
////2 <= nums.length <= 100
////nums.length % 2 == 0
////1 <= nums[i] <= 100
////
//#include<iostream>
//#include<stdlib.h>
//#include<vector>
//using namespace std;
//class Solution {
//public:
//	vector<int> decompressRLElist(vector<int>& nums) {
//		vector<int> v1;
//		int j = 1;
//		while (j < nums.size())
//		{
//			int i = 0;
//			for (i = 0; i < nums[j-1]; i++)
//			{
//				v1.push_back(nums[j]);
//			}
//			j += 2;
//		}
//		return v1;
//	}
//};
//int main()
//{
//	vector<int> v;
//	v.push_back(1);
//	v.push_back(1);
//	v.push_back(2);
//	v.push_back(3);
//	Solution a;
//	vector<int> v2(a.decompressRLElist(v));
//	vector<int>::iterator ite = v2.begin();
//	while (ite != v2.end())
//	{
//		cout << *ite << " ";
//		ite++;
//	}
//	return 0;
//}