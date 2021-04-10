#pragma once
#include<iostream>
#include<string>
using std::string;
class Tableplayer {
private:
	string name;
	bool Hastable;
public:
	Tableplayer(const string& v1 = "none", bool v2=false);
	void show();
	void set_table(bool u);

};

class Ratedplayer :public Tableplayer {
private:
	int rated;
public:
	Ratedplayer(int i=0, const string& v1="none", bool v2=false);
	Ratedplayer(int i, Tableplayer& v);
	void set_rated(int r);
	void show_rated();
};