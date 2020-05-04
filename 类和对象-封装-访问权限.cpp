//public 公共权限
// protected 保护权限
// private 私有权限
#include <iostream>
#include <string>
using namespace std;

//public    成员在类内可以访问 类外也可以访问
//protected 成员在类内可以访问 类外不可以访问-父类（基类）中的内容子类可以访问
//private   成员在类内可以访问 类外不可以访问-父类（基类）中的内容子类不可以访问
class Person
{
    public:
    string m_Name;
    protected:
    string m_Car;
    private:
    int m_Password;

    public:
    void func()
    {
        m_Name="张三";
        m_Car="拖拉机";
        m_Password=123456;
    }
};
int main()
{
    Person p1;
    p1.m_Name = "李四";
    // p1.m_Car="奔驰";保护权限的内容在类外不能访问
    // p1.m_Password = 1234;私有权限的内容类外不能访问
}