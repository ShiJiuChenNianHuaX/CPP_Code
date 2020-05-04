//
// Created by me on 2020/4/14.
//
#include <iostream>
#include <ctime>//time系统时间头文件
using namespace std;
int main(){
    //添加随机数种子，利用系统当前的时间生成随机数，防止每次随机数一样
    srand((unsigned int)time(NULL));
    //1、系统生成随机数(伪随机数)
    int num = rand()%100+1; //生成1-100随机数 rand()%100生成0-99随机数
    //2、玩家进行猜测
    int val = 0;
    while(1){
        cin >> val;
        if(val > num){
            cout <<"猜测过大"<< endl;
        } else if(val < num){
            cout <<"猜测过小"<<endl;
        }else{
            cout << "恭喜您猜对了"<<endl;
            break;//break退出当前的循环
        }
    }

    //3、判断玩家的猜测

    //猜对-退出游戏
    //猜错-提示结果，过大或者过小且返回第2步
    return 0;
}
