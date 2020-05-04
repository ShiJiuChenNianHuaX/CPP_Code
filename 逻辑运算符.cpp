//
// Created by me on 2020/4/9.
//
#include "iostream"
using namespace std;
int main(){
    //逻辑"非"
    int a1=10;
    cout << !a << endl;
    cout << !!a << endl;
    //逻辑"与"
    int a2=10;
    int b2=10;
    cout<<(a2 && b2)<<endl;
    a2=0;
    b2=10;
    cout <<(a2 && b2)<<endl;
    a2=0;
    b2=0;
    cout <<(a2 && b2)<<endl;

    //同真为真，其余为假
    //逻辑"或"
    int a3=10;
    int b3=10;
    cout <<(a||b)<<endl;
    a=0;
    b=10;
    cout <<(a||b)<<endl;
    return 0;
}
