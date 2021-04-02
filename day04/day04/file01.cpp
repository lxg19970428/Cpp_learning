#include<iostream>
#include"stock.h"

Stock::Stock()
{
	name = "no name";
	share = 0;
	share_val = 0.0;
	total = 0.0;
}

Stock::~Stock()
{
	std::cout << name<<"��������������"<<std::endl;
}

Stock::Stock(const std::string& a, long b, double c)
{
	name = a;
	share = b;
	share_val = c;
	set_total();
}

void Stock::get_Stock(const std::string& a, long b, double price) {
	name = a;
	share = b;
	share_val = price;
	set_total();
}

void Stock::buy(long a, double price)
{
	if (a < 0) {
		std::cout << "���ܹ���ֵ";
	}
	else{
		share += a;
		share_val = price;
		set_total();
	}
		
}

void Stock::sell(long a, double price)
{	
	if (a < 0) {
		std::cout << "���ܳ��۸�ֵ";
	}
	else if (a > share) {
		std::cout << "���ܳ��۸������ķݶ�"<<"\n";
	}
	else {
		share -= a;
		share_val = price;
		set_total();
	}
}

void Stock::update(double price)
{
	share_val = price;
	set_total();
}

void Stock::show() const
{
	using std::cout;
	cout << "��Ʊ�۸� " << name << "\n" << "��Ʊ���У� " << share << "  " << "���ɼ۸�" << share_val << "  " << "��Ʊ�ܼ�ֵ��" << total << "\n";
}

const Stock& Stock::topval(const Stock& a) const
{
	if (total > a.total)
		return *this;
	else
		return a;

	// TODO: �ڴ˴����� return ���
}

