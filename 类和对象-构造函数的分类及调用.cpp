/*
两种分类方式：
    按参数分为：有参构造和无参构造（默认构造）
    按类型分为：普通构造和拷贝构造
三种调用方式：
    括号法
    显示法
    隐式转换法
*/
#include <string>
#include <iostream>
using namespace std;
/*两种分类方式：
    按参数分为：有参构造和无参构造（默认构造）
*/
class Person
{
public:
    Person()
    {
        cout << " Person无参（默认）构造函数调用" << endl;
    }
    Person(int a)
    {
        age = a;
        cout << " Person有参构造函数调用" << endl;
    }



    /*按类型分为：普通构造和拷贝构造*/
    Person(const Person &p)//拷贝构造函数其余写法都是普通构造
    {
        //将传入的人身上的所有属性拷贝到当前Person上
        cout << " Person拷贝构造函数调用" << endl;
        age = p.age;
    }
    int age;

    ~Person()
    {
        cout << "Person析构函数调用" << endl;
    }
};

void test01()
{
    //三种调用方式：
    //1、括号法
    Person p1;//默认构造函数的调用
    Person p2(10);//有参构造函数
    Person p3(p2);//拷贝构造函数

    cout << "p2的年龄为： "<<p2.age<<endl;
    cout << "p3的年龄为： "<<p3.age<<endl;
    //注意事项：调用默认（无参）构造函数的时候不要加()，因为Person p1()会被编译器认为是函数的声明

    //2、显示法
    Person p1;//无参构造
    Person p2 = Person(10);//有参构造
    Person p3 = Person(p2);//拷贝构造
    Person(10);//匿名对象 特点：当前行结束后，系统会立即回收掉匿名对象
    cout << "aaaaa" << endl;    /*打印结果：Person有参构造函数调用
                                Person析构函数调用
                                aaaaa   
                                表明匿名对象一运行结束就被释放然后才打印aaaaa
                                */
    //注意事项：不要利用拷贝构造函数初始化匿名对象
    //Person(p3);编译器会认为Person(p3) == Person p3;在实例化一个p3，所以重复定义
    
    //3、隐式转换法
    Person p4 =10; //相当于写了 Person p4 = Person(10);有参构造;
    Person p5 = p4;//拷贝构造
}   
int main()
{
    test01();
}