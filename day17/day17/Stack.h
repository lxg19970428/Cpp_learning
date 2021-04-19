#ifndef STACK_H_
#define STACK_H_
#pragma once
#include<iostream>
using namespace std;
//Ä£°åÀà
template <typename Type>
class Stack {
private:
	enum { num = 10 };
	int top;
	Type* item;
	int stacksize;
public:
	Stack(int n=num) :top(0), stacksize(n) {
		item = new Type[n];
	}
	Stack(const Stack& v);
	~Stack() { delete[] item; };
	bool isempty() { return top == 0; };
	bool isfull() { return top == stacksize; };
	bool push(const Type& v);
	bool pop(Type& v);
	Stack& operator=(const Stack& v);
};

template<typename Type>
Stack<Type>::Stack(const Stack& v)
{
	top = v.top;
	stacksize = v.stacksize;
	item = new Type[stacksize];
	for (int i = 0; i < top; i++) {
		item[i] = v.item[i];
	}
}

template<typename Type>
bool Stack<Type>::push(const Type& v) {
	if (top < stacksize) {
		item[top] = v;
		top++;
		return true;
	}
	else
		return false;
}

template<typename Type>
bool Stack<Type>::pop(Type& v)
{
	if (top > 0) {
		v = item[top - 1];
		top--;
		return true;
	}
	else
		return false;
}

template<typename Type>
Stack<Type>& Stack<Type>::operator=(const Stack<Type>& v)
{
	if (this = &v) {
		return *this;
	}
	delete[]item;
	top = v.top;
	stacksize = v.stacksize;
	item = new Type[stacksize];
	for (int i = 0; i < top; i++) {
		item[i] = v.item[i];
	}
	return *this;
}

#endif