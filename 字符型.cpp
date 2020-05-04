#include <iostream>
using namespace std;
int main() {
    // 创建字符型变量
    char ch = 'b';
    char ch2 ='a';
    cout << "ch2=" << ch2 << endl;
    //查看字符型变量占用内存大小（字节）
    cout << "char字符型变量所占内存（单位：字节）"<<sizeof(char) << endl;
    return 0;
}
