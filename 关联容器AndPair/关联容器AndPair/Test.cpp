#include<iostream>
#include<vector>
#include<string>
#include<utility>
#include<stdlib.h>
using namespace std;
int main()
{
	pair<int,int> S;
	S = make_pair(10.3, 'a');
	cout << S.first << " "<<S.second << endl;
	return 0;
}
//int main()
//{
//	pair<int, string>p1(1, "hello");
//	pair<int, string>p2(12,"world");
//	p1.swap(p2);
//	cout << p1.first << " " << p1.second << endl;
//	cout << p2.first << " " << p2.second << endl;
//	return 0;
//}
//
//int main()
//{
//	pair<T1,T2> p1;����һ���յ�pair���� ��������Ԫ�طֱ���T1��T2����
//	���� ֵ��ʼ��  int ��ʼֵ��0 string ��ʼֵ��"" һ�����ַ���
//	pair<int,int> p1(1,0);
//	p.first ���� p�� ��Ϊfirst �Ĺ������ݳ�Ա
//	p.second ����p����Ϊsecond �Ĺ������ݳ�Ա
//	cout << p1.first << " " <<p1.second<< endl;
//	pair<T1,T2> p1(v1,v2);
//	����һ��pair���� ����������Ԫ�ص����ͷֱ���T1 �� T2 ����
//	����p1 �����е�first ��Ա��ʼ��Ϊ v1 second ��Ա��ʼ��Ϊv2
//	pair<int,int>p2(1, 0);
//	cout << p2.first << " " << p2.second << endl;
//	  p1 < p2 ���� pair ����֮���С������ �ȽϵĴ�����
//	 ��� p1.first<p2.first ����
//	(p1.first<p2.first)&&(p1.second<p2.second) ʱ p1<p2 �ŷ���true

//	�������pair�����first��second ��Ա������� ���������������
//	������ʹ����Ԫ�� == ������
//	if (p1 == p2)
//	{
//		cout << "true" << endl;
//	}
//	typedef pair<string, string> S;
//	S s1("hello", "world");//ʹ��typedef �������ô�����Ӽ�
//	cout << s1.first << ""<<s1.second << endl;
//	�����µ�pair����
//	��׼�ⶨ���make_pair ����

//	return 0;
//}