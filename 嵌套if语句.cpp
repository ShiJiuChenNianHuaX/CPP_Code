//
// Created by me on 2020/4/10.
//
#include <iostream>
using namespace std;
int main(){
    int score=0;
    cout <<"请输入您的分数"<<endl;
    cin>>score;
    cout<<"您输入的分数为"<<score<<endl;
    if(score>600){
        cout<<"恭喜您考上了一本大学"<<endl;
        if(score>700){
            cout<<"您能考入北京大学"<<endl;
        }else if(score>650){
            cout<<"您能考入清华大学"<<endl;
        }else{
            cout<<"您能考入人民大学"<<endl;
        }
    }else if(score>500){
        cout<<"恭喜您考上了二本大学"<<endl;
    }else if(score>400){
        cout<<"恭喜您考上了三本大学"<<endl;
    }
    else{
        cout<<"您未考上本科"<<endl;
    }
}