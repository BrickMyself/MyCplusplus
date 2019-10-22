#include<iostream>
using namespace std;
void TestFuc(int a=10,int b=12,int c=30)
{
	cout<<a<<" "<<b<<" "<<c<<endl;
}
int main()
{
	//TestFuc();//没有传参，使用默认值为0
	//TestFuc(100);//传参则使用传过去的实参
	TestFuc(1,2);//打印为10 20 0则表示传参是从左到右传参经行匹配
	system("pause");
}