////����һ��רҵ��С͵���ƻ�͵���ؽֵķ��ݡ�ÿ�䷿�ڶ�����һ�����ֽ�
////Ӱ����͵�Ե�Ψһ��Լ���ؾ������ڵķ���װ���໥��ͨ�ķ���ϵͳ��
////����������ڵķ�����ͬһ���ϱ�С͵���룬ϵͳ���Զ�������
////
////����һ������ÿ�����ݴ�Ž��ķǸ��������飬
////�������ڲ���������װ�õ�����£�
////�ܹ�͵�Ե�����߽�
////
////ʾ�� 1:
////
////����: [1, 2, 3, 1]
////��� : 4
////���� : ͵�� 1 �ŷ���(��� = 1) ��Ȼ��͵�� 3 �ŷ���(��� = 3)��
////͵�Ե�����߽�� = 1 + 3 = 4 ��
////ʾ�� 2 :
////
////���� : [2, 7, 9, 3, 1]
////��� : 12
////���� : ͵�� 1 �ŷ���(��� = 2), ͵�� 3 �ŷ���(��� = 9)������͵�� 5 �ŷ���(��� = 1)��
////͵�Ե�����߽�� = 2 + 9 + 1 = 12 ��
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