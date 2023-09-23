//Ques1. Write a program to write a simple calculator.

#include <iostream>
using namespace std;
int main(){
    int a,b;
    char op;
    cout<<"Enter the numbers: ";
    cin>>a>>b;
    cout<<"Enter the operator: ";
    cin>>op;
    switch (op) {
        case '+':
            cout<<a+b<<endl;
            break;
        case '-':
            cout<<a-b<<endl;
            break;
        case '*':
            cout<<a*b<<endl;
            break;
        case '/':
            cout<<a/b<<endl;
            break;
        default:
            cout<<"Not added the operator yet!!! "<<endl;
            break;
    }
}
