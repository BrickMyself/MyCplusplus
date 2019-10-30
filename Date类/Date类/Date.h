#include<iostream>
#include<stdlib.h>
using namespace std;
class Date
{
public:
	int GetMonthDay(int year,int month)//那一年，那一月的天数交给这个函数来获取
	{
		static int monthdays[13]={0,31,28,31,30,31,30,31,31,30,31,30,30};
		if(month==2 && (year%4==0 && year%100!=0)||(year %400==0))//p只有当是闰年的2月才返回29天
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
			 cout<<"输入错误"<<endl;//判断输入是否正确
		}
		
	}
	void Print()
	{
		cout<<year<<" "<<month<<" "<<day<<endl;
	}

	bool operator<(const Date& d)//对<号的运算符重载，判断两个日期的大小
	{
		if(year<d.year)//这里所有的都是判断为真的条件，其余的都为假。
		{
			return 1;
		}
		else if(year==d.year)//年相等的判断月
		{
			if(month<d.month)
			{
				return 1;
			}
			else if(month==d.month)//月相等的判断天
			{
				if(day<d.day)
				{
					return 1;
				}
			}
		}
		 return 0;
	}
	bool operator>(const Date& d)//对<号的复用，取反即可。
	{
		return !(*this <d);
	}
	bool operator<=(const Date& d)//对<和==复用
	{
		return (*this<d || *this ==d);
	}
	bool operator>=(const Date& d)//同理
	{
		return (*this >d)||(*this==d);
	}
	bool operator==(const Date& d)//判断是否相等返回0 或 1
	{
		return year==d.year&&
			month==d.month&&
			day==d.day;
	}
	bool operator!=(const Date& d)// == 的复用
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
		if(_day<0)//如果是加上一个负数
		{
			return *this-=_day;
		}
		day+=_day;//先把天数加起来，在判断这个月当前的天数是否是合法的。
		while(day>GetMonthDay(year,month))//获取当前月的天数
		{
			day-=GetMonthDay(year,month);//减掉当前月的天数
			if(month==12)//如果是12月，年份加一，月份置为一
			{
				month=1;
				year+=1;
			}
			else
				month++;//不是的话月份++
		}
		return *this;
	}
	Date operator-=(int _day)
	{
		if(_day<0)//如果是减一个负数相当于加一个正数
		{
			return *this+=_day;
		}
		day-=_day;//先减掉当前天数
		while(day<1)//如果不够的话，借一个月的天数，月份减一
		{
			if(month==1)//如果月份是1 ，年份减1 月份置为12
			{
				--year;
				month=12;
			}
			else
			{
				--month;
			}
			day+=GetMonthDay(year,month);//知道加到天数大于0为止，即日期合法
		}
		return *this;
	}
	int operator-(const Date&d)//日期类相减
	{
		Date max=*this;
		Date min=d;
		int flag=1;//用于标记+-符号位
		if(max<min)//找出日期小一点的那个
		{
			max=d;
			min=*this;
			flag=-1;
		}
		int n=0;//计数器，也就是两个日期相差的天数
		while(min!=max)//让小的加到和大的一样为止
		{
          ++min;
		  ++n;
		}
		return flag*n;
	}
	Date operator++()//++和-- 逻辑一样//返回++后的值
	{
	  *this+=1;
	  return *this;
	}

	Date operator++(int)//返回++之前的日期
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
