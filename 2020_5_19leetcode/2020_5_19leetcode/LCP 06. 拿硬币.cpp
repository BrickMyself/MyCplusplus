//桌上有 n 堆力扣币，每堆的数量保存在数组 coins 中。
//我们每次可以选择任意一堆，拿走其中的一枚或者两枚，求拿完所有力扣币的最少次数。
//
//示例 1：
//
//输入：[4, 2, 1]
//
//输出：4
//
//解释：第一堆力扣币最少需要拿 2 次，
//第二堆最少需要拿 1 次，第三堆最少需要拿 1 次，总共 4 次即可拿完。
//
//示例 2：
//
//输入：[2, 3, 10]
//
//输出：8
//
//限制：
//
//1 <= n <= 4
//1 <= coins[i] <= 10
//
//
//著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
	int minCount(vector<int>& coins) {
		int count = 0;
		for (int i = 0; i < coins.size(); i++)
		{
			if ((coins[i] % 2) == 0)
			{
				count += (coins[i] / 2);
				//cout << count << endl;
			}
			if (coins[i] == 1)
			{
				count++;
				//cout << count << endl;
				
			}
			if ((coins[i] % 2) == 1&&(coins[i]>2))
			{
				count += ((coins[i] / 2) + 1);
				//cout << count << endl;
			}
		}
		return count;
	}
};
int main()
{
	vector<int> v;
	v.push_back(4);
	v.push_back(2);
	v.push_back(1);
	Solution a;
	cout << a.minCount(v);
	return 0;
}