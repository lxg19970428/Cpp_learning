// day11.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
//类继承
#include <iostream>
#include"tablenn.h"
int main()
{
    Tableplayer player1("lxg", true);
    Ratedplayer player2(1200, "sdm", true);
    player1.show();
    player1.set_table(false);
    player1.show();
    player2.show();
    player2.show_rated();
    Ratedplayer player3(1300, player2);
    player3.show();
    player3.show_rated();

    Tableplayer& player4 = player2;
    player4.show();
    Tableplayer* p = &player2;
    p->show();

    Tableplayer p5(player2);
    p5.show();
    return 0;
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
