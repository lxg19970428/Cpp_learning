// day25.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//移动构造函数，右值引用
#include <iostream>
using namespace std;

class Useless {
private:
    int n;
    int* p;
    static int counts;
public:
    Useless() {
        n = 0;
        p = nullptr;
        counts++;
    }
    explicit Useless(int i) :n(i) { p = new int[n]; cout << "int constructor is use: " << endl; counts++; show(); }
    Useless(int i, int j) :n(i) { p = new int[n]; for (int c = 0; c < i; c++) { p[c] = j; }; cout<<"int int constructor is use: "<<endl; counts++; show();}
    Useless(const Useless& i) {
        n = i.n;
        p = new int[n];
        for (int c = 0; c < n; c++)
            p[c] = i.p[c];
        cout << "copy constructor is use: " << endl;
        counts++;
        show();
    }
    Useless(Useless&& i) {
        n = i.n;
        p = i.p;
        i.n = 0;
        i.p = nullptr;
        cout << "move constructor is use: " << endl;
        counts++;
        show();
    }
    Useless operator+(Useless& f) {
        Useless temp(n + f.n);
        cout << "temp objects: " << endl;
        for (int i = 0; i < n; i++)
            temp.p[i] = p[i];
        for (int i = n; i < (n + f.n); i++)
            temp.p[i] = f.p[i-n];
        return temp;
    }

    ~Useless() {
        counts--;
        cout << "object is deconstruct "<<endl;
        show();
        for (int i = 0; i < n; i++)
            cout << p[i];
        cout << endl;
        delete[]p;
    }

    void show() {
        cout << "there are " << counts << "objects left " << endl;

    }
    
};

int Useless::counts = 0;
int main()
{
    Useless u1(3);
    Useless u2(4, 5);
    Useless u3(5, 4);
    Useless u4(u2 + u3);
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
