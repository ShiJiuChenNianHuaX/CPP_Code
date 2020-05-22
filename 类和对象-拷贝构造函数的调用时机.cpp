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
        cout << "Person有参构造函数调用" << endl;
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
    cout << "p2年龄为: "<<p2.m_Age << endl;
}
//2、值传递的方式给函数参数传值
    void doWork(Person p)
    {

    }
    void test02()
    {
        Person p;
        doWork(p); //传给了void doWork(Person p)形参
    }
//3、以值方式来返回局部对象
    Person doWork2()
    {
        Person p1;/* p1调用了默认构造函数，随后doWork2执行完成后p1就被释放，所以执行了一次析构函数。
                    */
        cout << (long*)&p1 << endl;
        return p1;//返回的是根据p1创建的对象随后返回给test03（调用了一次拷贝构造函数)
    }
    void test03()
    {
        Person p= doWork2(); //test03执行完成后执行第二次Person析构函数p接收的就是拷贝构造函数
        cout << (long*)&p << endl;
    }

int main()
{
    //test01();
    test03();
    return 0;
}