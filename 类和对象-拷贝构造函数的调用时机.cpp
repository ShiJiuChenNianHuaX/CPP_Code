//使用一个已经创建完毕的对象来初始化一个新对象
//值传递的方式给函数参数传值
//以值方式来返回局部对象
#include <iostream>
using namespace std;

class Person
{
public:
    Person()
    {
        cout << "Person默认构造函数调用" << endl;
    }
    Person(int age)
    {
        m_Age = age;
    }
    Person(const Person &p)
    {
        cout << "Person拷贝构造函数调用" << endl;
    }
    int m_Age;
    ~Person()
    {
        cout << "Person析构函数调用" << endl;
    }
    
};

//1、使用一个已经创建完毕的对象来初始化一个新对象
    void test01()
{
    Person p1(20);
    Person p2(p1);
}

//2、值传递的方式给函数参数传值



//3、以值方式来返回局部对象

int main()
{
    test01();
}