#ifndef ARRAYTP_H_
#define ARRAYTP_H_

#include<iostream>

template <typename Type,int n>
class arraytp {
private:
	Type arr[n];
public:
	arraytp(){};
	arraytp(const Type& v);
	Type &operator[](int i);
	Type operator[](int i) const;
};

template<typename Type, int n>
arraytp<Type, n>::arraytp(const Type& v)
{
	for (int i = 0; i < n; i++)
		arr[i] = v;
}

template<typename Type,int n>
Type& arraytp<Type, n>::operator[](int i)
{
	return arr[i];	
}

template<typename Type, int n>
Type arraytp<Type, n>::operator[](int i) const {
	return arr[i];
}

#endif