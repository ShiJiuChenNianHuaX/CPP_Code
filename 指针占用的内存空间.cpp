#include <iostream>
using namespace std;

int main(){
    //指针所占内存空间
    int a=10;
    // int * p;
    // p = &a;
    int *p = &a;
    cout << "sizeof int * =" << sizeof(int *) << endl;
    cout << "sizeof int * =" << sizeof(float *) << endl;
    cout << "sizeof int * =" << sizeof(double *) << endl;
    cout << "sizeof int * =" << sizeof(string *) << endl;


}