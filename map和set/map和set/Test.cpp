//STL
//���������
//�������㷨�������������������º������ռ�������
//���� :
//����ʽ���� �� vector list deque (ps:string)
//����ʽ����:map set unordered_map unordered_set
//�㷨:
//find ��sort...
//��������
//��������:
//���������(++ ������ list) ˫�������(++ -- map/set)
//���������(++ dequeue) 
// ��������� ��������� const��������� const���������
//������  �� stack queue priority_queue
//���ȼ�����
//�º��� �� ����������operator() 
//�ռ������� �� ������ܵ��ڴ�� -> ������ʹ�õ�(�����������ڴ�ʹ�ã�
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
//	cout << less.operator()(1, 2) << endl;//operator���������
//	cout<<less(1, 3)<<endl;//�º��� �ຯ������ ���� ʡ��operator  ������������һ��ʹ��
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
// map �ײ�  ����������
//���Կ��ٲ������val�ڲ���
//void test_set()
//{
//	//�����ǰ����ض�˳��洢ΨһԪ�ص�������
//	//��.����Ԫ�ص�ֵҲ��ʶ��(��ֵ������Կ�ף�����T)������ÿ��ֵ��������Ψһ�ġ��е�Ԫ�ص�ֵ��
//	//���������������޸�һ��(Ԫ������Const)�����ǿ��Դ������в����ɾ�����ǡ�
//	set<int> s;
//	s.insert(3);
//	s.insert(1);
//	s.insert(2);
//	s.insert(6);
//	s.insert(7);//������޷�����  ��Ϊ��������ͬ��ֵ  �������Զ�����������
//	set<int>::iterator it = s.begin();
//	set<int>::iterator ret = s.find(2);
//	set<int>::iterator finall = s.begin();
//	//find �ĵ�����
//	if (ret != s.end())
//	{
//		cout << "�ҵ���" << endl;
//		s.erase(ret);
//	}
//	else
//	{
//		cout << "û���ҵ�" << endl;
//	}
//	//s.erase(finall);
//	s.erase(6);//��ȥ�� 6 Ȼ��ȥerase ���ĵ�����
//	while (it != s.end())
//	{
//		cout << *it << endl;
//		it++;
//	}
//}
// map ����ͨ��һ��ֵȥ����һ��ֵ    ����Ӣ��������  �ֵ�
//first 
//second ͨ��first ����second 
// map��set�ײ㶼�Ƕ��������� set ÿһ�����Ǵ���һ��ֵ
//SET
//template < class T,                        // set::key_type/value_type
//class Compare = less<T>,        // set::key_compare/value_compare
//	class Alloc = allocator<T>      // set::allocator_type
//		> class set;
//��map�Ǵ������� ���� key ����һ��val ������ֵ������pair����ṹ����
//MAP 
//template < class Key,                                     // map::key_type
//class T,                                       // map::mapped_type
//	class Compare = less<Key>,                     // map::key_compare
//	class Alloc = allocator<pair<const Key, T> >    // map::allocator_type
//		> class map;
void test_map()
{
	
	 //����ʵ��һ���ֵ�
	//
	map<string,string> dirt;
	dirt.insert(pair<string, string>("sort", "����"));
	dirt.insert(pair<string, string>("insert", "����"));
	dirt.insert(pair<string, string>("string", "�ַ���"));
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
			cout << "û��������ʣ�����������" << endl;
		}
	}

}
void test_map1()
{

	string str1[] = { "ƻ��","�㽶","�㽶","ƻ��","�㽶","ƻ��","�㽶" ,"����"};
	map<string, int> countMap;
	//map<string, int> Printf;


	for (auto str : str1)
	{
		
		//1.��++����
		//2.���� insert pair<ˮ����1>
		//auto tmp = countMap.find(str);//find�ķ���ֵ��һ��������
		//	countMap[str]++; //������д
		auto tmp = countMap.find(str);
		//if (tmp != countMap.end())
		//{
		//	tmp->second++;
		//}
		//else
		//{
		//	countMap.insert(pair<string, int>(str, 1));
		//}
		//�Ľ�д��
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
	pair<string, int>p2("�㽶", 1);*/
	//insert ������ ��Զָ��key  ��һ��ֵ bool ��ʾ ����ɹ���ʧ��
}
//��ҵ �о�
void test_map4()
{
	string strs[] = { "ƻ��","�㽶","�㽶","ƻ��","�㽶","ƻ��","�㽶" ,"����" };
	map<string, int> countMap;
	for (auto str : strs)
	{
		countMap[str]++;//Ϊʲô
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