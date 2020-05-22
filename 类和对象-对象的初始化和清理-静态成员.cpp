#include <iostream>
using namespace std;
//静态成员函数
//所有对象共享同一个函数
//静态成员函数只能访问静态成员变量
class Person
{
public:
    
    static void func()//静态成员函数
    {
        m_A=100;
        //m_B=200;//静态成员函数不可以访问非静态成员变量,无法区分到底是哪个对象的m_B属性
        cout<< "static void func调用" << endl;
    }
    static int m_A; //静态成员变量
    int m_B;//非静态成员变量
    
    //静态成员函数访问权限类外访问不了静态成员函数
private:
    static void func2()
    {
        cout<< "static void func2调用" << endl;
    }
};
    int Person::m_A=0;
    
void test01()
{
    //1、通过对象进行调用
    Person p;
    p.func();
    //2、通过类名进行调用
    Person::func();
}
int main()
{
    test01();
    test02();
}