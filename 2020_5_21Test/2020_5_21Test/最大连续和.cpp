#include<iostream>
#include<vector>
using namespace std;
class GetMaxSum
{
public:
	int GetMaxArrySum(vector<int>&v)
	{

	}
};
int main()
{
	int n;
	vector<int> v;
	int a;
	while (cin>>a&&a!=0)
	{
		cin >> n;
		v.push_back(a);
	}
	cout << n;
	for (auto e : v)
	{
		cout << e << " ";
	}
	return 0;
}