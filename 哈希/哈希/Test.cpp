#include"unordered_map_set.h"
void test_unordered_set()
{
	//map set 遍历是有序的
//unordered_map 
//unordered_set 遍历是无序的
	unordered_set<int> u;
	u.insert(5);
	u.insert(2);
	u.insert(1);
	u.insert(4);
	unordered_set<int>::iterator us = u.begin();
	while (us != u.end())
	{
		cout << *us << " ";
		++us;
	}
}
void test_unordered_map()
{
	unordered_map<string, string> u1;
	u1.insert(make_pair("string", "字符串"));
	u1.insert(make_pair("sort", "排序"));
	u1["compare"] = "比较";
	unordered_map<string, string> ::iterator u2 = u1.begin();
	while (u2 != u1.end())
	{ 
		cout << u2->first<<" " << u2->second << endl;
		++u2;
	} 
}
void test_op()
{
	srand(time(0));
	set<int> s;
	unordered_set<int> us;
	const size_t n = 100000;
	vector<int> v;
	v.reserve(n);
	for (size_t i = 0; i < n; i++)
	{
		v.push_back(rand());
	}
	size_t begin1 = clock();
	for (auto e : v)
	{
		s.insert(e);
	}
	size_t end1 = clock();
	cout <<"set insert time:"<< end1 - begin1 << endl;
	size_t begin2 = clock();
	for (auto ret : v)
	{
		us.insert(ret);
	}
	size_t end2 = clock();
	cout << "unordered insert time:"<<end2 - begin2 << endl;
}
int main()
{
	//test_unordered_map();
	test_op();
	return 0;
}