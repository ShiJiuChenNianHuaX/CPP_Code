//
// Created by me on 2020/4/22.
//
#include <iostream>
using namespace std;
int main(){
    //数组名的用途
    //1、可以统计整个数组在内存中的长度
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    cout << "整个数组占用内存空间为"<< sizeof(arr) << endl; //int占4个bit,10个元素10*4
    cout << "每个元素占用内存空间为："<< sizeof(arr[0]) << endl;
    cout << "数组中元素个数" << sizeof(arr)/ sizeof(arr[0]) <<endl;
    //2、可以获取数组在内存中的首地址
    cout << "数组的首地址" << arr << endl; //查看数组arr的首地址
    cout << "数组中第一个元素地址为" << &arr[0] << endl; //&取地址符号，表示获取元素的首地址
    //3、数组名是常量，不可以进行赋值操作
    //arr=100;
}

