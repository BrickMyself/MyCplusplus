#include<iostream>
using namespace std;
void TestFuc(int a=10,int b=12,int c=30)
{
	cout<<a<<" "<<b<<" "<<c<<endl;
}
int main()
{
	//TestFuc();//û�д��Σ�ʹ��Ĭ��ֵΪ0
	//TestFuc(100);//������ʹ�ô���ȥ��ʵ��
	TestFuc(1,2);//��ӡΪ10 20 0���ʾ�����Ǵ����Ҵ��ξ���ƥ��
	system("pause");
}