//#include<iostream>
//#include<vector>
//using namespace std;
//class Solution {
//public:
//	bool findNumberIn2DArray(vector<vector<int>>& matrix, int target) {
//		int i=0;
//		int j =matrix[0].size()-1;
//	while (i <matrix.size() && j>=0)
//		{
//			if (target == matrix[i][j])
//			{
//				return true;
//			}
//			if (target > matrix[i][j])
//			{
//				++i;
//				if (i == matrix.size())
//				{
//					return false;
//				}
//			}
//			if (target < matrix[i][j])
//			{
//				--j;
//				if (j < 0)
//				{
//					return false;
//				}
//			}
//		}
//		return false;
//	}
//};
//int main()
//{
//	vector<vector<int>> arr;
//	int i, j;
//	int n, m;
//	cin >> n;
//	cin >> m;
//	for (i = 0; i < n; i++)
//	{
//		vector<int> v;
//		for (j = 0; j < m; j++)
//		{
//			int w;
//			cin >> w;
//			v.push_back(w);
//		}
//		arr.push_back(v);
//	}
//	cout << arr.size()<<endl;
//	cout << arr[0].size() << endl;
//	int k, l;
//	for (k = 0; k < n; k++)
//	{
//		for (l = 0; l < m; l++)
//		{
//			cout << arr[k][l] << " ";
//		}
//		cout << endl;
//	}
//	Solution a;
//	if (a.findNumberIn2DArray(arr, 8))
//	{
//		cout << "true";
//	}
//	else
//	{
//		cout << "false";
//	}
//	return 0;
//}