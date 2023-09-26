// Ques1. Write a program to add 2 numbers using functions.

#include <iostream>
using namespace std;
int sum(int n1,int n2){
    int add = n1+n2;
    return add;
}
int main(){
    int a,b,add;
    cin>>a>>b;
    add=sum(a,b);
    cout<<add<<endl;
}
