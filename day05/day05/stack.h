#pragma once
typedef unsigned long Item;
class Stack {
private:
	enum {Max=10};
	Item item[Max];
	int top;
public:
	bool isempty() const;
	bool isfull() const;
	bool push(Item &a);
	bool pop(Item &b);
	Stack();
};