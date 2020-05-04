#include <iostream>
#include <string>
#include <ctime>
using namespace std;

struct Student{
    string sName;
    int score;
};
struct Teacher{
    string tName;
    struct Student sArray[5];//创建名为sArry的数组
};
//给老师和学生赋值的函数
void allocateSpace(struct Teacher tArray[], int len)
{
    string nameSeed = "ABCDE";
    //给老师赋值
    for(int i=0;i<len;i++)
    {
        tArray[i].tName = "Teacher_";
        tArray[i].tName += nameSeed[i]; //Teacher_ 当i=0时追加字母nameSeed中的A
    //通过循环给每名老师所带的学生赋值
        for(int j=0;j<5;j++)
        {
        tArray[i].sArray[j].sName = "Student_";
        tArray[i].sArray[j].sName += nameSeed[j];

        int random = rand()%61+40;//伪随机出40-99
        tArray[i].sArray[j].score=random;
        }
    }
}
void printInfo(struct Teacher tArray[], int len)
{
    for(int i=0;i<len;i++)
    {
        cout << "老师姓名： " << tArray[i].tName << endl; 
        for(int j=0;j<5;j++)
        {
            cout << "\t学生姓名" << tArray[i].sArray[j].sName << " 考试分数 " 
            << tArray[i].sArray[j].score << endl;
        }
    }
}
int main(){
    //随机数种子
    srand((unsigned int)time(NULL));

    //1、创建三名老师的数组
    struct Teacher tArrty[3];
    //2、通过函数给三名老师的信息赋值，并且给老师带的学生信息赋值
    int len =sizeof(tArrty) / sizeof(tArrty[0]); //动态的获取数组长度
    allocateSpace(tArrty,len);
    //3、打印所有老师及所带学生信息
    printInfo(tArrty,len);
}