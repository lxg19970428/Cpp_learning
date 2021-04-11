#pragma once
#include<string>
using std::string;
class Blass {
private:
	string name;
	long accountnumber;
	double balance;
public:
	Blass(const string& v1 = "nobody", long an = -1, double b = 0);
	void savemoney(double s);
	virtual void drawmoney(double d);
	double check_balance();
	virtual void show_account();
	void set_balance(double b);
	virtual ~Blass() {};
};

class BlassPlus :public Blass {
private:
	double overdraw_limit;
	double overdraw_rate;
	double overdraw_toatl;
public:
	BlassPlus(const string& v1 = "nobody", long an = -1, double b = 0,double l = 500, double r = 11.125, double t = 0 );
	BlassPlus(const Blass& v,double l, double r, double t );
	virtual void drawmoney(double d);
	void set_limit(double l);
	void set_rate(double r);
	void repay() { overdraw_toatl = 0; }
	virtual void show_account();


};