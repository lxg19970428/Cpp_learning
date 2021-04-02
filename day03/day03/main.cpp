//// day03.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
////
//
//#include <iostream>
//#include<string>
//using namespace std;
//void printstr(const char* str);
//const int Arsize = 10;
//
//int main()
//{
//	char inputs[Arsize];
//	cout << "输入你想说的话: ";
//	char next;
//	cin.get(inputs, Arsize);
//	while (cin) {//cin.get(char*，int)读取空行会使cin为false
//		cin.get(next);
//		while (next != '\n')
//			cin.get(next);
//		printstr(inputs);
//		cin.get(inputs, Arsize);
//	}
//	return 0;
//}
//
//void printstr(const char* str) {
//	int counts=0;
//	static int total=0;//局部静态变量只会被初始化一次，一直存在，下次使用时沿用上次的值
//	cout << "\"" << str << "\" contains ";
//	while (*str) {
//		counts++;
//		total++;
//		str++;	
//	}
//	cout<< counts << "words" << "\n" << "contains " << total << "words total"<<endl;
//
//}
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
using namespace std;
char buffer[4] = "sda";
namespace lxg {
	int i = 0;
	void cout(char* p,int n);
}

namespace lee = std;

extern int x=3;
int main() {
	using lxg::i;
	lee::cout << i;
}
void lxg::cout(char* p, int n) {
	for (int i = 0; i < n; i++){
		std::cout << p[i];
}

}
	