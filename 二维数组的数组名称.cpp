#include <iostream>
using namespace std;

int main(){
    //1、可以查看占用的内存空间大小
    int arr[2][3]=
    {
      {1,2,3},
      {4,5,6}
    };
    cout << "二维数组占用的内存空间为"<<sizeof(arr)<< endl; //int 4bit*6 double 8bit*6
    cout <<"二维数组第一行占用的内存为"<< sizeof(arr[0]) << endl ;
    cout << "二维数组第一个元素占用内存为"<<sizeof(arr[0][0])<<endl;

    cout <<"二维数组行数为"<< sizeof(arr)/sizeof(arr[0]) << endl;
    cout << "二维数组列数为"<< sizeof(arr[0])/sizeof(arr[0][0])<<endl;
    //2、可以查看二维数组的首地址
    cout <<"二维数组首地址为" << arr << endl;
    cout <<"二维数组第一行首地址为" << arr[0] << endl;
    cout << "二维数组第一个元素首地址" << &arr[0][0] <<endl; //& 取某一元素地址
    cout <<"二维数组第二行首地址" << arr[1] << endl; //第一行和第二行差12个字节，因为第一行和第二行隔着3个数据。4bit*3
    cout << "二维数组第二个元素首地址" << &arr[0][2] <<endl;

}