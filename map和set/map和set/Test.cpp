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
#include<queue>
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
		countMap[str]++;//为什么//[] 表示可以访问存取元素 当map中没有这个元素时就新建一个key值并且值为1 当有的时候只改变value的值
	}
	map<string, int>::iterator  Q = countMap.begin();
	while (Q != countMap.end())
	{
		cout << Q->first << ":" << Q->second << endl;
		Q++;
	}
}
void test_map5()
{
	int arr[4] = { 1,2,3,4};
	map<int, int> m;
	m[0] = 2;
	m[1] = 4;
	m[2] = 6;
	m[3] = 8;
	m[4] = 10;
	m[2] = 7;
	m[5];//没有给value的话会调用默认构造函数 value的缺省值是0 int 型是0
	//而string 缺省值是""空字符串
	//[] 的返回值是value的引用
	//m[5]=19;这里是修改
	//m[5];这里是插入 value是0 因为m[5]不存在
	m.insert(make_pair(0, 12));//这里的插入修改会失败
	map<int, int>::iterator ret = m.begin();
	map<int, int>::iterator set;
	while (ret != m.end())
	{
		cout << ret->first << ":" << ret->second << endl;
		ret++;
	}
	cout << endl;
}
//void test_map()
//{
//	map<string, int>M;
//	int map_type = 0;
//	string k;
//	M.insert((make_pair(k, map_type)));
	//make_pair可以自动识别里面的参数的类型
	//mapped_type&operator[](const key_type&k)
	//{
		//return (*(this->insert(make_pair(k, mapped_type)))).first)).second;
		//返回容器中keyy对应的value值的引用
		//两层含义如果这个key在map中的话：a 找key映射的value  修改key的映射
		//如果key不在容器中的话 插入make_pair(key,value());  依旧会返回value的引用->且可以对value的值进行修改
		//因为find 只能返回key在的情况 但是当key不在的时候就会出现问题
	//}
//}
void GetFavoriteFruit1(const vector<string>& fruits, size_t k)
{
	//范围 for 只要支持迭代器就可以使用 范围for 
	map<string, int> m;
	for (auto set : fruits)
	{
		m[set]++;
	}
	vector<pair<string, int>> e(m.begin(),m.end());
	for (auto s : m)
	{
		e.push_back(s);
	}
	sort(e.end(), e.begin());
	for (int i = 0; i < k; i++)
	{
		cout << e[i].first << ":" << e[i].second << endl;
	}
}
//int CountCompare()
//{
//
//}
//void GetFavoriteFruit2(const vector<string>& fruits, size_t k)
//{
//	//范围 for 只要支持迭代器就可以使用 范围for 
//	map<string, int> m;
//	for (auto set : fruits)
//	{
//		m[set]++;
//	}
//	priority_queue < pair<string, int>, vector<pair<string, int>, int CountCompare>> pq;
//}
void test_map6()
{
	vector<string> fruits = { "西瓜","西瓜","芒果","草莓","西瓜","香蕉","苹果","荔枝","荔枝","芒果","西瓜","梨子","桃子","香蕉","芒果","草莓" };
	map<string, int> m;
	map<int, string> p;
	map<string, int>::iterator b = m.begin();
	for (auto str : fruits)
	{
		m[str]++;
	}
	map<string, int>::iterator  F = m.begin();
	while (F != m.end())
	{
		cout << F->first << ":" << F->second << endl;
		F++;
	}
	cout << endl;
	int k = 3;
	//GetFavoriteFruit(fruits,k);


}
void test_set2()
{
	multiset<int> ms;
	ms.insert(3);
	ms.insert(5);
	ms.insert(3);//允许键值冗余 但是 set是不允许相同的key插入
	for (auto set : ms)
	{
		cout << set << endl;
	}
	cout << endl;
	//map是排序+key去重
	//反向迭代器
	//multimap 
	//map k v 双向迭代器 不支改key 但可以更改 value的值 
	//set k +双向迭代器 
}
void test_set()
{
	set<int> s;
	s[1] = 0;
	s[2] = 1;
	s[3] = 4;
}
int main()
{   
	test_set2();
	return 0;
}