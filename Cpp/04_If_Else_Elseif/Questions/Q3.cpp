/*
 3. Program to find the maximum among three numbers.
 */

#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter the numebrs: ";
    cin>>a>>b>>c;
    if(a>b){
        if(a>c){
            cout<<a<<" is the greatest number.\n";
        }
        else{
            cout<<c<<" is the greatest number.\n";
        }
    }
    else{
        if(b>c){
            cout<<b<<" is the greatest number.\n";
        }
        else{
            cout<<c<<" is the greatest number.\n";
        }
    }
}
