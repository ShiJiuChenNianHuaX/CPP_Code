//所谓值传递，就是函数调用时实参将数值传递给形参,注意值传递时如果形参发生改变，并不会影响实参
#include <iostream>
using namespace std;

//两个数字进行交换的函数
//函数不需要返回值在声明的时候用void 
void swap(int num1,int num2)
{
    cout << "交换前的数字" <<endl;
    cout <<"num1=" << num1 << endl;
    cout <<"num2=" << num2 << endl;
    int temp = num1;
    num1 = num2;
    num2 = temp;
    cout << "交换后的数字" <<endl;
    cout <<"num1=" << num1 << endl;
    cout <<"num2=" << num2 << endl;
    //返回值不需要的时候可以不写return;
}
int main()
{
    int a =10;
    int b= 20;
    cout << "a=" << a <<endl;
    cout << "b=" << b <<endl;
    //值传递时如果形参发生任何改变，并不会影响实参
    swap(a,b);
    
    cout << "a=" << a <<endl;
    cout << "b=" << b <<endl;
    
}
