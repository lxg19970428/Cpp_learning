#include "student_private.h"

ostream& operator<<(ostream& os, Student& v)
{
	os << "ѧ��" << v.showname() << "��Ϣ����: " << endl;
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
	os << "ѧ������: " << (const string&)*this << endl;
	os << "ѧ���ɼ���" << endl;
	cout << "z������һ��" << endl;
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

