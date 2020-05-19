//给你一个数组 arr ，请你将每个元素用它右边最大的元素替换，如果是最后一个元素，用  - 1 替换。
//
//完成所有替换操作后，请你返回这个数组。
//
//示例：
//
//输入：arr = [17, 18, 5, 4, 6, 1]
//输出：[18, 6, 6, 6, 1, -1]
#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
	vector<int> replaceElements(vector<int>& arr) {
		vector<int> v3;
		for (int i = 0; i < arr.size(); i++)
		{
			if (i == arr.size() - 1)
			{
				arr[i] = -1;
				break;
			}
			int max = 0;
			for (int j = i + 1; j < arr.size(); j++)
			{
				
				if (arr[j] > max)
				{
					max = arr[j];
				}
			}
			arr[i]=max;
		}
		return arr;
	}
};
int main()
{
	vector<int> v;
	v.push_back(17);
	v.push_back(18);
	v.push_back(5);
	v.push_back(4);
	v.push_back(6);
	v.push_back(1);
	Solution a;
	vector<int> v1(a.replaceElements(v));
	for (auto e : v1)
	{
		cout << e << endl;
	}
	return 0;
}