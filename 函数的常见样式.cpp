#include <iostream>
using namespace std;

//无参无返
void test01()
{
    cout << "This is test01" << endl;
}
//有参无返
void test02(int a)
{
    cout << "This is test02 a=" << a << endl;
}
//无参有返
int test03()
{
    cout << "This is test03 " << endl;
    return 1000;
}
//有参有返
int test04(int b)
{
    cout << "This is test04 b="<< b <<endl;
    return b;
}

int main(){
    test01();
    test02(100);
    int num1 = test03();
    cout << "num1 = " << num1 << endl;
    int num2= test04(10000);
    cout << "num2= " << num2 << endl;
    return 0;
}
