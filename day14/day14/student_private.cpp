#include "student_private.h"

ostream& operator<<(ostream& os, Student& v)
{
	os << "学生" << v.showname() << "信息如下: " << endl;
	v.arrayout(os);
	return os;
}

istream& operator>>(istream& is, Student& v)
{
	is >> (string&)v;
	return is;
}

istream& getline(istream& is, Student& v)
{
	getline(is,((string&)v));
	return is;
}

ostream& Student::arrayout(ostream& os) const
{
	os << "学生姓名: " << (const string&)*this << endl;
	os << "学生成绩：" << endl;
	cout << "z？请来一下" << endl;
	int i = 0;
	for (i; i < ArrayDb::size(); i++) {
		os <<ArrayDb::operator[](i) << '\0';
		if (i % 5 == 4)
			os << endl;
	}
	if (i % 5 != 0)
		os << endl;
	return os;
}

double Student::average()
{
	double sumscore = ArrayDb::sum();
	return sumscore / ArrayDb::size();
}

string& Student::showname()
{
	return (string&)*this;
}

double& Student::operator[](int i)
{
	return ArrayDb::operator[](i);
}

double Student::operator[](int i) const
{
	return ArrayDb::operator[](i);
}

