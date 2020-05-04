#include <iostream>
using namespace std;

void swap01(int a, int b){
    int temp=a;
    a=b;
    b=temp;
}
void swap02(int *p1,int *p2){
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}
int main(){
    //指针和函数
    
    int a=10;
    int b=20;
    //值传递
    swap01(a,b);
    cout << "值传递a=" << a << endl;
    cout << "值传递b=" << b << endl;
    //地址传递
    swap02(&a,&b);
    cout << "地址传递a=" << a << endl;
    cout << "地址传递b=" << b << endl;
}