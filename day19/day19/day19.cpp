﻿//// day19.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
////
//
//// day18.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
////
////约束模板友元
//#include <iostream>
//using namespace std;
//
//template <typename T> void counts();
//template <typename T> void report(T &);//1、定义模板函数
//
//template <typename TT>
//class HasFriend {
//private:
//    enum name{num=10};
//    TT item;
//    static int i;
//public:
//    HasFriend(const TT& v) :item(v) { i++; };
//    ~HasFriend() { i--; };
//    friend void counts<TT>();
//    friend void report<>(HasFriend<TT>&);//2、声明友元
//};
//
//template <typename T>
//int HasFriend<T>::i = 0;
//
//template <typename T>//3、为友元提供模板定义
//void counts<T>() {
//    cout << "具体化:" << HasFriend<T>::i << endl;
//}
//template <typename T>
//void report(HasFriend<T>&v)
//{
//    cout << v.item << endl;
//}
//
//
//int main()
//{
//    counts<int>();
//    counts<double>();
//    HasFriend<int> a(3);
//    HasFriend<double> b(4.0);
//    counts<int>();
//    counts<double>();
//    HasFriend<double> c(10);
//    counts<int>();
//    counts<double>();
//    cout << "template size:" << sizeof(b);
//}
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
