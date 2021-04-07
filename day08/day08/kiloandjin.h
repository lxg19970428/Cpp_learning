#pragma once
#include<iostream>
class weight {
private:
	double kilo;
	double jin;
	double liang;
public:
	weight(double k);
	weight(double j, double l);
	weight();
	void show();
	operator double();
	operator int();
};