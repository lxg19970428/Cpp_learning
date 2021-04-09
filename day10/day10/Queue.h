#pragma once
#include<iostream>
class Customer {
private:
	long arrivetime;
	int processtime;
public:
	Customer() { arrivetime = processtime = 0; }
	void set_time(long atime);
	long atime() { return arrivetime; }
	int ptime() { return processtime; }

};

typedef Customer Item;

class Queue {
public:
	enum {Q_size=10};
private:
	struct Node {
		Item i;
		Node* next;
	};
	Node* front;
	Node* rear;
	int counts;
	const int Qmax;
	Queue(const Queue& v):Qmax(0){}
	Queue& operator=(Queue& v) { return *this; }
public:
	Queue(int i = Q_size) :front(0), rear(0), counts(0), Qmax(i) {};
	~Queue();
	int queuecount() { return counts; };
	bool isempty() { return counts == 0; };
	bool isfull() { return counts == Qmax; };
	bool enqueue(Item & item);
	bool dequeue(Item & item);
};


