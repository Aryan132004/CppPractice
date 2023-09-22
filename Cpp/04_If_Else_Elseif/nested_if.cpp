#include <iostream>
using namespace std;
int main(){
    int num1,num2,num3;
    cout<<"Enter the 3 numbers (with space or with enter in b/w): \n";
    cin>>num1>>num2>>num3;
    if(num1>num2){
        if(num1>num3){
            cout<<num1<<" is the greatest number. ";
        }
        else{
            cout<<num3<<" is the greatest number. ";
        }
    }
    else{
        if(num2>num3){
            cout<<num2<<" is the greatest number. ";
        }
        else{
            cout<<num3<<" is the greatest number. ";
        }
    }
}
