//
// Created by me on 2020/4/10.
//
#include <iostream>
using namespace std;

//多条件if语句
int main(){
    int score=0;
    cout<<"请输入您的分数"<<endl;
    cin>>score;
    cout<<"您输入的分数是："<<score<<endl;
    if(score>600){
        cout<<"恭喜您考上一本"<<endl;
    }else if(score>500){
        cout<<"恭喜您考上二本"<<endl;
    }else if(score>400){
        cout<<"恭喜您考上三本"<<endl;
    }
    else{
        cout<<"未考上本科"<<endl;
    }
    return 0;
}

