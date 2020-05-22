/* c++中空指针也是可以调用成员函数的，但是也要注意有没有用到this指针
   如果用到this指针，需要加以判断保证代码的健壮性
*/
#include <iostream>
using namespace std;
//空指针调用成员函数

class Person
{
    public:
        void showClassName()
        {
            cout << "this is Person class" << endl;
        }
        void showPersonAge()
        {
            if(this == NULL)
            {
                return;
            }//判断传入的是否为空指针
            cout << "age= " << this->m_Age << endl;//传入的指针是为空的
        }
    int m_Age;
};
void test01()
{
    Person *p = NULL;
    
    p->showClassName();
    p->showPersonAge();
}
int main()
{
    test01();
}