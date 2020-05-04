//c++ OOP三大特性：封装、继承、多态
//万物都可以作为对象，对象上有属性和行为;具有相同性质的“对象”抽象称为“类”
//封装，意义：（1）将属性和行为作为一个整体来表现生活中的事物。（2）将属性和行为加以权限控制
//封装的语法：class 类名{访问权限: 属性/行为};
#include <iostream>
#include <string>
using namespace std;

const double PI=3.14;

//设计一个圆类，求圆的周长
//圆球周长公式：2*PI*半径
//class代表设计一个类，类后面紧跟类的名称
class Circle{
    //访问权限
    public:        //公共权限
    //类中的属性和行为统称为成员
    //属性也称为 成员属性 成员变量
    //行为也称为 成员函数 成员方法
    //属性
    int m_r; //半径
    //行为 获取圆的周长
    double calculate()
    {
        return 2* PI * m_r;
    }
};
class Student
{
    public:
    string s_name;
    int s_Id;
    void showStudent()
    {
        cout << "姓名: "<<s_name<<"学号： "<<s_Id<<endl;
    }
    //给姓名赋值--通过行为赋值
    void setName(string name)
    {
        s_name = name;
    }
    void setId(int id)
    {
        s_Id=id;
    }
};
int main(){
    //通过圆类创建一个具体的圆-对象
    Circle c1; //实例化---通过一个类创建一个对象的过程，对象名字叫c1
    //给圆对象的属性进行赋值
    c1.m_r=10;
    cout <<"圆的周长为：" << c1.calculate() << endl;
    Student s1;
    //s1.s_name="张三";
    s1.setName("张三");
    s1.setId(1);
    //s1.s_Id=1;
    s1.showStudent();
}
