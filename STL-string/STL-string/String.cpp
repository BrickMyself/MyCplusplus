#include<iostream>
#include<string>
#include<stdlib.h>
using namespace std;

////void TestString() 
////{    
////	string s1;   // 构造空的string类对象s1
////    string s5;          
////	//cout<<s1<<endl;
////	string s2("hello bit");   // 用C格式字符串构造string类对象s2  
////	//cout<<s2<<endl;
////	//string s3(10, 'a');       // 用10个字符'a'构造string类对象s3   
////	//cout<<s3<<endl;
////	//string s4(s2);            // 拷贝构造s4
////	//cout<<s4<<endl;
////	//string s5(s3, 5);         // 用s3中前5个字符构造string对象s5
////	//cout<<s5<<endl;
////	s2.append(".");//string& append(const char* s) 追加字符串
////	//s2.assign(s2);
////	//s2.append(s3);//append  追加字符串
////	cout<<s2.size()<<endl;//返回字符串有效字符串大小
////	cout<<s2.length()<<endl;//返回字符串有效字符串长度
////	cout<<s2.capacity()<<endl;//返回总空间大小
////	cout<<s2.empty()<<endl;//返回类型为bool类型 为空则为true 即非零 不为空则为假 为 false 返回值为0
////	s2.clear();//清空字符串的有效内容 不改变其空间大小
////	cout<<s2<<endl;
////	string s3("hello world");
////	s3.back();//返回字符串的最后一个字符
////	cout<<s3.back()<<endl;
////	cout<<s3<<endl;
////	s3.resize(5);//将有效字符串的长度变为 num 个  剩下的用 0 替代 超过容量之后会重新扩容
////	s3.resize(5,'a');//将有效字符变为n个  其余的用 char c 即一个字符替代
////	cout<<s3<<endl;
////	cout<<s2.compare(s3)<<endl;//比较两个字符串
////	//cout<<s2<<endl;
//// string s4 ( s3,2,5); 拷贝构造 用S3 的字符串中的位置: 2到5 的字符串内容来构造 s4 
////}
////void TestString1()
////{
////	string s1;
////	string s2("belive yourself ");
////	s1="chang ";
////	s1.push_back('w');//尾插一个字符 c 
////	s1.push_back('o');
////	s1.push_back('r');
////	s1.push_back('l');
////	s1.push_back('d');
////	cout<<s1<<endl;
////	s1+=(s2);//也就是调用s1.append(s2);
////	cout<<s1<<endl;  //string& operator+=(const string& str) 在 s1  后面追加字符串 s2
////	s2+=("you can do it");//string& operator+=(const char* s)// 在s2后面追加n个数 字符串
////	s2+=('.');// 相当于push_back(char c)函数尾插一个 char c 字符  
////	cout<<s2<<endl;
////	cout<<s2.find('f',0)<<endl;//从pos位置开始找 字符 c 找到了返回 该字符在字符串中的位置
////	//注意当字符串中没有这个字符时会显示整数的最大值
////	cout<<s2.rfind('f',20)<<endl;//从后往前找字符c 的位置 返回该字符在字符串中的位置
////	s2.substr(0,10);
////	cout<<s2.substr(0,10)<<endl;//截取字符串从 pos 到npos的字符
////	//  在String 类型的变量进行追加字符串时  可以使用 push_back 或者 append 或者 operator+= 不仅可以
////	//追加字符串也可以追加字符 c 因此 += 使用的比较多
////	//如果担心空间不够可以预估 并使用 reserve函数进行空间预留
////	s2.reserve(20);
////	cout<<s2<<endl;
////	swap(s1,s2);
////	cout<<s1<<endl;
////	cout<<s2<<endl;
////}
////void ResreveString()//翻转字符串
////{
////	string s1("hello");
////	if(s1.empty())
////	{
////		cout<<NULL<<endl;
////	}
////	int start=0;
////	int end=s1.size()-1;
////	while(start<end)
////	{
////		swap(s1[start],s1[end]);
////		++start;
////		--end;
////	}
////	cout<<s1<<endl;
////}
////void main()
////{
////	string s1;
////	string s4;
////	s1="addasda";
////	int i=0;
////	s1.at(i);
////	cout<<s1.at(i)<<endl;//访问 i处的字符
////	s1.pop_back();//删除最后一个字符
////	cout<<s1<<endl;
////	getline(cin,s4);// cin 以 空格 分割输入的字符串 而 getline 以换行符来分割
////	cout<<s4<<endl;
////	ResreveString();
////	//cout<<s1<<endl;
////	//TestString1();
////	system("pause");
////}
//void ChangeSmallsChar(string& s)
//    {
//        for(int i=0; i<s.size(); i++)
//        {
//            if(s[i]>='A'&&s[i]<='Z')
//            {
//                s[i]+=32;
//            }
//        }
//}
//void ADDtwoString(string s1,string s2)
//{
//
//
//
//}
//int main()
//{
//	string s1("HELLO");
//	string s2;
//	string s3;
//	s2="1473182371";
//    s3="9712371271";
//	reverse(s2.begin(),s2.end());
//	reverse(s3.begin(),s3.end());
//	cout<<s2<<endl;
//	cout<<s3<<endl;
//	ADDtwoString(s2,s3);
//	//ChangeSmallsChar(s1);
//	cout<<s1<<endl;
//	system("pause");
//	return 0;
//}
//int main()
//{
//	//char*s1="a";
//	//char s2[5];
//	//strcpy(s2,s1);
//	//printf("%p\n",s1);
//	//printf("%p",s2);
//	string s1("s");
//	string s2(s1);
//	printf("%p\n",s1);
//	printf("%p\n",s2);
//	system("pause");
//	return 0;
//}