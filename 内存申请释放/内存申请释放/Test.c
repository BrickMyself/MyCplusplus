//#include<stdio.h>
//#include<stdlib.h>
//int Cal_number(int n)
//{
//	int i=31;
//	int count=0;
//	int max;
//	max=count;
//	for(i=31; i>=0; i--)
//	{
//		if((n>>i)&1==1)
//		{
//			count+=1;
//		}
//		if((i<0)&&(n>>i)&1==0)
//		{
//			break;
//		}
//    }
//		if(max<count)
//		{
//			max=count;
//			count=0;
//		}
//		
//	return max;
//}
//int main()
//{
//	int n;
//	scanf("%d",&n);
//	Cal_number(n);
//	printf("%d",Cal_number(n));
//	system("pause");
//	return 0;
//}
//#include<iostream>
//#include<stdlib.h>
//using namespace std;
//class cat
//{
//public:
//	cat()
//		:quite(0)
//	{
//		cout<<"cat()"<<endl;
//	}
//	~cat()
//	{
//		cout<<"~cat()"<<endl;
//	}
//private:
//	int quite;
//};
//void Test1()
//{
//	cat* ptr=(cat*)malloc(1);
//	if(ptr!=nullptr)
//	{
//		cout<<"申请内存成功"<<endl;
//	}
//	free(ptr);
//	ptr=nullptr;
//	cout<<&ptr<<endl;
//	cout<<ptr<<endl;
//}
//void Test()
//{
//	cat *pa= new cat;//new的使用方法 new （操作符）+申请的类型 一般与
//	//变量名类型相同
//	delete pa;//释放资源是delete 加变量名 如果是释放连续的空间的话跟[]
//	//在变量的后面
//}
//int main()
//{
//	//Test();
//	Test1();//
//	//这里说明malloc和free并不会调用自定义类型的构造和析构函数
//	system("pause");//这里会打印出
//	//cat()
//	//~cat()
//	//证明在new 和 delete一个自定义类型cat的变量 的过程中调用了自定义
//	//的构造和析构函数
//	//而malloc 和free会不会调用呢？
//	return 0;
//}