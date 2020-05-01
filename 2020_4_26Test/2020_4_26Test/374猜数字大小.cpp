////我们正在玩一个猜数字游戏。 游戏规则如下：
////我从 1 到 n 选择一个数字。 你需要猜我选择了哪个数字。
////每次你猜错了，我会告诉你这个数字是大了还是小了。
////你调用一个预先定义好的接口 guess(int num)，
////它会返回 3 个可能的结果（ - 1，1 或 0）：
////
////- 1 : 我的数字比较小
////1 : 我的数字比较大
////0 : 恭喜！你猜对了！
////示例 :
////
////输入: n = 10, pick = 6
////	输出 : 6
//#include<iostream>
//using namespace std;
//class Solution {
//public:
//	int guess(int num,int x)
//	{
//		int pick = x;
//		if (num > pick)
//		{
//			return -1;
//		}
//		if (num == pick)
//		{
//			return 0;
//		}
//		if (num < pick)
//		{
//			return 1;
//		}
//	}
//	int guessNumber(int n,int x) {
//		int left = 0;
//		int right = n;
//		while (left< right)
//		{
//			int mid = left + (right - left) / 2;
//			if ((guess(mid, x) == -1))
//			{
//				right = mid - 1;
//			}
//			if ((guess(mid, x) == 0))
//			{
//				return mid;
//			}
//			if ((guess(mid, x) == 1))
//			{
//				left = mid + 1;
//			}
//		}
//	}
//};
//int main()
//{
//	int n = 2;
//	int x = 2;
//	Solution a;
//	cout << a.guessNumber(n,x);
//	return 0;
//}