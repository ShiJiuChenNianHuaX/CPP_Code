//在C++中，函数的形参列表中是可以有默认值的
//语法： 返回值类型 函数名 (参数 = 默认值){}
#include <iostream>
using namespace std;
//如果程序员自己传入数据，就用自己的数据。如果没有，那么就用默认值
int func(int a,int b=20,int c=30)
{
    return a+b+c;
}

int func2(int a, int b=10, int c=20)//1、如果某个位置已经有了默认参数，那么从这个位置往后从左到右都必须有默认值
{
    return a+b+c;
}
//注意事项
//2、如果函数的声明有默认参数，那么函数定义就不能有默认参数
//声明和定义只能有一个有默认参数
int func3(int a=10, int b=10);

int func3(int a,int b)
{
    return a+b;
}
int main(){
    cout << func(10) << endl;
    return 0;
}
