// day19.cpp : ���ļ����� "main" ����������ִ�н��ڴ˴���ʼ��������
//

// day18.cpp : ���ļ����� "main" ����������ִ�н��ڴ˴���ʼ��������
//
//Լ��ģ����Ԫ
#include <iostream>
using namespace std;

template <typename TT> void counts();

template <typename T>
class HasFriend {
private:
    enum name { num = 10 };
    T item;
    static int i;
public:
    HasFriend(const T& v) :item(v) { i++; };
    ~HasFriend() { i--; };
    template <typename C, typename D>friend void show(C&, D&);
    friend void counts<T>();
};

template <typename TT>
int HasFriend<TT>::i = 0;

template <typename C, typename D>void show(C& c, D& d) {
    cout << c.item << endl << d.item<<endl;
}

template<typename TT>
void counts() {
    cout <<HasFriend<TT> ::i<<endl;
}



int main()
{
    counts<int>();
    HasFriend<int> a(3);
    HasFriend<double> b(4);
    show(a, b);
    counts<int>();
    counts<double>();
}

// ���г���: Ctrl + F5 ����� >����ʼִ��(������)���˵�
// ���Գ���: F5 ����� >����ʼ���ԡ��˵�

// ����ʹ�ü���: 
//   1. ʹ�ý��������Դ�������������/�����ļ�
//   2. ʹ���Ŷ���Դ�������������ӵ�Դ�������
//   3. ʹ��������ڲ鿴���������������Ϣ
//   4. ʹ�ô����б��ڲ鿴����
//   5. ת������Ŀ��>���������Դ����µĴ����ļ�����ת������Ŀ��>�����������Խ����д����ļ���ӵ���Ŀ
//   6. ��������Ҫ�ٴδ򿪴���Ŀ����ת�����ļ���>���򿪡�>����Ŀ����ѡ�� .sln �ļ�

// ���г���: Ctrl + F5 ����� >����ʼִ��(������)���˵�
// ���Գ���: F5 ����� >����ʼ���ԡ��˵�

// ����ʹ�ü���: 
//   1. ʹ�ý��������Դ�������������/�����ļ�
//   2. ʹ���Ŷ���Դ�������������ӵ�Դ�������
//   3. ʹ��������ڲ鿴���������������Ϣ
//   4. ʹ�ô����б��ڲ鿴����
//   5. ת������Ŀ��>���������Դ����µĴ����ļ�����ת������Ŀ��>�����������Խ����д����ļ���ӵ���Ŀ
//   6. ��������Ҫ�ٴδ򿪴���Ŀ����ת�����ļ���>���򿪡�>����Ŀ����ѡ�� .sln �ļ�

