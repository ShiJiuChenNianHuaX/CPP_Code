/* 
在C++中成员变量和成员函数是分开存储的每一个非静态成员函数只会诞生一份函数实例
也就是说多个同类型的对象会共用一块代码，问题是：这一块代码是如何区分哪个对象调用的自己呢？
C++通过提供特殊的对象指针--- this指针解决以上问题。
this指针指向被调用的成员函数所属的对象
this指针是隐含每一个非静态成员函数内的一种指针
this指针不需要定义，只用使用即可 
*/
#include <iostream>
#include <string>
using namespace std;

class Person
{
    public:
        Person(int age)
        {
            //this指针指向的是被调用的成员函数所属的对象（指向p1，因为p1在代用有参构造函数Person)
            this->age = age;
        }
        Person& PersonAddAge(Person &p) //注意返回本体要用引用的方式返回。如果是以Perons(值)返回，每次返回都会创建新的对象
        {
            this->age += p.age; //自身的年龄=传入p的年龄加到自身上
            //this指向p2的指针，*this指向的就是p2这个对象本体
            return *this; 
        }
        int age;
};
//1、当形参和成员同名时，可用this指针来区分 (解决名称冲突)
void test01()
{
    Person p1(18);
    cout << "p1的年龄为： " << p1.age << endl;
}
//2、在类的非静态成员函数中返回对象本身，可使用return *this（返回对象本身）
void test02()
{
    Person p1(10);
    Person p2(10);
    //链式编程思想
    p2.PersonAddAge(p1).PersonAddAge(p1).PersonAddAge(p1);
    cout << "p2的年龄为： " << p2.age << endl;
}
int main()
{
    test01();
    test02();
}

