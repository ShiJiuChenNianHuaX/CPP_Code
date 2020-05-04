//函数分文件的编写有4个步骤
//1、创建.h的头文件
//2、创建.cpp的源文件
//3、在头文件中写函数的声明
//4、在源文件中写函数的定义
#include <iostream>
#include "swap.h"
using namespace std;
int main(){
    int a=10;
    int b=20;
    swap(a,b);
}