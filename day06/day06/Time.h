#pragma once
#include<iostream>
#include <ostream>
class Time {
private:
	int hours;
	int minutes;
public:
	void addhour(int h);
	void addmin(int m);
	void reset(int h, int m);
	friend Time operator*(double a, const Time& b);
	Time operator+(const Time& t)const;
	Time operator*(double x)const;
	friend std::ostream& operator<<(std::ostream os,const Time &a);
	Time(int h, int m = 0);
	Time();
	void show()const;
};