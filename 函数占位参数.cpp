#include <iostream>
using namespace std;
//目前阶段的占位参数我们还用不到，后面课程中会用到
//占位参数可以有默认参数
void func(int a=10, int =10) 
{
    cout << "this is func" <<endl;
}

int main(){
    func(10);
}