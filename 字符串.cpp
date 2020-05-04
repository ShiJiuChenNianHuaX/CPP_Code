//
// Created by me on 2020/4/9.
//
#include <iostream>
#include <string>//使用C++风格字符串的时候要用此头文件
using namespace std;

int main() {
    //C风格字符串
    //注意 char 字符串名字后[]
    //注意 等号后面要用双引号 包含起来字符串
    char str1[] = "hello world";
    cout << str1 << endl;
    //C++风格字符串
    //要包含 #include <string>头文件
    string str2 = "hello world";
    cout << str2 << endl;
}