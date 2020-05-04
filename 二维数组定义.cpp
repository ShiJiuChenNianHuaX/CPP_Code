#include <iostream>
using namespace std;

int main(){
    //四种定义方式
    //1、数据类型 数组名[行数][列数]
    int arr[2][3];
    arr[0][0]=1;
    arr[0][1]=2;
    arr[0][2]=3;
    arr[1][0]=4;
    arr[1][1]=5;
    arr[1][2]=6;
    //外层循环打印行数，内层循环打印列数
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            cout << arr[i][j] << endl;
        }
    }
    //2、数据类型 数组名[行数][列数]
    int arr2[2][3]=
    {
        {1,2,3},
        {4,5,6}
    };
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            cout << arr2[i][j] <<" ";
        }
        cout << endl;
    }
    //3、数据类型 数组名[行数][列数]={数据1，数据2，数据3，数据4...};
    int arr3[2][3]={1,2,3,4,5,6};
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            cout << arr3[i][j] <<" ";
        }
        cout << endl;
    }
    //4、数据类型 数据名[][列数]={数据1，数据2，数据3，数据4...}
    int arr4[][3]={1,2,3,4,5,6};
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            cout << arr4[i][j] <<" ";
        }
        cout << endl;
    }
}