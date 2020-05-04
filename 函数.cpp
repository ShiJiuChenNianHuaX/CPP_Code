#include <iostream>
using namespace std;

//函数定义的时候num1和num2并没有真实的数据，他只是一个形式上的参数-形参
int add(int num1,int num2){ 
    int sum = num1 + num2;
    return sum;
}

int main(){
    int a=10;
    int b=20;
    //a和b称为 实际参数-实参
    //调用函数的时候，实参的值会传递给形参
    int c = add(a,b);
    cout << "c="<< c << endl;
    a=100;
    b=500;
    c=add(a,b);
    cout << "c="<< c << endl;
    return 0;
}