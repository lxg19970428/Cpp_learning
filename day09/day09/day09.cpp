// day09.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
#include"String.h"
#include <iostream>
#include<ctime>

const int Arsize = 10;
const int Maxlen = 80;
int main()
{
    using std::cout;
    using std::cin;
    using std::endl;
    String s[Arsize];
    int i = 0;
    cout << "请输入你要输入的诗句：（最多）" << Arsize << "条(不输入以退出)" << endl;
    for (int j=0; j < Arsize; j++) {
        cout << "第" << j+1 << "句: " << endl;
        char temp[Maxlen];
        cin.get(temp, Maxlen);
        while (cin && cin.get() != '\n')
            continue;
        if (!cin || temp[0] == '\0')
            break;
        else
            s[i] = temp;
        i++;
    }
    int count = i;//诗句个数
    for (int j = 0; j < count; j++) {0
        cout << "第" << j+1 << "句: " <<s[j]<<endl;
    }
    srand(time(0));
    String* p = &s[0];
    for (int j = 1; j < count; j++) {
        if (p->length() < s[j].length())
            p = &s[j];
    }
    cout << "最长的诗句为：" << *p<<endl;
    int f = rand()%count;
    String* fav = new String(s[f]);
    cout << "我最喜爱的诗句是第" << f+1 << "句：" <<*fav;
    delete fav;

    
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
