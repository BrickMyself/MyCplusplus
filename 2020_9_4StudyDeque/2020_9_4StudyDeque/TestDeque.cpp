#include<iostream>
#include<deque>
#include<string>
#include<list>
using namespace std;
//deque ��˫�˶���  ������һͷ��һͷ�������Ե�֪  deque�����˶����Խ��в����ɾ����һ������  ���
//��ͷ���β�廹��ͷɾβɾ����Ч�ʱȽϸߵ�  �����߶����Զ�̬������  ���� ��  �ռ��ǲ������� 
//�Ƿֿ��  ����  vector ������������һ�οռ�  ���  deque�ײ��ʵ���ǱȽϸ��ӵ� 
//Ϊ���γɱ����ϵĿռ�����   �ײ㽻��������������



//deque ��ʵ��STL���ǲ������õ�  ��Ϊʹ��  ˫�˶��е��龰��  ʹ��vector ����  
//����  STL�л���  stack  �� queue  �Ǿ���ʹ�õ�  ��  deque ����Ϊ���������ĵײ�ṹ
void Test1()//����deque�Ĺ��췽��
{

	deque<int> dq;//����յ�deque����
	deque<int> dq2(5, 10);//��n��value������deque���� ������ֵʱ�������͵�Ĭ��ֵ������
	deque<int>dq4(dq2.begin(), dq2.end());//����һ�η�Χ�ڵ�Ԫ��������һ��deque���� ͨ���ǵ�������Χ
	deque<int> dq3(dq2);//�������캯��
	for (auto e : dq2)
	{
		cout << e << endl;
	}
	cout << endl;
	for (auto e : dq4)
	{
		cout << e << endl;
	}
}
void Test2()//deque�ĵ��������з��ʵķ���
{

	deque<int> deq;
	deq.push_back(1);
	deq.push_back(3);
	deq.push_back(2);
	deq.push_back(6);
	deq.push_back(3);
	deq.push_back(4);
	deque<int>::iterator ite = deq.begin();
	cout << "��ͨ�������������Ԫ��: ";
	while (ite != deq.end())//��ͨ�������������Ԫ��
	{
		*ite += 2;
		cout << *ite << " ";
		++ite;
	}
	cout << endl;
	deque<int>::reverse_iterator rite = deq.rbegin();//��ͨ�������������Ԫ��
	cout << "��ͨ�������������Ԫ��: ";
	while (rite != deq.rend())
	{
		*rite += 3;
		cout << *rite << " ";
		++rite;
	}
	cout << endl;
	deque<int>::const_iterator cite = deq.cbegin();//const���������
	cout << "const�������������Ԫ��: ";
	while (cite != deq.cend())
	{
		//*cite+=1;�������޸�
		cout << *cite << " ";
		++cite;
	}
	cout << endl;
	deque<int>::const_reverse_iterator crite = deq.crbegin();//const���������
	cout << "const�������������Ԫ��: ";
	while (crite != deq.crend())
	{
		cout << *crite << " ";
		++crite;
	}
	cout << endl;
}
void Test3()//deque����������
{
	deque<int> deq1;
	deque<string> deq2;
	deq1.push_back(1);
	deq2.push_front("he");
	cout << deq1.size() << endl;
	//cout << deq2.size() << deq2.empty() << endl;
}
void Print(deque<int>&deq)
{
	for (auto e : deq)
	{
		cout << e << endl;
	}
	cout << endl;
}
void Test4()//deque��Ԫ�ط��ʲ���
{
	//deque��֧���������Ԫ�ص�
	deque<int> deq(5, 10);
	cout << deq[3] << endl;
	cout << deq.empty() << endl;//Ϊ�շ��� 0  ����ķ��� false
	deq.resize(10);
	Print(deq);
	deq.resize(5, 3);//������Ŀռ�Ż��� �����ֵ���������   ������Ĭ��ֵ�����
	Print(deq);
}

void Test5()//deque  ����ط��ʲ���
{
	deque<int> deq(5, 10);
	deque<int> deq2(3, 2);
	deq.assign(6, 2);//Ҳ���Խ�dequ�����޸ĳ�n��  val   �͹���ʱ������ͬ��֮��
	deq.assign(deq2.begin(), deq2.end());//ʹ�õ�����λ�ý����޸�deque�����Ԫ������
	Print(deq);
	Print(deq2);
	deque<int> deq;
	deq.push_front(1);
	deq.push_front(2);
	deque<int>::iterator ite = deq.begin();
	deq.insert(ite+2, 3);
	deq.push_front(3);
	deq.push_front(4);
	deq.pop_front();
	deq.push_back(5);
	deq.push_back(6);
	deq.pop_back();
	cout << deq.back() << " " << deq.front() << endl;
	Print(deq);
	deq.erase(deq.begin());//ɾ��������λ�õ�Ԫ��
	deq.erase(deq.begin(), deq.begin() + 1);//ɾ��������λ�������Ԫ��
	deque<int> deq3(5, 10);
	deque<int> deq4(3, 4);
	deque<int> deq5(deq3.begin(), deq4.end());
	Print(deq5);
}
void Test6()
{
	list<int> l;
	l.push_back(1);
	list<int>::iterator ite = l.begin();
	//l.insert(ite + 1,3);
}
void Test7()
{
}
int main()
{
	//Test1();
	//Test2();
	//Test3();
	//Test4();
	Test2();
	return 0;
}