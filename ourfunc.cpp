// 自定义无返回值的函数
#include <iostream>
void simon(int);//函数声明

int main(){
    using namespace std;
    simon(3);
    cout<<"pick an integer:";
    int count;
    cin>>count;
    simon(count); //再次声明函数
    cout<<"Done!"<<endl;
    return 0;
}
void simon(int n){ //该自定义函数无返回值
    using namespace std;
    cout<<"Simon says touch your toes"<<n<<"time."<<endl;
}
