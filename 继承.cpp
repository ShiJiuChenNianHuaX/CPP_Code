#include <iostream>

using namespace std;

class Shape{
    public:
        void setWidth(int w){
            Width = w;
        }
        void setHight(int h){
            Height = h;
        }
        protected:
        int Width;
        int Height;
};

class Rectangle: public Shape{
    public:
    int getArea(){
        return (Width * Height);
    }
};
int main(void){
    Rectangle Rect;
    Rect.setWidth(5);
    Rect.setHight(7);
    cout<<"Total area"<<Rect.getArea()<<endl;
    return 0;
}