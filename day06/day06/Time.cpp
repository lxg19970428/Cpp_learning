#include<iostream>
#include "Time.h"

void Time::addhour(int h)
{
	hours += h;
}

void Time::addmin(int m)
{
	minutes += m;
	hours += minutes / 60;
	minutes = minutes % 60;
}

void Time::reset(int h, int m)
{
	hours = h;
	minutes = m;
}



Time Time::operator+(const Time& t)const
{
	Time s;
	s.minutes = minutes + t.minutes;
	s.hours = hours + t.hours + s.minutes / 60;
	s.minutes = s.minutes % 60;
	return s;
}

Time Time::operator*(double x) const
{	
	Time t;
	t.minutes = (hours * 60 + minutes) * x;
	t.hours = t.minutes / 60;
	t.minutes = t.minutes % 60;
	return t;
}


Time::Time(int h, int m)
{
	hours = h;
	minutes = m;
}

Time::Time()
{
	hours = minutes = 0;
}

void Time::show() const
{
	std::cout << "时间为: " << hours << "小时" << minutes << "分钟"<<std::endl;
}

Time operator*(double a, const Time& b)
{
	Time t;
	t.minutes = (b.hours * 60 + b.minutes) * a;
	t.hours = t.minutes / 60;
	t.minutes = t.minutes % 60;
	return t;
}

std::ostream& operator<<(std::ostream os, const Time& a)
{
	os << a.hours << "小时" << a.minutes << "分钟" << std::endl;
	return os;
}
