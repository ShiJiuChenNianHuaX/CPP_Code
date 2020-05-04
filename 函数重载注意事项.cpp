//引用作为重载条件
//函数重载碰到函数默认参数
#include <iostream>
using namespace std;
//引用作为重载条件
void func(int &a)//int &a=10 不合法
{
    cout << "func(int &a)调用"<< endl;
}
void func(const int &a)//const int &a =10 合法
{
    cout << "func(const int &a)调用"<< endl;
}
//函数重载碰到函数默认参数
void func2(int a,int b=10)//写函数重载的时候不要写默认参数
{
    cout << "func2(int a,int b)的调用" << endl;
}
void func2(int a)
{
    cout << "func2(int a)的调用" << endl;
}
int main(){
    //int a=10;
    //func(a);
    //func(10);
    //func2(10);//写函数重载的时候不要写默认参数
}