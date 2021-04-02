#include<iostream>
#include "stock.h"

lxg::lxg()
{
	name = "no name";
	age = 23;
	sex = gender::man;
}

void lxg::show()
{	
	using std::cout;
	cout << name << '\n' << age << '\n' ;
}
