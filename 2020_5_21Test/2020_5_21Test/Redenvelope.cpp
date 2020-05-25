//#include<iostream>
//#include<vector>
//using namespace std;
//class Gift {
//public:
//	int getValue(vector<int> gifts, int n) {
//		if (n == 0)
//		{
//			return 0;
//		}
//		for (int i = 0; i < n; i++)
//		{
//			int count = 1;
//			for (int j = i + 1; j < n; j++)
//			{
//				if (gifts[i] == gifts[j])
//				{
//					count++;
//				}
//			}
//			if (count > (n / 2))
//			{
//				return gifts[i];
//				break;
//			}
//		}
//		return 0;
//	}
//};
//int main()
//{
//	vector<int> v;
//	v.push_back(1);
//	v.push_back(3);
//	v.push_back(2);
//	v.push_back(2);
//	v.push_back(2);
//	int n = v.size();
//	Gift g;
//	cout<<g.getValue(v, n);
//	return 0;
//}