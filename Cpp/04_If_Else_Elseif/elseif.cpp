/*
 
 else if
 To specify multiple if conditions, we first use if and then the consecutive statements use else if.
 
 */

#include "iostream"
using namespace std;
int main(){
    int num1,num2;
    cout<<"Enter the 2 numbers (with space or with enter in b/w): \n";
    cin>>num1>>num2;
    if(num1>num2){
        cout<<num1<<" is gerater than"<<num2<<endl;
    }
    else if(num1==num2){
        cout<<num1<<" is equal to "<<num2<<endl;
    }
    else{
        cout<<num2<<" is greater then "<<num1<<endl;
    }
}
