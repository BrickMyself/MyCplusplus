//STL
//六大组件：
//容器、算法、迭代器、适配器、仿函数、空间配置器
//容器 :
//序列式容器 ： vector list deque (ps:string)
//关联式容器:map set unordered_map unordered_set
//算法:
//find 、sort...
//迭代器：
//容器特性:
//单向迭代器(++ 单链表 list) 双向迭代器(++ -- map/set)
//随机迭代器(++ dequeue) 
// 正向迭代器 反向迭代器 const正向迭代器 const反向迭代器
//适配器  ： stack queue priority_queue
//优先级队列
//仿函数 ： 类中重载了operator() 
//空间配置器 ： 提高性能的内存池 -> 给容器使用的(容器会申请内存使用）
#include<vector>
#include<iostream>
#include<list>
#include<string>
#include<forward_list>
#include<algorithm>
#include<map>
#include<set>
using namespace std;
//struct Less
//{
//	bool operator()(int x1, int x2)
//	{
//		return x1 < x2;
//	}
//};
//int main()
//{
//	Less less;
//	cout << less.operator()(1, 2) << endl;//operator运算符重载
//	cout<<less(1, 3)<<endl;//仿函数 类函数对象 可以 省略operator  类对象可以像函数一样使用
//	
//	//vector<int> v = { 1,4,3,2 };
//	//forward_list<int> fl = { 1,4,3,2 };
//	//list<int> l1 = { 1,4,3,2 };
//	////sort(f);
//	//find(v.begin(), v.end(),2);
//	//find(fl.begin(), fl.end(), 2);
//	//find(l1.begin(), l1.end(), 2);
//
//	return 0;
//}
// map 底层  二叉搜索树
//可以快速查找这个val在不在
//void test_set()
//{
//	//集合是按照特定顺序存储唯一元素的容器。
//	//在.集，元素的值也标识它(该值本身是钥匙，类型T)，并且每个值都必须是唯一的。中的元素的值。
//	//集不能在容器中修改一次(元素总是Const)，但是可以从容器中插入或删除它们。
//	set<int> s;
//	s.insert(3);
//	s.insert(1);
//	s.insert(2);
//	s.insert(6);
//	s.insert(7);//这里会无法插入  因为不能有相同的值  且他会自动按升序排列
//	set<int>::iterator it = s.begin();
//	set<int>::iterator ret = s.find(2);
//	set<int>::iterator finall = s.begin();
//	//find 的迭代器
//	if (ret != s.end())
//	{
//		cout << "找到了" << endl;
//		s.erase(ret);
//	}
//	else
//	{
//		cout << "没有找到" << endl;
//	}
//	//s.erase(finall);
//	s.erase(6);//先去找 6 然后去erase 它的迭代器
//	while (it != s.end())
//	{
//		cout << *it << endl;
//		it++;
//	}
//}
// map 可以通过一个值去找另一个值    比如英文找中文  字典
//first 
//second 通过first 来找second 
// map和set底层都是二叉搜索树 set 每一个都是存了一个值
//SET
//template < class T,                        // set::key_type/value_type
//class Compare = less<T>,        // set::key_compare/value_compare
//	class Alloc = allocator<T>      // set::allocator_type
//		> class set;
//而map是存了两个 除了 key 还有一个val 这两个值都存在pair这个结构里面
//MAP 
//template < class Key,                                     // map::key_type
//class T,                                       // map::mapped_type
//	class Compare = less<Key>,                     // map::key_compare
//	class Alloc = allocator<pair<const Key, T> >    // map::allocator_type
//		> class map;
void test_map()
{
	
	 //比如实现一个字典
	//
	map<string,string> dirt;
	dirt.insert(pair<string, string>("sort", "排序"));
	dirt.insert(pair<string, string>("insert", "插入"));
	dirt.insert(pair<string, string>("string", "字符串"));
	map<string, string>::iterator dit = dirt.begin();
	while (dit != dirt.end())
	{
		cout<<(*dit).first<<":"<<(*dit).second<< endl;
		cout << dit->first <<":"<< dit->second << endl;
		++dit;
	}
	cout << endl;
	string str;
	while (cin>>str)
	{
		auto ret = dirt.find(str);
		if (ret != dirt.end())
		{
			cout << ret->second << endl;
		}
		else
		{
			cout << "没有这个单词，请重新输入" << endl;
		}
	}

}
void test_map1()
{

	string str1[] = { "苹果","香蕉","香蕉","苹果","香蕉","苹果","香蕉" ,"西瓜"};
	map<string, int> countMap;
	//map<string, int> Printf;


	for (auto str : str1)
	{
		
		//1.在++次数
		//2.不在 insert pair<水果，1>
		//auto tmp = countMap.find(str);//find的返回值是一个迭代器
		//	countMap[str]++; //尝试书写
		auto tmp = countMap.find(str);
		//if (tmp != countMap.end())
		//{
		//	tmp->second++;
		//}
		//else
		//{
		//	countMap.insert(pair<string, int>(str, 1));
		//}
		//改进写法
		auto A= countMap.insert(pair<string, int>(str, 1));
		if (A.second == false)
		{
			A.first->second++;
		}
	}
	map<string, int>::iterator  Q = countMap.begin();
	while (	Q != countMap.end())
	{
		cout << Q->first << ":" << Q->second << endl;
		Q++;
	}
	/*pair<string, int>p1;
	pair<string, int>p2("香蕉", 1);*/
	//insert 迭代器 永远指向key  有一个值 bool 表示 插入成功或失败
}
//作业 研究
void test_map4()
{
	string strs[] = { "苹果","香蕉","香蕉","苹果","香蕉","苹果","香蕉" ,"西瓜" };
	map<string, int> countMap;
	for (auto str : strs)
	{
		countMap[str]++;//为什么
	}
	map<string, int>::iterator  Q = countMap.begin();
	while (Q != countMap.end())
	{
		cout << Q->first << ":" << Q->second << endl;
		Q++;
	}
}
int main()
{
	test_map4();
	return 0;
}