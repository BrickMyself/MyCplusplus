#include<iostream>
using namespace std;
class Father
{
public:
	void  Print()
	{
		cout <<"Father:"<< "money:" << money << "car:" << car << endl;
	}
	int money=10;
	int car=1;
};
class Son: public Father
{
public:
	void PrintBaseElement()
	{
		//Father::Print();
	}
	void Print1()
	{
		//cout << "Father: money:" << Father::money << "car:" << Father::car << endl;
		cout <<"Son:"<<"money:"<< money << "car: " << car << endl;
	}

protected:
	int age;
	int money = 100;
	int car = 2;
};
int main()
{
	Son s;
	//s.Print1();
	//s.PrintBaseElement();
	//Son s;
	//Father f;
	//f = s;//���������Ը�ֵ���������
	//Father* p = &s;//Ҳ���Ը�ֵ�������ָ��
	//Father& p1 = s;//Ҳ���Ը�ֵ�����������
	////s = f;//���Ǹ��಻�ܸ�ֵ���������
	return 0;
}
#include<iostream>
using namespace std;
class Father 
{
public:
	Father()
	{
		cout << "Father()" << endl;
	}
	//Father(const int _money = 10, const int _car = 2)
	//	:money(_money)
	//	 ,car(_car)
	//{
	//	cout << "Father() ���캯��" << endl;
	//}
	//Father(const Father& f)
	//	:money(f.money)
	//	,car(f.car)
	//{
	//	cout << "Father(const Father& f) �������캯��" << endl;
	//}
	Father& operator=(const Father&f)
	{
		cout << "Father& operator=(const Father&f) " << endl;;
		if (this != &f)
		{
			money = f.money;
			car = f.car;
		}
		return *this;
	}
	void Print()
	{
		//cout << "Father: money:" << money <<" car:"<< car << endl;
	}
	~Father()
	{
		cout << "~Father()��������" << endl;
	}
protected:	
	int money;
	int car;
};
class Son :public Father
{
public:
	Son(const int _money, const int _car, int _book)
		/*:Father()*/
		:book(_book)
	{
		cout << "Son() ���캯��" << endl;
	}
	//Son(const Son&f)
	//	:Father(f)
	//	,book(f.book)
	//{
	//	cout << "Son(const Son&f) �������캯��" << endl;
	//}
	Son& operator=(const Son&s)
	{
		
		if (this != &s)//��ֹ�Լ����Լ���ֵ
		{
			Father::operator=(s);
			book = s.book;
		}

		return *this;
	}
	void Print1()
	{ 
		//cout << "Son: money:" << money << " car:" << car << " book:"<<book<<endl;
	}
	~Son()
	{
		cout << "~Son ��������" << endl;
	}
protected:
	int book;
};
int main()
{
	Son s1(100, 20, 15);
	//s1.Print();
	//s1.Print1();
	Son s2(s1);
	//s2.Print();
	//s2.Print1();
	Son s3(10, 35, 5);
	s1 = s3;
	//s1.Print();
	//s1.Print1();
	return 0;
}
#include<iostream>
using namespace std;
class Father 
{
private://���캯��˽������಻�ܱ��̳�
	Father()
	{

	}
};
class Son :public Father
{
public:
	//Son()
	//{

	//}
protected:
	int age;
};
int main()
{
	Son s;
	return 0;
}
#include<iostream>
using namespace std;
class A
{
public:
	friend void Print(const A& a, const B&b);//�������Ԫ�������ܱ�����̳У�
	//��ô���޷���������ı�����˽�еĳ�Ա

protected:
	int car = 10;
};
class B : public A
{

protected:
	int book = 5;
};

void Print(const A& a,const B& b)
{
	//cout << a.car << " " << b.book;
}
int main()
{
	A a;
	B b;
	Print(a, b);
	return 0;
}
#include<iostream>//�������μ̳�������̳�
using namespace std;
class A
{
public:
	int a;
};
class B :virtual public A
{
public:
	int b;
};
class C :virtual public A
{
public:
	int c;
};
class D :public B, public C
{
public:
	int d;
};
int main()
{
	A a;
	B b;
	C c;
	D d;
	printf("A::a.a=%p\n", &a.a);
	printf("B::b.a=%p\n", &b.a);
	printf("B::b.b=%p\n", &b.b);
	printf("C::c.a=%p\n", &c.a);
	printf("C::c.c=%p\n", &c.c);
	printf("D::b=%p\n", &D::b);
	printf("D::c=%p\n", &D::c);
	printf("D::d.d=%p\n", &d.d);
	printf("D::B::A::a=%p\n", &D::B::A::a);
	printf("D::C::A::a=%p\n", &D::C::A::a);
	return 0;
}