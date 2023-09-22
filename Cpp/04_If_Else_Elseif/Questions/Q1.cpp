/*
 1. Program to check if a number is even or odd.
 */
#include <iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter the number: ";
    cin>>a;
    if(a%2==0){
        cout<<a<<" is even. "<<endl;
    }
    else{
        cout<<a<<" is odd. "<<endl;
    }
}
