//优点1：将所有成员属性设置为私有，可以自己控制读写权限
//优点2：对于写权限，我们可以检测数据的有效性
#include <iostream>
#include <string>
using namespace std;

//成员属性设置为私有
class Person
{
    public:
    //设置姓名
    void setName(string name)
    {
        m_Name = name;
    }
    //获取姓名
    string getName()
    {
        return m_Name;
    }
    //获取年龄 可读可写如果想修改（年龄的范围必须是0~150之间）
    int getAge()
    {
        //m_age=0;
        return m_Age;
    }
    //设置年龄
    void setAge(int age)
    {
        if(age <0 || age >150)
        {
            m_Age=0;
            cout << "输入的年龄有误" << endl;
            return ;
        }
        m_Age = age;
    }
    //设置情人
    void setLover(string lover)
    {
        m_Lover=lover;
    }
    private:
    string m_Name;//可读可写权限
    int m_Age;//只读
    string m_Lover;//只写
};
int main()
{
    Person p;
    p.setName("张三");
    cout << "姓名为: " << p.getName() << endl;
    p.setAge(18);
    cout << "年龄为: " << p.getAge() << endl;
    p.setLover("苍井");
    //cout << "情人为： "<< p.setLover()<< endl;
}
