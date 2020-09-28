////剑指offer 面试题 3：数组中重复的数字
////题目：
////在一个长度为 n 的数组 nums 里的所有数字都在 0～n - 1 的范围内。
////数组中某些数字是重复的，但不知道有几个数字重复了，也不知道每个数字重复了几次。
////请找出数组中任意一个重复的数字。
////
////示例 1：
////输入：
////> [2, 3, 1, 0, 2, 5, 3]
////
////输出：
////> 2 或 3
//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//void FindRepeatNumber(vector<int>&v)
//{
//	sort(v.begin(), v.end());//C++内置的排序函数  根据数据的不同有不同的算法，底层多是优化之后的快速排序，当然还有其他的排序算法，因数据而易;  
//	int i = 0;
//	for (i = 1; i < v.size(); i++)
//	{
//		if (v[i - 1] != v[i])//这里如果是v[i]和v[i+1]比较当为最后一个元素就会访问越界
//		{
//			i++;
//		}
//		if (v[i - 1] == v[i])
//		{
//			cout << v[i];
//		}
//	}
//}
//void FindRepeatNumber1(vector<int>&v)//哈希表的方法
//{
//
//}
//int FindRepeatNumber2(vector<int>&v)//查找法
//{
//	int i = 0;
//	for (i = 0; i < v.size(); i++)
//	{
//		while (i != v[i])
//		{
//			if (v[i]==v[v[i]])
//			{
//				return v[i];
//				
//			}
//			int temp = v[v[i]];
//			v[v[i]] = v[i];
//			v[i] = temp;
//		}
//	}
//	return -1;
//}
//
//int main()
//{
//	vector<int> v;
//	v.push_back(1);
//	v.push_back(2);
//	v.push_back(5);
//	v.push_back(4);
//	v.push_back(3);
//	v.push_back(0);
//	v.push_back(6);
//	//FindRepeatNumber(v);
//	FindRepeatNumber2(v);
//
//	return 0;
//}