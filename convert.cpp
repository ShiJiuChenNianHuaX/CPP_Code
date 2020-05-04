// 自定义有返回值的函数
#include<iostream>
int stonetolb(int);
int main(){
    using namespace std;
    int stone;
    cout<<"Enter the weight in stone"<<endl;
    cin>>stone;
    int pounds = stonetolb(stone);
    cout<<stone<<"stone=";
    cout<<pounds<<"pounds."<<endl;
    return 0;
}
int stonetolb(int sts){
    return 14*sts;
}