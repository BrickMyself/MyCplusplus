#include<iostream>
#include<string>
#include<stdlib.h>
using namespace std;

////void TestString() 
////{    
////	string s1;   // ����յ�string�����s1
////    string s5;          
////	//cout<<s1<<endl;
////	string s2("hello bit");   // ��C��ʽ�ַ�������string�����s2  
////	//cout<<s2<<endl;
////	//string s3(10, 'a');       // ��10���ַ�'a'����string�����s3   
////	//cout<<s3<<endl;
////	//string s4(s2);            // ��������s4
////	//cout<<s4<<endl;
////	//string s5(s3, 5);         // ��s3��ǰ5���ַ�����string����s5
////	//cout<<s5<<endl;
////	s2.append(".");//string& append(const char* s) ׷���ַ���
////	//s2.assign(s2);
////	//s2.append(s3);//append  ׷���ַ���
////	cout<<s2.size()<<endl;//�����ַ�����Ч�ַ�����С
////	cout<<s2.length()<<endl;//�����ַ�����Ч�ַ�������
////	cout<<s2.capacity()<<endl;//�����ܿռ��С
////	cout<<s2.empty()<<endl;//��������Ϊbool���� Ϊ����Ϊtrue ������ ��Ϊ����Ϊ�� Ϊ false ����ֵΪ0
////	s2.clear();//����ַ�������Ч���� ���ı���ռ��С
////	cout<<s2<<endl;
////	string s3("hello world");
////	s3.back();//�����ַ��������һ���ַ�
////	cout<<s3.back()<<endl;
////	cout<<s3<<endl;
////	s3.resize(5);//����Ч�ַ����ĳ��ȱ�Ϊ num ��  ʣ�µ��� 0 ��� ��������֮�����������
////	s3.resize(5,'a');//����Ч�ַ���Ϊn��  ������� char c ��һ���ַ����
////	cout<<s3<<endl;
////	cout<<s2.compare(s3)<<endl;//�Ƚ������ַ���
////	//cout<<s2<<endl;
//// string s4 ( s3,2,5); �������� ��S3 ���ַ����е�λ��: 2��5 ���ַ������������� s4 
////}
////void TestString1()
////{
////	string s1;
////	string s2("belive yourself ");
////	s1="chang ";
////	s1.push_back('w');//β��һ���ַ� c 
////	s1.push_back('o');
////	s1.push_back('r');
////	s1.push_back('l');
////	s1.push_back('d');
////	cout<<s1<<endl;
////	s1+=(s2);//Ҳ���ǵ���s1.append(s2);
////	cout<<s1<<endl;  //string& operator+=(const string& str) �� s1  ����׷���ַ��� s2
////	s2+=("you can do it");//string& operator+=(const char* s)// ��s2����׷��n���� �ַ���
////	s2+=('.');// �൱��push_back(char c)����β��һ�� char c �ַ�  
////	cout<<s2<<endl;
////	cout<<s2.find('f',0)<<endl;//��posλ�ÿ�ʼ�� �ַ� c �ҵ��˷��� ���ַ����ַ����е�λ��
////	//ע�⵱�ַ�����û������ַ�ʱ����ʾ���������ֵ
////	cout<<s2.rfind('f',20)<<endl;//�Ӻ���ǰ���ַ�c ��λ�� ���ظ��ַ����ַ����е�λ��
////	s2.substr(0,10);
////	cout<<s2.substr(0,10)<<endl;//��ȡ�ַ����� pos ��npos���ַ�
////	//  ��String ���͵ı�������׷���ַ���ʱ  ����ʹ�� push_back ���� append ���� operator+= ��������
////	//׷���ַ���Ҳ����׷���ַ� c ��� += ʹ�õıȽ϶�
////	//������Ŀռ䲻������Ԥ�� ��ʹ�� reserve�������пռ�Ԥ��
////	s2.reserve(20);
////	cout<<s2<<endl;
////	swap(s1,s2);
////	cout<<s1<<endl;
////	cout<<s2<<endl;
////}
////void ResreveString()//��ת�ַ���
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
////	cout<<s1.at(i)<<endl;//���� i�����ַ�
////	s1.pop_back();//ɾ�����һ���ַ�
////	cout<<s1<<endl;
////	getline(cin,s4);// cin �� �ո� �ָ�������ַ��� �� getline �Ի��з����ָ�
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