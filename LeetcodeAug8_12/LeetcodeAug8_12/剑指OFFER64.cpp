////��ָ Offer 64. ��1 + 2 + �� + n
////�� 1 + 2 + ... + n ��Ҫ����ʹ�ó˳�����for��while��if��else��switch��case�ȹؼ��ּ������ж���䣨A ? B : C����
////
////
////
////ʾ�� 1��
////
////���� : n = 3
////	��� : 6
////	ʾ�� 2��
////
////	���� : n = 9
////	��� : 45
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