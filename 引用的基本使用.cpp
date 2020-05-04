//作用： 给变量起别名
//语法： 数据类型 &别名 = 原名
//注意：引用必须要初始化，初始化后就不可以改变了
#include <iostream>
using namespace std;

int main(){
    int a=10;
   
    //注意事项
    //引用必须初始化
    int &b=a;
    int c=20;
    //int &b=c;//引用在初始化后，不可以改变
    b=c;
    cout << "a=" << a << endl;
    cout << "b=" << b << endl;
    b=100;
     cout << "a=" << a << endl;
    cout << "b=" << b << endl;
    cout << "c=" << c << endl;
}