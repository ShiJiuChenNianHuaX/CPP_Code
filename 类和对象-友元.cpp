#include <iostream>
#include <string>
using namespace std;

class Building
{
    public:
        Building()
        {
            m_SittingRoom = "客厅";
            m_BedRoom = "卧室";
        }
    public:
        string m_SittingRoom;
    private:
        string m_BedRoom;
};

void goodGay(Building *building)
{
    cout << "好基友的全局函数正在访问： " << building->m_SittingRoom << endl;
}
void test01()
{
    Building building ;
    goodGay(&building);
}
int main()
{   
    test01();
}
