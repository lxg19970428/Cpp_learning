//// day10.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
////
//
//#include <iostream>
//#include<string>
//using namespace std;
//class testing {
//private:
//    string words;
//    int number;
//public:
//    testing(const string& a = "testing", int n = 0) {
//        words = a;
//        number = n;
//        cout << words << "被创建"<<endl;
//    }
//    ~testing() {
//        cout << words << "被销毁" << endl;
//    }
//    void show() {
//        cout << words << ',' << number<<endl;
//    }
//
//};
//int main()
//{
//    char *buffer=new char[500];
//    testing* p1 = new testing("白日依山尽");
//    testing* p2 = new(buffer)testing;
//    cout << "buffer数组地址:"<<(void*)buffer<<endl<<"p1地址:" << p1<<endl << "p2地址:" << p2<<endl;
//    cout << "p1内容为：";
//    p1->show();
//    cout << "p2内容为：";
//    p2->show();
//    testing* p3 = new testing("黄河入海流");
//    testing* p4 = new(buffer+sizeof(testing))testing("欲穷千里目");
//    cout << "p3地址:" << p1 << endl << "p4地址:" << p2 << endl;
//    cout << "p1内容为：";
//    p1->show();
//    cout << "p2内容为：";
//    p2->show();
//    cout << "p3内容为：";
//    p3->show();
//    cout << "p4内容为：";
//    p4->show();
//    delete p1;
//    delete p3;
//    p4->~testing();
//    p2->~testing();
//    delete [] buffer;
//    return 0;
//}
//
//
//
//// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
//// 调试程序: F5 或调试 >“开始调试”菜单
//
//// 入门使用技巧: 
////   1. 使用解决方案资源管理器窗口添加/管理文件
////   2. 使用团队资源管理器窗口连接到源代码管理
////   3. 使用输出窗口查看生成输出和其他消息
////   4. 使用错误列表窗口查看错误
////   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
////   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
#include<iostream>
#include"Queue.h"
#include<ctime>
using namespace std;
int wait_time = 0;

int main() {
	Queue q1;
	int hours;
	int customers;
	int maxsize;
	int wait_timeall = 0;
	int customers_all=0;
	int customers_inqueue = 0;
	cout << "请输入模拟小时数：";
	cin >> hours;
	cout << "请输入平均每小时顾客数：";
	cin >> customers;
	cout << "请输入队列最大长度：";
	cin >> maxsize;
	int i = 0;//时间
	srand(time(0));
	
	for (i; i < 60 * hours; i++) {
		while (q1.queuecount() < maxsize && customers_inqueue<customers*hours) {
			Customer a;
			a.set_time(i);
			q1.enqueue(a);
			customers_inqueue++;
		}
		if (wait_time == 0&&q1.queuecount()>0) {
			Customer a;
			q1.dequeue(a);
			wait_timeall += i - a.atime();
			wait_time = a.ptime();
			customers_all++;
		}
		wait_time--;
	}
	cout << "总共服务了" << customers_all << "用户" << endl;
	cout << "平均每名用户等待时间：" << wait_timeall / customers_all << endl;

	
	

}