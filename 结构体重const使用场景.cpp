#include <iostream>
#include <string>
using namespace std;

//const使用场景
struct student 
{
    string name;
    int age;
    int score;
};
//将函数中的形参改为指针，可以减少内存空间，而且不会复制新的副本出来
void printStudent(const student *s){ //防止误操作，在形参前加一个const
    cout << "姓名 " << s->name << "年龄 " << s->age << "分数 " << s->score << endl; 
} 
int main(){
    struct student s = {"张三",15,70};
    printStudent(&s);
    cout << "张三年龄为" << s.age << endl;
}