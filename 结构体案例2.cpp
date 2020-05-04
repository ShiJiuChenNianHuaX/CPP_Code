#include <iostream>
#include <string>
using namespace std;
//1、设计英雄结构体
struct Hero
{
    string name;
    int age;
    string sex;    
};
void bubbleSort(struct Hero heroArray[],int len)
{
    for(int i=0;i<len-1;i++)
    {
        for(int j=0;j<len-i-1;j++)
        {
            //如果j下标的元素年龄大于j+1下标元素的年龄，交换两个元素
            if(heroArray[j].age>heroArray[j+1].age)
            {
                struct Hero temp = heroArray[j];
                heroArray[j]=heroArray[j+1];
                heroArray[j+1] = temp;
            }
        }
    }
}
//3、打印排序后数组中的信息
void printHero(struct Hero heroArray[],int len)
{
    for(int i=0;i<len;i++)
    {
        cout << "姓名 " << heroArray[i].name << " 年龄 " << heroArray[i].age << " 性别 " << 
        heroArray[i].sex << endl; 
    }
}
int main()
{
    //2、创建数组存放5名英雄
    struct Hero heroArray[5]=
    {
        {"刘备",20,"男"},
        {"关于",22,"男"},
        {"张飞",23,"男"},
        {"赵云",21,"男"},
        {"貂蝉",18,"女"},
    };
    int len = sizeof(heroArray) / sizeof(heroArray[0]);
    cout << "排序前打印结果：" << endl;
    for(int i=0;i<len;i++)
    {
        cout << "姓名 " << heroArray[i].name << " 年龄 " << heroArray[i].age << " 性别 " << 
        heroArray[i].sex << endl; 
    }
    //对数组进行排序，按照年龄升序排列
    bubbleSort(heroArray,len);
    cout <<"排序后的打印结果："<< endl;
    printHero(heroArray,len);
}