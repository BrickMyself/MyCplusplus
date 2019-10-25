#include<iostream>
#include<stdlib.h>
using namespace std;
class Date{
public:
	void Init(int _year,int _month,int _day)
	{
		year=_year;
		month=_month;
		day=_day;
	}
	void Print()
	{
	   cout<<this->day<<endl;
	}

private:
	int year;
	int month;
	int day;
};
int main()
{
	Date d1;
	Date d2;
	d1.Init(2019,10,25);
	//d2.Init(2021,6,8);
	d1.Print();
	//d2.Print();
	system("pause");
	return 0;
}
//class Student
//{
//double d;
//public:
//	int a;
//	/*void Print()
//	{
//		cout<<a<<endl;
//	}*/
//protected:
//	char s;
//};
//class Teacher
//{
//	int* ptr;
//public:
//	char d;
//};
//int main()
//{
//	cout<<sizeof(Student)<<endl;
//	cout<<sizeof(Teacher)<<endl;
//	system("pause");
//	return 0;
//}
//class Student
//{
//public:
//	void Cout();
//	char name[20];
//	int  age;
//	int  id;
//	void Init(char* _name,int _age,int _id,char* _address,int* _tell)
//	{
//		int i=0;
//		strcpy(name,_name);
//		age=_age;
//		id=_id;
//		strcpy(address,_address);
//
//		for(i=0;i<11;i++)
//		{
//			tell[i]=_tell[i];
//
//		}
//
//	}
//	void Print1()
//	{
//		cout<<name<<endl;
//		cout<<age<<endl;
//		cout<<id<<endl;
//				cout<<address<<endl;
//		for(auto e :tell)
//		{
//			cout<<e<<"";
//		}
//		cout<<endl;
//	}
//protected:
//	int tell[11];
//		void Print2()
//	{
//		cout<<name<<endl;
//		cout<<age<<endl;
//		cout<<id<<endl;
//				cout<<address<<endl;
//		for(auto e :tell)
//		{
//			cout<<e<<"";
//		}
//		cout<<endl;
//	}
//private:
//	char address[20];
//};
//void Student::Cout()
//{
//		cout<<name<<endl;
//		cout<<age<<endl;
//		cout<<id<<endl;
//				cout<<address<<endl;
//		for(auto e :tell)
//		{
//			cout<<e<<"";
//		}
//		cout<<endl;
//}
//int main()
//{
//	int a[11]={1,3,7,7,2,9,9,1,1,3,0};
//	Student zhangsan;
//	zhangsan.Init("张三",12,1,"西安",a);
//	//zhangsan.Print();
//	//cout<<zhangsan.name<<endl;
//	//cout<<zhangsan.age<<endl;
//	//cout<<zhangsan.id<<endl;
//	//cout<<zhangsan.address<<endl;
//	//for(auto e :tell)
//	//{
//	//		cout<<e<<"";
//	//}
//	////Print2();
//	system("pause");
//	return 0;
//}
////typedef struct Student
////{
////	int age;
////	char name[20];
////	int sex;
////	char address[20];
////	void StudentInit(int _age,char* _name,int _sex,char* _address)
////	{
////		age=_age;
////		strcpy(name, _name);
////		sex=_sex;
////		strcpy(address,_address);
////	}
////}Student;
////int main()
////{
////	Student a;
////	a.StudentInit(19,"小明",1,"西安");
////	cout<<a.age<<endl;
////	cout<<a.address<<endl;
////	cout<<a.name<<endl;
////	cout<<a.sex<<endl;
////	system("pause");
////	return 0;
////}