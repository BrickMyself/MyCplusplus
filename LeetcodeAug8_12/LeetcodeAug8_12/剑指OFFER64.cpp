////剑指 Offer 64. 求1 + 2 + … + n
////求 1 + 2 + ... + n ，要求不能使用乘除法、for、while、if、else、switch、case等关键字及条件判断语句（A ? B : C）。
////
////
////
////示例 1：
////
////输入 : n = 3
////	输出 : 6
////	示例 2：
////
////	输入 : n = 9
////	输出 : 45
//#include<iostream>
//#include<stdlib.h>
//using namespace std;
//class Solution {
//public:
//	Solution()
//	{
//		++N; Sum += N;
//	}
//	static void Reset()
//	{
//		N = 0;
//		Sum = 0;
//	}
//    static int GetSum()
//	{
//		return Sum;
//	}
//private:
//	static int N;
//	static int Sum;
//};
//int Solution::N = 0;
//int Solution::Sum = 0;
//int sumNums(int n)
//{
//	Solution b;
//	b.Reset();
//	Solution *a = new Solution[n];
//	delete[]a;
//	a = nullptr;
//	return b.GetSum();
//}
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 45; i++)
//	{
//		cout << sumNums(i) << endl;
//	}
//	return 0;
//}