#include<iostream>
#include<string>
#include<assert.h>
using namespace std;
class String{
	friend ostream& operator<<(ostream &out, const String &s);//ÓÑÔªº¯Êý
public:
	String(const char* str=" ")
	{
		if(str==nullptr)
		{
			assert(false);
			return;
		}
		else
		_str=new char[strlen(str)]+1;
		strcpy(_str,str);

	}
	~String()
	{
		if(_str)
		{
			delete[]_str;
			_str=nullptr;
		}
	}


private:
	char* _str;


};
ostream& operator<<(ostream &out, const String &s)//
{
	out<<s._str;
	return out;
}
int main()
{
	String s2("hello");
	cout<<s2<<endl;
	system("pause");
	return 0;
}