#include <iostream>
using namespace std;

int main()
{
    //结构体中的成员可以是另一个结构体
    //例如每个老师辅导一个学院，一个老师的结构体黄总记录一个学生的结构体
    struct student
    {
        string name;
        int age;
        int score; 
    };
    struct teacher
    {
        int id;
        string name;
        int age;
        struct student stu;
    };
    teacher t;
    t.id=10000;
    t.name="老王";
    t.age=50;
    t.stu.name="小王";
    t.stu.age=20;
    t.stu.score=60;
    cout << "老师姓名: " << t.name << "老师编号 " << t.id << "老师年龄 " << t.age
    << "老师辅导学生的姓名 " << t.stu.name << "学生年龄 " << t.stu.age << "学生分数 " 
    << t.stu.score << endl;
 
}
