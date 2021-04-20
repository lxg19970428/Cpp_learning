// day18.cpp : ���ļ����� "main" ����������ִ�н��ڴ˴���ʼ��������
//

#include <iostream>
using namespace std;

template <typename TT> void counts();
template <typename TT> void report(T &);

template <typename T>
class HasFriend {
private:
    T item;
    static int i;
public:
    HasFriend(const T& v) :item(v) { i++; };
    ~HasFriend() { i--; };
    friend void counts<T>();
    friend void report<>(HasFriend<T> &);
};

template <typename T>
int HasFriend<T>::i = 0;

template <typename T>
void counts<T>() {
    cout << "���廯:" << HasFriend<T>::i << endl;
}
template <typename T>
void report(HasFriend<T>&)
{
    cout << v.item << endl;
}



int main()
{
    counts<int>();
    counts<double>();
    HasFriend<int> a(3);
    HasFriend<double> b(4.0);
    counts<int>();
    counts<double>();
    HasFriend<double> c(10);
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
