#include <iostream>
using namespace std;
#include <string>
//用户自定义数据类型，允许用户存储不同的数据类型
//语法： struct 结构体名 {结构体成员列表};
struct Student
{
    string name;
    int age;
    int score;
}s3;//2.3在定义结构体时顺便创建结构体变量
int main()
{
//2、通过学生类型创建具体学生
//2.1struct Student s1;
    struct Student s1;
    //给s1属性赋值,通过.来访问结构体变量中的属性
    s1.name = "张三";
    s1.age= 18;
    s1.score=100;
    cout << "姓名: " << s1.name << "年龄: " << s1.age << "分数: " << s1.score <<endl;
//2.2struct Student s2={...};
    struct Student s2={"李四",20,80};
    cout << "姓名: " << s2.name << "年龄: " << s2.age << "分数: " << s2.score <<endl;
    
    s3.name="王五";
    s3.age=20;
    s3.score=60;
    cout << "姓名: " << s3.name << "年龄: " << s3.age << "分数: " << s3.score <<endl;
}

