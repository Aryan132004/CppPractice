//Ques1. Write a program to print all odd numbers till n.
//use break and continue;

#include "iostream"
using namespace std;
int main(){
    int a;
    cout<<"Enter the number: ";
    cin>>a;
    for(int i=0;i<=a;i++){
        if(i%2==0){
            continue;
        }
        cout<<i<<endl;
    }
    return 0;
}
