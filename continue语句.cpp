//
// Created by me on 2020/4/20.
//
#include <iostream>
using namespace std;
int main(){
    for(int i=0;i<=100;i++){
        //奇数输出
        if(i % 2==0){
            continue;
        }
        cout << i << endl;
    }
}