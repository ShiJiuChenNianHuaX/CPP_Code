//
// Created by me on 2020/4/14.
//
#include <iostream>
using namespace std;
// int main(){
//     cout << "请给电影打分"<< endl;
//     int score = 0;
//     cin >> score;
//     cout << "您打的分是" << score << endl;

//     switch (score){
//         case 10:
//             cout << "您认为是经典电影"<< endl;
//             break; //退出当前分支
//         case 9:
//             cout << "您认为这是经典电影"<<endl;
//             break;
//         case 8:
//             cout << "您认为电影非常棒"<<endl;
//             break;
//         case 7:
//             cout << "您认为电影非常棒"<<endl;
//             break;
//         case 6:
//             cout << "您认为电影一般"<<endl;
//             break;
//         case 5:
//             cout << "您认为电影一般"<<endl;
//             break;
//         default:
//             cout << "您认为这是烂片"<<endl;
//             break;
//     }
//     //if和switch的区别？
//     //switch缺点：判断时候只能是整型或者字符型，不可以是一个区间
//     //switch有点：结构层次清晰，执行效率高
//     return 0;
// }
int main()
{
    int a=1,b=2,c=3,d=4,y=10;
// switch(y)
// {	
// 	case1: a++;break;
// 	default:d=1;
// 	 case2:b++;break;
// 	 case4:c++;break;
// }
// cout << a << b << c << d << endl;
 c=b++;
 cout << c << endl;
 cout << b << endl;
}