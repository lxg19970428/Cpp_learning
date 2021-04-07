#include "kiloandjin.h"

weight::weight(double k)
{
	kilo = k;
	jin = int(k * 2);
	liang = 10*(k * 2 - int(k * 2));
}

weight::weight(double j, double l) {
	jin = j;
	liang = l;
	kilo = (jin + liang/10) / 2;
}

weight::weight() {
	jin = liang = kilo = 0;
}

void weight::show() {
	std::cout << "公斤制:" << kilo << "公斤" << std::endl;
	std::cout << "市斤制:" << jin << "斤 " <<liang<<"两"<< std::endl;
}

weight::operator double() {
	return kilo;
}

weight::operator int() {
	return int(kilo + 0.5);                                                                                                                                                                                                                                                                                  
}