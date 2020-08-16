#include<iostream>
#include<list>
#include<string>
using namespace std;
void Test6()
{
	//list<int> l1(3);
	//list<int>l2(l1);
	//for (auto e : l1)
	//{
	//	cout << e << " ";
	//}
	//list<int> l3(5, 10);
	//list<string> l4(5, "hello");
	//for (auto e : l3)
	//{
	//	cout << e << " ";
	//}
	//cout << endl;
	//for (auto t : l4)
	//{
	//	cout << t << " ";
	//}
	//list<int> l7(5, 10.12);//精度丢失
	//for (auto e : l7)
	//{
	//	cout << e << " ";
	//}
	////list<string> l8(7, 'h');类型不相同
	//l2.push_back("hello");
	//l2.push_back("world");
	//for (auto e : l2)
	//{
	//	cout << e << " ";
	//}
	//cout << endl;
	//for (auto e : l3)
	//{
	//	cout << e << " ";
	//}
	//cout << endl;
	//list<string> l4(l2);
	//for (auto e : l4)
	//{
	//	cout << e << " ";
	//}
	//cout << endl;
	list<int> l3(5, 10);
	list<int> l5(l3.begin(), l3.end());
	for (auto e : l5)
	{
		cout << e << " ";
	}
}
void Test5()
{
	list<int> li;
	li.push_back(10);
	li.push_back(2);
	li.push_back(32);
	li.push_back(14);
	li.push_back(5);
	li.push_back(16);
	li.sort();//排序默认是升序
	for (auto e : li)
	{
		cout << e << " ";
	}
	cout << endl;
	li.reverse();//逆置将所有的元素逆置
	for (auto e : li)
	{
		cout << e << " ";
	}
	cout << endl;

}
void Test4()
{
	list<int> li;
	li.push_back(1);
	li.push_back(2);
	li.push_back(3);
	li.push_back(4);
	li.push_back(5);
	li.push_back(6);
	list<int>::iterator ite = li.begin();
	while (ite != li.end())
	{
		if (*ite % 2 == 0)
		{
			ite = li.erase(ite);//erase返 回值是指向被删除的元素的下一个元素的迭代器
			//如果删除的是一个范围内的元素 返回的是最后一个元素的下一个元素的迭代器
			//其实删除掉这个位置的元素就已经空间被释放了，不能再对其进行操作了，否则就会报错
		}
		else
		{
			++ite;
		}
	}

}
void Test3()
{
	list<int> li;
	li.push_back(1);
	li.push_back(2);
	li.push_back(3);
	li.push_back(4);
	list<int>::iterator pos = find(li.begin(), li.end(), 3);
	if (pos != li.end())
	{
		pos=li.insert(pos, 30);
		li.erase(pos);
	}
	//这里迭代器不会失效 但是 vector的话迭代器会失效
	//因为vector的插入数据原理是数组中数据的移动会发生迭代器位置的变化更重要的一点是当
    //发生增容时  迭代器会指向原来已经被释放了的空间 发生迭代器失效
	li.reverse();//逆置
	for (auto e : li)
	{
		cout << e << " ";
	}


}
void Test2()
{
	list<int> li;
	li.push_back(1);
	li.push_back(2);
	li.push_back(3);
	li.push_back(4);
	list<int>::reverse_iterator rite = li.rbegin();
	while (rite != li.rend())
	{
		*rite += 3;
		cout << *rite << " ";
		++rite;
	}
}
void Test1()
{
	list<int> li;
	li.push_back(1);
	li.push_back(2);
	li.push_back(3);
	li.push_back(4);
	list<int>::iterator ite = li.begin();
	while (ite != li.end())
	{
		cout << *ite <<" ";
		++ite;
	}
	cout << endl;
	////任何一个容器只要支持迭代器  就可以使用范围for进行遍历 实际上底层还是调用的是迭代器
	////支持的操作接口的角度分迭代器的类型 ：单向  forward_list 双向list 随机vector
	//for (auto e : li)
	//{
	//	cout << e <<" ";
	//}
	//cout << endl;
}
void test1()
{
	list<int> li;
	li.push_back(1);
	li.push_back(2);
	li.push_back(3);
	li.push_back(4);
	list<int>::const_reverse_iterator crite = li.crbegin();
	while (crite != li.crend())
	{
		cout << *crite << " ";
		++crite;
	}

}
void test2()
{
	list<int> l2(5, 1);
	cout << l2.max_size() << endl;
}
void test3()
{
	list < int> l1;
	l1.push_back(1);
	l1.push_back(2);
	l1.push_back(3);
	cout << l1.front() << endl;
	cout << l1.back() << endl;
}
void test4()
{
	list<int> l1;
	l1.push_front(1);
	l1.pop_front();
	l1.push_back(2);
	l1.push_front(3);
	l1.push_back(4);
	l1.pop_back();
	for (auto e : l1)
	{
		cout << e << " ";
	}
	cout << endl;
}
void test5()
{
	list < int> l1;
	l1.push_back(1);
	l1.push_back(2);
	l1.push_back(3);
	l1.push_back(4);
	l1.push_back(5);
	auto ite = l1.begin();
	while (ite != l1.end())
	{
		if (*ite % 2 == 0)
		{
			ite=l1.erase(ite);
		}
		++ite;
	}
	for (auto e : l1)
	{
		cout << e << " ";
	}
}
void test6()
{
	list<int> l1(5, 10);
	list<int> l2(6, 3);
	l1.swap(l2);
	for (auto e : l1)
	{
		cout << e << " ";
	}
	cout << endl;
	for (auto r : l2)
	{
		cout << r << " ";
	}
	cout << endl;
	cout << l2.size() << endl;
	l2.resize(20);
	cout << l2.size() << endl;
	l2.clear();
	cout << l2.size()<<endl;
	cout << l2.empty() << endl;
}
void test7()
{
	list<int> l1;
	l1.push_back(10);
	l1.push_back(2);
	l1.push_back(31);
	l1.push_back(4);
	l1.sort();
	for (auto e : l1)
	{
		cout << e << " ";
	}
	cout << endl;
	l1.reverse();
	for (auto e : l1)
	{
		cout << e << " ";
	}
	cout << endl;
}
int main()
{
	//Test3();
	//Test5();
	//Test2();
	test7();
	return 0;
}