//
// Created by me on 2020/4/14.
//
//从1开始到数字100，如果数字个位含有7，或者数字十位含有7，或者该数字是7的倍数，我们打印敲桌子，其余数字直接打印输出
#include <iostream>
using namespace std;
int main(){
    //1、输出1-100数字
    for(int i=1;i<=100;i++){
        //2、从100个数字中找到特殊数字，打印"敲桌子"
        if(i%7==0 || i%10==7 || i/10 ==7){
            cout << "敲桌子" << endl;
        }
        cout << i <<endl;
    }
    return 0;
}

