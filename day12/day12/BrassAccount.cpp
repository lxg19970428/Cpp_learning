#include "BrassAccount.h"
#include<iostream>
using std::cout;
using std::endl;
Blass::Blass(const string& v1, long an, double b):name(v1),accountnumber(an),balance(b)
{
}

void Blass::savemoney(double s)
{
	cout << "������:" << s << endl;
	balance += s;
	cout << "�˻����Ϊ:" << balance << endl;
}

void Blass::drawmoney(double d)
{
	if (d >= balance) {
		cout << "ȡ�����: " << d << endl;
		balance -= d;
		cout << "�˻����: " << balance << endl;
	}
	else
		cout << "�˻�����:";
}

double Blass::check_balance()
{
	return balance;
}

void Blass::show_account()
{
	cout << "�˻���Ϣ����: " << endl << "����: " << name << ',' << "�˺�: " << accountnumber << ',' << "�˻����: " << balance << endl;
}

void Blass::set_balance(double b)
{
	if (b >= 0)
		balance = b;
	else
		cout << "���ý�����" << endl;
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
		cout << "����֧Ʊ����" << endl;
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
	cout << "�������ޣ�" << overdraw_limit << " ��������: " << overdraw_rate << " Ƿ��: " << overdraw_toatl << endl;
}

