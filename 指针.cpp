#include <iostream>
using namespace std;
//*&p是先去指针p的地址值之后再按地址值取值。*p是直接去指针里的值。
int main(){
    //如何定义一个指针
    int a=10;
    //指针定义的语法：数据类型 * 指针变量名;
    int * p;
    //让指针记录变量a的地址;
    p = &a;
    cout << "a的地址为" << &a << endl;
    cout << "指针p为" << p << endl;

    //如何使用指针?
    //通过解引用的方式来找到指针指向的内存 *p
    // 指针前加 * 代表解引用，找到指针指向的内存中的数据
    *p=1000;
    cout << "a=" << a << endl;
    cout << "*p=" << *p << endl;
 

}