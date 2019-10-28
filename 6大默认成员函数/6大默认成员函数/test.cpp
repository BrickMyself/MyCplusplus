#include<iostream>
#include<stdlib.h>
using namespace std;
//class String
//{
//public:
//	String(const char* _str="xiaoming")
//	{
//		str=(char*)malloc(strlen(_str)+1);
//		strcpy(str,_str);
//		cout<<"String"<<endl;
//		cout<<"~String()"<<endl;
//	}
//	~String()
//	{
//		cout<<"~String()"<<endl;
//		free(str);
//	}
//private:
//	char *str;
//};
//class Student
//{
//public:
//	//String b;
//};
//int main()
//{
//	String c;
//	//a.b.~String();
//	system("pause");
//	return 0;
//}

//class Time
//{
//public:
//	Time()
//	{
//		cout<<"Time()"<<endl;
//	}
//private:
//	int hour;
//	int min;
//	int sec;
//};
//class Date
//{
//public:
//	int year;
//	int month;
//	int day;
//	Time t;
//};
//int main()
//{
//	Date d1;
//	system("pause");
//	return 0;
//}
//class Date
//{
//public:
//	Date()
//	{
//       year=2018;
//	   month=3;
//	   day=6;
//	}
//	Date(int _year=2109,int _month=5,int _day=5)//带餐构造函数
//	{
//		year=_year;
//		month=_month;
//		day=_day;
//	}
//void Print()
//	{
//		cout<<year<<" "<<month<<" "<<day<<endl;
//	}
//private:
//	int year;
//	int month;
//	int day;
//};
//int main()
//{
//	Date d1(2019,4,3);
//	d1.Print();
//	//Date d2(2018,5,6);
//	//d2.Print();
//	system("pause");
//	return 0;
//}
//class Date
//{
//public:
//	Date()//无参构造函数，初始化时给的是随机值
//	{}
//	Date(int _year,int _month,int _day)//带餐构造函数
//	{
//		year=_year;
//		month=_month;
//		day=_day;
//	}
//void Print()
//	{
//		cout<<year<<" "<<month<<" "<<day<<endl;
//	}
//private:
//	int year;
//	int month;
//	int day;
//};
//int main()
//{
//	Date d1;//注意是分号结尾，不然就成了声明一个返回值为Date类的无参函数
//	d1.Print();
//	Date d2(2019,2,3);//调用带参构造函数
//	d2.Print();
//	system("pause");
//	return 0;
//}
//class Date
//{
//public:
//	void Init(int _year,int _month,int _day)
//	{
//		year=_year;
//		month=_month;
//		day=_day;
//	}
//	void Print()
//	{
//		cout<<year<<" "<<month<<" "<<day<<endl;
//	}
//private:
//	int year;
//	int month;
//	int day;
//};
//int main()
//{
//	Date d1,d2;
//	d1.Init(2019,10,27);
//	d1.Print();
//	d2.Init(2021,6,8);
//	d2.Print();
//	system("pause");
//	return 0;
//}