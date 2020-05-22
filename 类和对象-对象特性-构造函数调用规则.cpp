#include <iostream>
using namespace std;
//默认情况下，C++编译器至少给一个类添加三个函数
//1、默认构造函数（无参，函数体为空）
//2、默认析构函数（无参，函数体为空）
//3、默认拷贝函数，对属性进行值拷贝
/*构造函数调用规则如下：（1）如果用户定义有参构造函数，C++不再提供默认无参构造，但是会提供默认拷贝构造
                     (2)如果用户定义拷贝构造函数，C++不会再提供其他构造函数*/

class Person
{
  public:
    int m_Age;
        // Person()
        // {
        //     cout << "Person默认构造函数" << endl;
        // } 
        // Person(int age)
        // {

        //     cout << "Person有参构造函数" << endl;
        //     m_Age = age;
        // }  
        Person(const Person &p)
        {
            cout << "Person的拷贝构造函数调用" << endl;
            m_Age = p.m_Age;
        }   
        ~Person()
        {
            cout << "Person的析构函数调用" << endl;
        }
};
// void test01()
// {
//     Person p;
//     p.m_Age = 18;

//     Person p2(p);//这里运行完会被赋值18的原因在于：
//     //默认情况下，C++编译器至少给一个类添加三个函数
//     //1、默认构造函数（无参，函数体为空）
//     //2、默认析构函数（无参，函数体为空）
//     //3、默认拷贝函数，对属性进行值拷贝
//     cout << "P2年龄为: " << p2.m_Age << endl;
// }
void test02()
{
    Person p;
}
int main()
{
   //test01();
   test02();
}