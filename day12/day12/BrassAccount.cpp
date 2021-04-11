#include "BrassAccount.h"
#include<iostream>
using std::cout;
using std::endl;
Blass::Blass(const string& v1, long an, double b):name(v1),accountnumber(an),balance(b)
{
}

void Blass::savemoney(double s)
{
	cout << "存入金额:" << s << endl;
	balance += s;
	cout << "账户余额为:" << balance << endl;
}

void Blass::drawmoney(double d)
{
	if (d >= balance) {
		cout << "取出金额: " << d << endl;
		balance -= d;
		cout << "账户余额: " << balance << endl;
	}
	else
		cout << "账户余额不足:";
}

double Blass::check_balance()
{
	return balance;
}

void Blass::show_account()
{
	cout << "账户信息如下: " << endl << "姓名: " << name << ',' << "账号: " << accountnumber << ',' << "账户余额: " << balance << endl;
}

void Blass::set_balance(double b)
{
	if (b >= 0)
		balance = b;
	else
		cout << "设置金额出错" << endl;
}

BlassPlus::BlassPlus(const string& v1, long an, double b,double l, double r, double t ):overdraw_limit(l), overdraw_rate(r), overdraw_toatl(t), Blass(v1,an,b)
{
}

BlassPlus::BlassPlus(const Blass& v,double l, double r, double t ):overdraw_limit(l),overdraw_rate(r),overdraw_toatl(t),Blass(v)
{
}

void BlassPlus::drawmoney(double d)
{
	double b = check_balance();
	if (d <= b) {
		Blass::drawmoney(d);
	}
	else if (d > b && d < (b + overdraw_limit-overdraw_toatl)) {
		Blass::drawmoney(b);
		overdraw_toatl = (d - b) * (1 + overdraw_rate / 100);
	}
	else
		cout << "超出支票上线" << endl;
}

void BlassPlus::set_limit(double l)
{
	overdraw_limit = l;
}

void BlassPlus::set_rate(double r)
{
	overdraw_rate = r;
}

void BlassPlus::show_account()
{
	Blass::show_account();
	cout << "贷款上限：" << overdraw_limit << " 贷款利率: " << overdraw_rate << " 欠款: " << overdraw_toatl << endl;
}

