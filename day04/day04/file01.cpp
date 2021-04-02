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
	std::cout << name<<"析构函数被调用"<<std::endl;
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
		std::cout << "不能购买负值";
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
		std::cout << "不能出售负值";
	}
	else if (a > share) {
		std::cout << "不能出售高于您的份额"<<"\n";
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
	cout << "股票价格： " << name << "\n" << "股票持有： " << share << "  " << "单股价格：" << share_val << "  " << "股票总价值：" << total << "\n";
}

const Stock& Stock::topval(const Stock& a) const
{
	if (total > a.total)
		return *this;
	else
		return a;

	// TODO: 在此处插入 return 语句
}

