//c++类中的成员可以是另一个类的对象，我们称该成员为对象成员
#include <iostream>
using namespace std;
#include <string>

class Phone
{
public:
    string m_PName;
    Phone(string pName)
    {
        cout << "Phone的构造函数调用"<< endl;
        m_PName = pName;
    }
    ~Phone()
    {
    cout << "Phone析构函数调用"<< endl; 
    }
};

class Person
{
public:
    string m_Name;
    Phone m_Phone;
    //Phone m_Phone = pName
    Person(string name, string pName):m_Name(name),m_Phone(pName) 
    {
        cout << "Person构造函数调用" << endl;
    }
    ~Person()
    {
    cout << "Person析构函数调用"<< endl; 
    }
};

//当其他类对象作为本类的成员，构造时候先构造其类对象，再构造自身
//析构的顺序先释放自身，再释放其类对象
void test01()
{
    Person p("张三","苹果");
    cout << p.m_Name<<"拿着: " << p.m_Phone.m_PName << endl;
}
int main()
{
    test01();
}