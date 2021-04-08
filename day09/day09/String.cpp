#include "String.h"
int String::num_strings = 0;
String::String(const char*s)
{
	len = std::strlen(s);
	str = new char[len + 1];
	std::strcpy(str, s);
	num_strings++;
}

String::String()
{
	str = new char[1];
	str[0] = '\0';
	len = 0;
	num_strings++;
}

String::String(const String& a)
{	
	len = a.len;
	str = new char[len + 1];
	std::strcpy(str, a.str);
	num_strings++;
}

String::~String()
{
	delete[]str;
	num_strings--;
}

String& String::operator=(const String& v)
{
	if (this == &v) {
		return *this;
	}
	delete[]str;
	len = v.len;
	str = new char[len + 1];
	std::strcpy(str, v.str);
	return *this;
}

String& String::operator=(const char* s)
{
	delete[]str;
	len = std::strlen(s);
	str = new char[len + 1];
	std::strcpy(str, s);
	return *this;
	
}

char& String::operator[](int i)
{
	return str[i];
}

const char& String::operator[](int i) const
{
	return str[i];
}

int String::length()
{
	return len;
}

int String::Howmany()
{
	std::cout << "number of strings:" << num_strings << std::endl;
	return num_strings;
}

bool operator==(const String& v, const String& u)
{
	return std::strcmp(v.str,u.str)==0;
}

bool operator<(const String& v, const String& u)
{
	return std::strcmp(v.str, u.str) < 0;
}

bool operator>(const String& v, const String& u)
{
	return u < v;
}

std::istream& operator>>(std::istream& is,String& v)
{
	char temp[String::limit_s];
	is.get(temp, String::limit_s);
	if (is) {
		v=temp;
	}
	while (is && is.get() != '\n')
		continue;
	return is;
	  

}

std::ostream& operator<<(std::ostream &os, const String& v)
{
	os << v.str<<std::endl;
	return os;
}
