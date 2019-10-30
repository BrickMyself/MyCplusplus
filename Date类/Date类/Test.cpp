#include"Date.h"
void test()
{
	Date d1(2019,4,5);
	d1.Print();
	Date d2(2018,4,5);
	d2.Print();
	cout<<(d1<d2)<<endl;
	cout<<(d1>d2)<<endl;
	cout<<(d1<=d2)<<endl;
	cout<<(d1>=d2)<<endl;
	cout<<(d1==d2)<<endl;
	cout<<(d1!=d2)<<endl;
	Date d3=d1+60;
	d3.Print();
	Date d4=(d1-9);
	d4.Print();
	cout<<(d1-d2)<<endl;
	d1++.Print();
	(++d1).Print();
}
int main()
{
	test();
	system("pause");
	return 0;
}