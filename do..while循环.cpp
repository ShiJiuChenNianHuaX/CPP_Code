//
// Created by me on 2020/4/14.
//
#include <iostream>
using namespace std;
//do...while与while的区别在于do...while会先执行一遍循环语句再判断
int main(){
    int num = 0;
    do{
        cout << num << endl;
        num++;
    }
    while(num <10);
}