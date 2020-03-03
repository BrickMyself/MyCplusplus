#include<iostream>
#include<vector>
using namespace std;
void test_iterator1()
{
	vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	v.push_back(5);
	v.push_back(6);
	vector<int>::iterator it;
	it = v.begin();
	cout << *it << endl;//it 即指向元素 v[0] 
	//通过解引用访问元素
	cout << *v.end() << endl;//
	while (it != v.end())
	{
		cout << *it << endl;
		++it;
	}
}
void test_iterator2()
{
	vector<int> v;
	vector<int>::iterator it;
	v.push_back(1);
	v.push_back(1);
	v.push_back(1);
	v.push_back(1);
	v.push_back(1);
	v.push_back(1);
	v.push_back(1);
	it = v.begin();
	while (it != v.end())
	{
		*it = 0;
		cout << *it << endl;
		++it;
	}
}
long long  test_fibonaqe(int n)
{
	if (n < 3)
	{
		return 1;
	}
	long long first=1;
	long long second = 1;
	long long third = 0;
	for (size_t i = 2; i < n;  i++)
	{
		third = first + second;
		first = second;
		second = third;
	}
	if (n > 25 && third > 100000)
	{
		third = third /100000;
	}
	return third;
}
// write your code here cpp
//#include <bits/stdc++.h>
//
//using namespace std;
//
//int main() {
//	int fib[100001];
//	fib[0] = 1;
//	fib[1] = 1;
//	// 提前计算斐波那契数列，只保留后6位
//	for (int i = 2; i <= 100000; ++i) {
//		fib[i] = fib[i - 1] + fib[i - 2];
//		fib[i] = fib[i] % 1000000;  // 由于只是相加，所以只要后六位不影响下一个数的结果
//	}
//
//	int n;
//	while (cin >> n) {
//		if (n < 29)
//			cout << fib[n] << endl;
//		else
//			// printf("%06d\n", fib[n]);
//			cout << setw(6) << setfill('0') << fib[n] << endl;
//	}
//	return 0;
//}
int main()
{
	size_t n;
	long long result;
	while(cin>>n)
	{   
			result = test_fibonaqe(n);
			cout <<n<<" : " <<result << endl;
	}
	//test_iterator2();
	return 0;
}