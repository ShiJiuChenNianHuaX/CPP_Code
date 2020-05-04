#include <iostream>
using namespace std;
//1、不要返回局部变量的引用
// int& test01()
// {
//     int a=10;//局部变量存放在四区中的栈区
//     return a;
// }
//2、函数的调用可以作为左值
int& test02()
{
    static int a=10;//静态变量存放在全局区，全局区上的数据在程序结束后系统释放
    return a;
}


int main()
{
    //不要返回局部变量的引用
    // int &ref = test01();
    // cout << "&ref= " << ref << endl;//第一次结果正确，因为编译器做了保留
    // cout << "&ref= " << ref << endl;//第二次结果是错误的，因为a的内存已经释放
    
    int &ref2=test02();
    cout << "ref2= " << ref2 << endl; 
    cout << "ref2= " << ref2 << endl;
    test02() = 1000;//如果函数的返回值是一个引用，该函数的调用可以作为左值
    cout << "ref2= " << ref2 << endl; //当返回a后进行a=1000赋值操作随后ref2作为test02的别名来返回.
    cout << "ref2= " << ref2 << endl;
}