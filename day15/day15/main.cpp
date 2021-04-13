#include<iostream>
#include"Stack.h";
#include<ctime>
using namespace std;

int main() {
	srand(time(0));
	cout << "请输入栈的元素个数";
	int n;
	cin >> n;
	Stack<const char*>s(n);
	const char* in[10] = { "lxg","sdm","123","px","wlh","sx","lyh","lcy","xkj","wwx" };
	const char* out1[10];
	int innumber=0;
	int outnumber=0;
	while (outnumber < 10) {
		if (s.isempty()) {
			s.push(in[innumber]);
			innumber++;
		}
		else if (s.isfull()) {
			s.pop(out1[outnumber]);
			outnumber++;
		}
		else if ((rand() % 2) && innumber < 10) {
			s.push(in[innumber]);
			innumber++;
		}
		else{
			s.pop(out1[outnumber]);
			outnumber++;
		}
			
	}
	for(int i = 0; i < 10; i++)
		cout << i << ':' << out1[i] << endl;
	
}