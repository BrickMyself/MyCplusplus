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
//		cout<<"�����ڴ�ɹ�"<<endl;
//	}
//	free(ptr);
//	ptr=nullptr;
//	cout<<&ptr<<endl;
//	cout<<ptr<<endl;
//}
//void Test()
//{
//	cat *pa= new cat;//new��ʹ�÷��� new ����������+��������� һ����
//	//������������ͬ
//	delete pa;//�ͷ���Դ��delete �ӱ����� ������ͷ������Ŀռ�Ļ���[]
//	//�ڱ����ĺ���
//}
//int main()
//{
//	//Test();
//	Test1();//
//	//����˵��malloc��free����������Զ������͵Ĺ������������
//	system("pause");//������ӡ��
//	//cat()
//	//~cat()
//	//֤����new �� deleteһ���Զ�������cat�ı��� �Ĺ����е������Զ���
//	//�Ĺ������������
//	//��malloc ��free�᲻������أ�
//	return 0;
//}