#include <iostream>
using namespace std;
//函数名称可以相同，提高复用性
//满足条件：同一个作用域下 函数名相同 函数的参数类型不同 或者 个数不同 或者 顺序不同

//函数重载的满足条件
//1、同一个作用域下(当前是全局作用域)
//2、函数名称相同
//3、函数参数类型不同或者个人不同或者顺序不同
void func()
{
    cout << "func的调用" << endl;
}
void func(int a)
{
    cout << "func(int a)的调用" << endl;
}
void func(double a)
{
    cout << "func(double a)的调用" << endl;
}
void func(double a, int b)
{
    cout << "func(double a和int b)的调用" << endl;
}
void func(int a, double b)
{
    cout << "func(int a和double b)的调用" << endl;
}
//注意：函数的返回值不可以作为函数重载的条件
int main()
{
    //func();
    func(10);
    func(3.14,10);
    return 0;
}   