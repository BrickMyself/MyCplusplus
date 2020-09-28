//////#include<iostream>
//////using namespace std;
//////long long factorial(int val)
//////{
//////	int i = 1;
//////	int sum = 1;
//////	for (i = 1; i <= val; i++)
//////	{
//////		sum *= i;
//////	}
//////	return sum;
//////}
//////int main()
//////{
//////	int n, m;
//////	cin >> n;
//////	cin >> m;
//////	cout << (factorial(n) / factorial(m)) / (n - m) << endl;
//////	return 0;
//////}
////#include<iostream>
////#include<string>
////#include<vector>
////using namespace std;
////void Check(vector<vector<string>>&v)
////{
////	int i = 0;
////	cout << v[0][0];
////}
////int main()
////{
////	while (1)
////	{
////		int n;
////		cin >> n;
////		vector<vector<string>> arr;
////		string s;
////		while (getline(cin, s))
////		{
////			vector<string> v;
////			v.push_back(s);
////			arr.push_back(v);
////		}
////		Check(arr);
////	}
////	return 0;
////}
//#include<iostream>
//#include<vector>
//using namespace std;
//int main()
//{
//	int n, m, k;
//	cin >> n;
//	cin >> m;
//	vector<vector<int>> arr;
//	arr.resize(n, vector<int>(m));
//	while (cin>>k)
//	{
//		int i, j;
//		for (i = 0; i < arr.size(); i++)
//		{
//			vector<int> v;
//			for (j = 0; j < arr[j].size(); j++)
//			{
//				v[i][j] = k;
//			}
//			arr.push_back(v);
//		}
//	}
//	int i, j;
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < m; j++)
//		{
//			cout << arr[i][j] << " ";
//		}
//		cout << endl;
//	}
//	vector<int> v;
//	return 0;
//}