#include <iostream>
using namespace std;
//函数声明可以写多次但是函数定义只能有一次
int Max(int a,int b);

int main(){
    int a=10;
    int b=20;
    cout << Max(a,b) << endl;
}
//比较函数，实现两个整型数字的比较，并且返回较大值
int Max(int a, int b)
{
    return a > b ? a : b;  //三目运算符：如果a>b那么返回a否则返回b;
}