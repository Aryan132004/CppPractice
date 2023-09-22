/*
 Ques1. Program to find sum of natural numbers till n.
 */

#include "iostream"
using namespace std;
int main(){
    int a;
    cin>>a;
    int sum=0;
    for(int i=1;i<=a;i++){
        sum += i;
    }
    cout<<sum<<endl;
}
