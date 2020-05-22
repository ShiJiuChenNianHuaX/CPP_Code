//深浅拷贝是面试景点问题，也是常见的坑
//浅拷贝：简单的赋值拷贝操作（编译器提供） 问题：堆区内存重复释放 解决：深拷贝
//深拷贝：在堆区重新申请空间，进行拷贝操作（程序员自己定义）
//如果属性有在堆区开辟，一定要自己提供拷贝构造函数，防止浅拷贝带来的问题
#include <iostream>
using namespace std;

class Person
{
public:
    Person()
    {
        cout << "person的默认构造函数调用"<< endl;
    }
    int m_Age;
    int *m_Height;
    Person(int age, int height)
    {   
        m_Age = age;
        m_Height = new int(height);//堆区开辟
        cout << "person的有参构造函数调用"<< endl;
    }
    //自己实现拷贝构造函数 解决浅拷贝的问题
    Person(const Person &p)
    {
        cout<< "Person拷贝构造函数调用" << endl;
        m_Age = p.m_Age;
        //m_Height = P.m_Height 编译器默认实现
        //深拷贝
        m_Height = new int(*p.m_Height);
    }
    ~Person()
    {
        //析构代码，将堆区开辟的数据做释放操作
        if(m_Height != NULL)
        {
            delete m_Height;
            m_Height = NULL;//防止野指针出现，置空操作
        }
        cout << "Person的析构函数调用"<< endl;
    }
    
};
void test01()
{
    Person p1(18,160);
    cout << "p1的年龄为：" << p1.m_Age << "身高为："<< *p1.m_Height<< endl;
    Person p2(p1); //浅拷贝，编译器写了一个拷贝构造函数，进行了一个赋值操作
    cout << "p2的年龄为：" << p2.m_Age <<"身高为："<< *p2.m_Height << endl; 
}
int main()
{
    test01();
}
