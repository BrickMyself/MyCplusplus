#include"Date.h"
void test()
{
	//Date d1(2018,4,5);
	//Date d2(2018.4,7);
	//d1.Print();
	//cout<<(d1<d2)<<endl;
	//cout<<(d1==d2)<<endl;
	//cout<<(d1<=d2)<<endl;
	//cout<<(d1>=d2)<<endl;
	//cout<<(d1!=d2)<<endl;
 //   Date d3=d1+=29;
	//d3.Print();
	//d1-=29;
	//d1.Print();
	Date d1(2019,3,4);
	d1.Print();
	/*Date d4=d1+40;
	d4.Print();*/

	//(++d1).Print();
	Date d2(2019,5,3);
	cout<<(d2-d1)<<endl;
	/*Date d2(2019,5,6);
	cout<<(d2-d1)<<endl;*/
}
int main()
{
	test();
	system("pause");
	return 0;
}