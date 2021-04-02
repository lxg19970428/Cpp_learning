#include<string>
#pragma once
class Stock {
private:
	std::string name;
	long share;
	double share_val;
	double total;
	void set_total() { total = share * share_val; };
public:
	Stock();
	~Stock();
	Stock(const std::string& a, long b, double c);
	void get_Stock(const std::string& a, long b, double price);
	void buy(long a, double price);
	void sell(long a, double price);
	void update(double price);
	void show() const;
	const Stock& topval(const Stock& a)const;
};

class lxg {
private:
	enum class gender { man, woman };
	enum class wc { man, woman };
	std::string name;
	int age;
	gender sex;
public:	
	lxg();
	void show();
};