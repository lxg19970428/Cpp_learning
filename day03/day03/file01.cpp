#include<iostream>
extern int x;
extern void study(int i);

extern void study(int i) {
	std::cout << "i have studied for " << i << " days";
}