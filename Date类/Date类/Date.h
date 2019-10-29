#include<iostream>
#include<stdlib.h>
using namespace std;
class Date
{
public:
	int GetMonthDay(int year,int month)
	{
		static int monthdays[13]={0,31,28,31,30,31,30,31,31,30,31,30,30};
		if(month==2 && (year%4==0 && year%100!=0)||(year %400==0))
		{
			return 29;
		}
		else return monthdays[month];
	}
	Date (int _year=1900,int _month=1,int _day=1)//全缺省的默认构造函数
	{
		year=_year;
		month=_month;
		day=_day;
		if(year<0 || month<0 || month>13 || day<0 || day>=GetMonthDay(year,month))
		{
			 cout<<"输入错误"<<endl;
		}
		
	}
	void Print()
	{
		cout<<year<<" "<<month<<" "<<day<<endl;
	}

	bool operator<(const Date& d)
	{
		if(year<d.year)
		{
			return 1;
		}
		else if(year==d.year)
		{
			if(month<d.month)
			{
				return 1;
			}
			else if(month==d.month)
			{
				if(day<d.day)
				{
					return 1;
				}
			}
		}
		else return 0;
	}
	bool operator>(const Date& d)
	{
		return !(*this <d);
	}
	bool operator<=(const Date& d)
	{
		return (*this<d || *this ==d);
	}
	bool operator>=(const Date& d)
	{
		return (*this >d)||(*this==d);
	}
	bool operator==(const Date& d)
	{
		return year==d.year&&
			month==d.month&&
			day==d.day;
	}
	bool operator!=(const Date& d)
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
		ret-=day;
		return ret;
	}
	Date operator+=(int _day)
	{
		if(_day<0)
		{
			return *this-=_day;
		}
		day+=_day;
		while(day>GetMonthDay(year,month))
		{
			day-=GetMonthDay(year,month);
			if(month==12)
			{
				month=1;
				year+=1;
			}
			else
				month++;
		}
		return *this;
	}
	Date operator-=(int _day)
	{
		if(_day<0)
		{
			return *this+=day;
		}
		day-=_day;
		while(day<1)
		{
			if(month==1)
			{
				--year;
				month=12;
			}
			else
			{
				--month;
			}
			day+=GetMonthDay(year,month);
		}
		return *this;
	}
	int operator-(const Date&d)//日期类相减
	{
		Date max=*this;
		Date min=d;
		int flag=1;
		if(*this<min)
		{
			max=d;
			min=*this;
			flag=-1;
		}
		int n=0;
		while(min!=max)
		{
          ++min;
		  ++n;
		}
		return flag*n;
	}
	Date operator++()//++和-- 逻辑一样
	{
	  *this+=1;
	  return *this;
	}

	Date operator++(int)
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
