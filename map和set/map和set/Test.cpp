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
		countMap[str]++;//Ϊʲô//[] ��ʾ���Է��ʴ�ȡԪ�� ��map��û�����Ԫ��ʱ���½�һ��keyֵ����ֵΪ1 ���е�ʱ��ֻ�ı�value��ֵ
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
	m[5];//û�и�value�Ļ������Ĭ�Ϲ��캯�� value��ȱʡֵ��0 int ����0
	//��string ȱʡֵ��""���ַ���
	//[] �ķ���ֵ��value������
	//m[5]=19;�������޸�
	//m[5];�����ǲ��� value��0 ��Ϊm[5]������
	m.insert(make_pair(0, 12));//����Ĳ����޸Ļ�ʧ��
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
	//make_pair�����Զ�ʶ������Ĳ���������
	//mapped_type&operator[](const key_type&k)
	//{
		//return (*(this->insert(make_pair(k, mapped_type)))).first)).second;
		//����������keyy��Ӧ��valueֵ������
		//���㺬��������key��map�еĻ���a ��keyӳ���value  �޸�key��ӳ��
		//���key���������еĻ� ����make_pair(key,value());  ���ɻ᷵��value������->�ҿ��Զ�value��ֵ�����޸�
		//��Ϊfind ֻ�ܷ���key�ڵ���� ���ǵ�key���ڵ�ʱ��ͻ��������
	//}
//}
void GetFavoriteFruit1(const vector<string>& fruits, size_t k)
{
	//��Χ for ֻҪ֧�ֵ������Ϳ���ʹ�� ��Χfor 
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
//	//��Χ for ֻҪ֧�ֵ������Ϳ���ʹ�� ��Χfor 
//	map<string, int> m;
//	for (auto set : fruits)
//	{
//		m[set]++;
//	}
//	priority_queue < pair<string, int>, vector<pair<string, int>, int CountCompare>> pq;
//}
void test_map6()
{
	vector<string> fruits = { "����","����","â��","��ݮ","����","�㽶","ƻ��","��֦","��֦","â��","����","����","����","�㽶","â��","��ݮ" };
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
	ms.insert(3);//�����ֵ���� ���� set�ǲ�������ͬ��key����
	for (auto set : ms)
	{
		cout << set << endl;
	}
	cout << endl;
	//map������+keyȥ��
	//���������
	//multimap 
	//map k v ˫������� ��֧��key �����Ը��� value��ֵ 
	//set k +˫������� 
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