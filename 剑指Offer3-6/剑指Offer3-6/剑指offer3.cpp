////��ָoffer ������ 3���������ظ�������
////��Ŀ��
////��һ������Ϊ n ������ nums ����������ֶ��� 0��n - 1 �ķ�Χ�ڡ�
////������ĳЩ�������ظ��ģ�����֪���м��������ظ��ˣ�Ҳ��֪��ÿ�������ظ��˼��Ρ�
////���ҳ�����������һ���ظ������֡�
////
////ʾ�� 1��
////���룺
////> [2, 3, 1, 0, 2, 5, 3]
////
////�����
////> 2 �� 3
//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//void FindRepeatNumber(vector<int>&v)
//{
//	sort(v.begin(), v.end());//C++���õ�������  �������ݵĲ�ͬ�в�ͬ���㷨���ײ�����Ż�֮��Ŀ������򣬵�Ȼ���������������㷨�������ݶ���;  
//	int i = 0;
//	for (i = 1; i < v.size(); i++)
//	{
//		if (v[i - 1] != v[i])//���������v[i]��v[i+1]�Ƚϵ�Ϊ���һ��Ԫ�ؾͻ����Խ��
//		{
//			i++;
//		}
//		if (v[i - 1] == v[i])
//		{
//			cout << v[i];
//		}
//	}
//}
//void FindRepeatNumber1(vector<int>&v)//��ϣ��ķ���
//{
//
//}
//int FindRepeatNumber2(vector<int>&v)//���ҷ�
//{
//	int i = 0;
//	for (i = 0; i < v.size(); i++)
//	{
//		while (i != v[i])
//		{
//			if (v[i]==v[v[i]])
//			{
//				return v[i];
//				
//			}
//			int temp = v[v[i]];
//			v[v[i]] = v[i];
//			v[i] = temp;
//		}
//	}
//	return -1;
//}
//
//int main()
//{
//	vector<int> v;
//	v.push_back(1);
//	v.push_back(2);
//	v.push_back(5);
//	v.push_back(4);
//	v.push_back(3);
//	v.push_back(0);
//	v.push_back(6);
//	//FindRepeatNumber(v);
//	FindRepeatNumber2(v);
//
//	return 0;
//}