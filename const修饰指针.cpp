#include <iostream>
using namespace std;

int main(){
    //const修饰指针-常量指针 const int * p =& a; 特点：指针的指向可以修改，但是指针的指向的值不可以改
    int a=10; 
    int b=10;
    const int *p = &a;
    //*p=20;错误
    p= &b;//正确
    //const修饰常量-指针常量 int * const p = &a; 特点：指针的指向不可以改，指针指向的值可以改
    int * const p2 = &a;
    *p2 = 100;
    //p2 =&b;错误
    const int * const p3 = &a;
    //*p3 =200;错误
    //p3= &b;错误
    //const即修饰指针，又修饰长常量 const int * const p = &a；特点：指针指向和指针指向的值都不可以改
}