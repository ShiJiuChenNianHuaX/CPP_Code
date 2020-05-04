//struct默认权限为公共
//class默认为私有
#include <iostream>
using namespace std;

class C1
{
    int m_A; //默认私有权限
};
struct C2
{
    int m_A;//默认公共权限
};
int main()
{
    //struct默认权限为公共
    //class默认为私有
    C1 c1;
    //c1.m_A =100;//私有权限
    C2 c2;
    c2.m_A=100;
}
