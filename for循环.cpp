//
// Created by me on 2020/4/14.
//
//for(起始表达式；条件表达式；末尾循环体){循环体;}
#include <iostream>
using namespace std;
int main(){
    int i=0;
    for(int i=0;i<10;i++){    
        if(i>=10){
            break;
        }
        cout << i << endl;
        i++;
    }
}

