#include "Queue.h"

Queue::~Queue()
{
	Node* temp;
	while (front!=nullptr) {
		temp = front;
		front = front->next;
		delete temp;
	}
}

bool Queue::enqueue(Item& item)
{
	if (counts < Qmax) {
		Node* p = new Node;
		p->i = item;
		p->next = nullptr;
		if (counts == 0)
			front = p;
		else
			rear->next = p;
		rear = p;
		counts++;
		return true;
	}
	else
		return false;

}

bool Queue::dequeue(Item& item)
{
	if (counts > 0) {
		item = front->i;
		Node* temp = front;
		front = front->next;
		delete temp;
		counts--;
		if (counts == 0)
			rear = nullptr;	
		return true;
	}
	else
		return false;
}

void Customer::set_time(long atime)
{
	processtime = rand() % 3 + 1;
	arrivetime = atime;
}
