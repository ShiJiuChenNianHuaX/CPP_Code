// 1、代码区 存放函数体的二进制代码，由操作系统进行管理
// 2、全局区 存放全局变量和静态变量
// 以上两个区域都在程序运行前的区域，程序运行后有以下两个区域
// 3、栈区 由编译器自动分配释放，存放函数的参数值，局部变量等
// 4、堆区 由程序员分配和释放，若程序员不释放，程序结束时由操作系统回收

// 内存四区意义：不同区域存放的数据，赋予不同的生命周期，给我们更大的灵活编程

// 1.1 在程序编译后，生成可执行程序，未执行该程序前分为两个区域

// 代码区：
//         存放CPU执行的机器指令
//         代码区是共享的： 共享目的是对于频繁被执行的程序，只需在内存中有一份代码即可
//         代码区是只读的： 使其只读的原因是因为防止程序意外的修改了它的指令
// 全局区： 
//         全局变量和静态变量存在在此
//         全局区还包含了常量区，字符串常量和其他常量（const修饰的变量）也存放在此
//         该区域的数据在程序结束后由操作系统释放
// 栈区： 由编译器自动分配释放，存放函数的参数值（形参），局部变量等。注意：不要返回局部变量的地址，栈区开辟的数据由编译器自动释放
// 堆区： 由程序员分配和释放，若程序员不释放，程序结束时由操作系统回收。在C++中主要利用new在堆区开辟内存
// 堆区的开辟：new运算符。释放：delete。语法：new 数据类型 利用new创建的数据，会返回该数据对应的类型的指针
#include <iostream>
using namespace std;

// //全局变量 
// int g_a=10;
// int g_b=10;
// //const修饰的全局变量=全局常量
// const int c_g_a=10;
// const int c_g_b=10;
// //栈区数据的注意事项
// int * function(){
//         int c=10;//局部变量使用后会被释放
//         return &c; //返回局部变量的地址
// }
//在堆区开辟数据
int * func(){
       //利用new关键字，可以将数据开辟到堆区
        //指针本质也是局部变量，放在栈上。指针保存的数据是放在堆区,new返回的是该数据类型的指针
        int *p =new int(10);
        return p;
}
 
void test01(){
        //堆区的数据由程序员开辟、释放
        int *p = func();
        cout << *p << endl;
        cout << *p << endl;
        cout << *p << endl;
       
        delete p;
        //cout << *p << endl;//内存已经被释放，再次访问就是非法操作
        
         
}
//在堆区利用new开辟数组
void test02(){
        //创建10整型数据的数组，在堆区
       int * arr = new int[10];
       for(int i=0;i<10;i++){
               arr[i]=i+100;//给10个元素赋值 100-109
       }
       for(int i=0;i<10;i++){
               cout <<arr[i] <<endl;
       }
       //释放堆区数组要加一个[]
       delete[] arr;
//        for(int i=0;i<10;i++){
//                cout <<arr[i] <<endl;
//        } 同test01的情况
}
int main(){
        //普通局部变量
        // int a=10;
        // int b=10;
        // cout<<"局部变量a " << (long)&a <<endl;
        // cout<<"局部变量b " << (long)&b <<endl;
        // cout<<"全局变量g_a " << (long)&g_a <<endl;
        // cout<<"全局变量g_b " << (long)&g_b <<endl;
        // //静态变量 在普通变量前加static，属于静态变量
        // static int s_a=10;
        // static int s_b=10;
        // cout << "静态变量s_a的地址为： " << (long)&s_a << endl;
        // cout << "静态变量s_a的地址为： " << (long)&s_b << endl;
        // //常量
        // //字符串常量
        // cout << "字符串常量的地址为：" << (long)&"hello world" << endl;
        // //const修饰的变量
        // // const修饰的全局变量，const修饰的局部变量
        // cout << "全局常量 " << "c_g_a的地址为 " << (long)&c_g_a << endl; 
        // cout << "全局常量 " << "c_g_b的地址为 " << (long)&c_g_b << endl; 
        // const int c_l_a =10;
        // const int c_l_b =10;
        // cout << "局部常量 " << "c_l_a的地址为 " << (long)&c_l_a << endl; 
        // cout << "局部常量 " << "c_l_a的地址为 " << (long)&c_l_a << endl; 

       // int *p = function();//接收function函数的返回值
       // cout << *p << endl;
       //在堆区开辟数据
//        int *p=function2();
//        cout<<*p<<endl;
        test01();
        test02();

}
