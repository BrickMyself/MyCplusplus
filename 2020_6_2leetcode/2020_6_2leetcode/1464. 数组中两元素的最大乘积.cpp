#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
	int maxProduct(vector<int>& nums) {
		if (nums.size() == 2)
		{
			return ((nums[0] - 1)*(nums[1] - 1));
		}
		vector<int> v;
		v.push_back(0);
		v.push_back(0);
		if (nums[0] >= nums[1])
		{
			v[1] = nums[0];
			v[0] = nums[1];
			cout << v[0] << " " << v[1] << endl;
		}
		else 
		{
			v[0] = nums[0];
			v[1] = nums[1];
			cout << v[0] << " " << v[1] << endl;
		}
		for (int i = 2; i < nums.size(); i++)
		{
			if (nums[i] >= v[0] && nums[i] < v[1])
			{
				v[0] = nums[i];
				cout << v[0] << " " << v[1] << endl;
			}
			if (nums[i] >= v[1])
			{
				v[0] = v[1];
				v[1] = nums[i];
				cout << v[0] << " " << v[1] << endl;
			}
		}
		return ((v[0] - 1)*(v[1] - 1));
	}
};
int main()
{
	//[1,8,5,4,10,2,6,1,1,1,9]
	vector<int> v;
	v.push_back(3);
	v.push_back(4);
	v.push_back(5);
	v.push_back(2);
	//v.push_back(10);
	//v.push_back(2);
	//v.push_back(6);
	//v.push_back(1);
	//v.push_back(1);
	//v.push_back(1);
	//v.push_back(9);


	//cout << v[1];
	Solution a;
	cout<<a.maxProduct(v);

	return 0;
}