#include<iostream>
#include<stdlib.h>
using namespace std;
class Date
{
public:
	int GetMonthDay(int year,int month)//��һ�꣬��һ�µ��������������������ȡ
	{
		static int monthdays[13]={0,31,28,31,30,31,30,31,31,30,31,30,30};
		if(month==2 && (year%4==0 && year%100!=0)||(year %400==0))//pֻ�е��������2�²ŷ���29��
		{
			return 29;
		}
		else return monthdays[month];
	}
	Date (int _year=1900,int _month=1,int _day=1)//ȫȱʡ��Ĭ�Ϲ��캯��
	{
		year=_year;
		month=_month;
		day=_day;
		if(year<0 || month<0 || month>13 || day<0 || day>=GetMonthDay(year,month))
		{
			 cout<<"�������"<<endl;//�ж������Ƿ���ȷ
		}
		
	}
	void Print()
	{
		cout<<year<<" "<<month<<" "<<day<<endl;
	}

	bool operator<(const Date& d)//��<�ŵ���������أ��ж��������ڵĴ�С
	{
		if(year<d.year)//�������еĶ����ж�Ϊ�������������Ķ�Ϊ�١�
		{
			return 1;
		}
		else if(year==d.year)//����ȵ��ж���
		{
			if(month<d.month)
			{
				return 1;
			}
			else if(month==d.month)//����ȵ��ж���
			{
				if(day<d.day)
				{
					return 1;
				}
			}
		}
		 return 0;
	}
	bool operator>(const Date& d)//��<�ŵĸ��ã�ȡ�����ɡ�
	{
		return !(*this <d);
	}
	bool operator<=(const Date& d)//��<��==����
	{
		return (*this<d || *this ==d);
	}
	bool operator>=(const Date& d)//ͬ��
	{
		return (*this >d)||(*this==d);
	}
	bool operator==(const Date& d)//�ж��Ƿ���ȷ���0 �� 1
	{
		return year==d.year&&
			month==d.month&&
			day==d.day;
	}
	bool operator!=(const Date& d)// == �ĸ���
	{
		return (!(*this ==d));
	}

	Date operator+(int _day)
	{
		Date ret(*this);
		ret+=_day;
		return ret;
	}
	Date operator-(int _day)
	{
		Date ret=*this;
		ret-=_day;
		return ret;
	}
	Date operator=(const Date& d)
	{
		year=d.year;
		month=d.month;
		day=d.day;
		return *this;
	}
	Date operator+=(int _day)
	{
		if(_day<0)//����Ǽ���һ������
		{
			return *this-=_day;
		}
		day+=_day;//�Ȱ����������������ж�����µ�ǰ�������Ƿ��ǺϷ��ġ�
		while(day>GetMonthDay(year,month))//��ȡ��ǰ�µ�����
		{
			day-=GetMonthDay(year,month);//������ǰ�µ�����
			if(month==12)//�����12�£���ݼ�һ���·���Ϊһ
			{
				month=1;
				year+=1;
			}
			else
				month++;//���ǵĻ��·�++
		}
		return *this;
	}
	Date operator-=(int _day)
	{
		if(_day<0)//����Ǽ�һ�������൱�ڼ�һ������
		{
			return *this+=_day;
		}
		day-=_day;//�ȼ�����ǰ����
		while(day<1)//��������Ļ�����һ���µ��������·ݼ�һ
		{
			if(month==1)//����·���1 ����ݼ�1 �·���Ϊ12
			{
				--year;
				month=12;
			}
			else
			{
				--month;
			}
			day+=GetMonthDay(year,month);//֪���ӵ���������0Ϊֹ�������ںϷ�
		}
		return *this;
	}
	int operator-(const Date&d)//���������
	{
		Date max=*this;
		Date min=d;
		int flag=1;//���ڱ��+-����λ
		if(max<min)//�ҳ�����Сһ����Ǹ�
		{
			max=d;
			min=*this;
			flag=-1;
		}
		int n=0;//��������Ҳ��������������������
		while(min!=max)//��С�ļӵ��ʹ��һ��Ϊֹ
		{
          ++min;
		  ++n;
		}
		return flag*n;
	}
	Date operator++()//++��-- �߼�һ��//����++���ֵ
	{
	  *this+=1;
	  return *this;
	}

	Date operator++(int)//����++֮ǰ������
	{
		Date tmp=*this;
		*this+=1;
		return tmp;
	}

private:
	int year;
	int month;
	int day;
};
