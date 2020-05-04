//
// Created by me on 2020/4/20.
//
#include <iostream>
using namespace std;
int main(){
    //switch语句
//    cout<<"请选择难度"<<endl;
//    cout<<"1、普通"<<endl;
//    cout<<"2、中等"<<endl;
//    cout<<"3、困难"<<endl;
//    int select = 0;
//    cin>> select;
//    switch(select){
//        case 1:
//            cout<<"您选择的是普通难度"<<endl;
//            break;
//        case 2:
//            cout<<"您选择的中等难度"<<endl;
//            break;
//        case 3:
//            cout<<"您选择的困难难度"<<endl;
//            break;
//        default:
//            break;
//    }
    //循环语句中的break
//    for(int i=0;i<10;i++){
//        //i=5退出循环不再打印
//        if(i==5){
//            break;
//        }
//        cout<<i<<endl;
//
//    }
    //出现在嵌套循环中
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            if(j==5){
                break;
            }
            cout<<"* ";
        }
        cout<<endl;
    }
}