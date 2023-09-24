#include<iostream>
using namespace std;
int main(){
    int a = 1, b = 3, c;
    c = b << a;
//  c = 011<<1
//  c = 110(6)
    b = c * (b * (++a)--);
//  b = 6 * (3 * (2)--;(a=2)
//  b = 6 * 6;(a=1)(b=36)
    a = a >> b;
//  a = 0001>>36;0
    cout<<b;
    return 0;
}
