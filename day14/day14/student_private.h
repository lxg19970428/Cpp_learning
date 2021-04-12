#include<iostream>
#include<valarray>
#include<string>
using namespace std;

class Student :private string, private valarray<double>
{
private:
	typedef valarray<double> ArrayDb;
	ostream& arrayout(ostream& os) const;
public:
	using ArrayDb::operator[];
	Student() :string("Null Student"), ArrayDb() {};
	explicit Student(const string& v) :string(v), ArrayDb() {};
	explicit Student(int n) :string("Null Student"), ArrayDb(n) {};
	Student(const string& v, int n) :string(v), ArrayDb(n) {};
	Student(const string& v, const ArrayDb& s) :string(v), ArrayDb(s) {}
	Student(const char* p1, const double* p2, int n) :string(p1), ArrayDb(p2, n) {};
	~Student() {};
	double average();
	string& showname();
	double& operator[](int i);
	double operator[](int i) const;

	friend ostream& operator<<(ostream& os, Student& v);
	friend istream& operator>>(istream& is, Student& v);
	friend istream& getline(istream& is, Student& v);



};
