#include<iostream>
#include<stdlib.h>
using namespace std;
void f(int) 
{  
	cout<<"f(int)"<<endl; 
} 
void f(int*) 
{  
	cout<<"f(int*)"<<endl; 
} 
int main() 
{  
	f(0);  
	f(NULL);  
	f((int*)NULL);
	f(nullptr);
	system("pause");
	return 0; 
}
//int main()
//{
//	int arr[10]={0,1,2,3,4,5,6,7,8,9};
//	int len=sizeof(arr)/sizeof(arr[0]);
//	int i=0;
//	for(i=0; i<len; i++)
//	{
//        cout<<arr[i]<<" ";
//	}
//	cout<<endl;
//	for(auto a : arr)//��Χfor
//	{
//		cout<<a<<" ";
//	}
//	cout<<endl;
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int a[10];
//	auto b[10]={0};//����ʹ��
//	system("pause");
//	return 0;
//}
//void TestAuto(auto a)
//{
//
//
//}
//int main()
//{
//	auto a=10,b=12;
//	auto c=1.2,d=12;//ǰ�����Ͳ�ͬ
//}
//int main()
//{
//	int x=10;
//	auto  a=&x;
//	auto* b=&x;
//	auto& c=x;
//	cout<<a<<" "<<b<<" "<<c<<endl;
//	cout<<typeid(a).name()<<endl;//��ָ����÷�
//	cout<<typeid(b).name()<<endl;
//	cout<<typeid(c).name()<<endl;
//	system("pause");
//	return 0;
//}
//int  TestAuto()
//{
//
//	return 10;
//}
//int main()
//{
//	int a=10;
//	auto b=a;
//	auto c='s';
//	auto d=1.2;
//	auto e=TestAuto();
//	//auto f;
//	cout<<typeid(b).name()<<endl;//�������������ӡ���������������ͣ������ﲻ��
//	cout<<typeid(c).name()<<endl;//���ܣ��Ժ����ϸ����
//	cout<<typeid(d).name()<<endl;
//	cout<<typeid(e).name()<<endl;
//	system("pause");
//	return 0;
//}
