//本质：引用的本质在C++内部实现是一个指针常量
#include <iostream>
using namespace std;
void func(int& ref)
{
    ref = 100; //ref是引用，转换为 ref = 100
}
int main()
{
    int a = 10;
    //自动转换为 int* const ref = &a 指针常量是指针指向不可修改，也说明引用为什么不可修改
    int & ref = a;
    ref =20; //内部发现ref是一个引用，自动帮我们转换为 *ref=20;

    cout << "a: " << a << endl;
    cout << "ref: " << ref << endl;

    func(a);
    return 0;

}