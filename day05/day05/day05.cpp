// day05.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include"stack.h"
int main()
{
    using std::cout;
    using std::cin;
    char c;
    Stack s;
    unsigned long n;
    std::cout << "输入 A 以添加一笔订单，输入 P 处理一笔订单，输入 Q 退出: ";
    while (std::cin >> c && toupper(c) != 'Q') {
        while (cin.get() != '\n') {
            continue;
        }
        if (!isalpha(c)) {
            cout << "输入有误，请重新输入" << '\n';
            continue;
        }
        switch (c) {
            case 'A':
            case 'a':
                std::cout << "请输入订单号"<<'\n';
                std::cin >> n;
                if (s.isfull())
                    cout << "订单队列已满" << '\n';
                else
                    s.push(n);
                break;
            case'P':
            case'p':
                if (s.isempty())
                    cout << "没有可处理的订单" << '\n';
                else {
                    s.pop(n);
                    cout << "订单#" << n << "已处理"<<'\n';
                }
                break;
            
        }
        cout << "输入 A 以添加一笔订单，输入 P 处理一笔订单，输入 Q 退出: ";
    }
    cout << "bye";
    
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
