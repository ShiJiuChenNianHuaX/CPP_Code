//
// Created by me on 2020/4/22.
//
#include <iostream>
using namespace std;
int main(){
    int arr[5]={300,350,200,400,250};
    int max=300;
    for(int i=0;i<5;i++){
        //cout << arr[i] << endl;
        //访问数组中的每个元素，如果该元素比我认定的最大值要大，更新最大值
        if(arr[i]>max){
            max = arr[i];
        }
    }
    cout <<"最大的数字为" << max << endl;

    //声明5个元素的数组，并且将元素逆置
    //1、创建一个数组
    int arr2[5]={1,3,2,5,4};
    for(int i=0;i<5;i++){
        cout << arr2[i] <<endl;
    }
    //2、实现逆置
    
    int start = 0;//2.1 记录起始下标位置
    int end = sizeof(arr2)/sizeof(arr2[0])-1;//2.2 记录结束下标位置
    
    while(start<end){//2.5循环执行2.1操作，直到起始位置 >= 结束位置
        //2.3起始下标与结束下标的元素互换
        int temp = arr2[start]; //记录0时候的值
        arr2[start]=arr2[end];
        arr2[end]=temp;
        //下标更新
        start++;//2.4起始位置++ 
        end--; //2.4结束位置--
    }
    cout << "数组逆置之后" <<endl;
    for(int i=0;i<5;i++){
        cout << arr2[i] <<endl;
    }
    
    return 0;
}
