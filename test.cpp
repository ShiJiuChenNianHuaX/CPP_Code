#include <iostream>
#include <cstring>
using namespace std;
char * getname(void);

char *getname()
{
    char temp[80];
    cout<<"Enter last name: ";
    cin >> temp;
    char * pn = new char[strlen(temp) + 1];
    strcpy(pn,temp);
    return pn;
}
int main()
{
    char * name;
    name = getname();
    cout << name << "at" << (int *)name << "\n";
    delete []name;
}
