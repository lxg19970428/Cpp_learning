#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstring>
#include<string>
class String {
private:
	char* str;
	int len;
	static int num_strings;
	static const int limit_s = 80;
public:
	String(const char*);//���캯��
	String();//���캯��
	String(const String& a);//���ƹ��캯��
	~String();//��������
	String& operator=(const String&v);
	String& operator=(const char* s);
	char& operator[](int i);
	const char& operator[](int i)const;
	int length();
	friend bool operator==(const String& v, const String& u);
	friend bool operator<(const String& v, const String& u);
	friend bool operator>(const String& v, const String& u);
	friend std::istream& operator>>(std::istream &is,String& v);
	friend std::ostream& operator<<(std::ostream &os, const String& v);
	static int Howmany();
	
};