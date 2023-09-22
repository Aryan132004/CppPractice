/*
 this code is for the user to input a number till the number that the user is giving is even
 */

#include "iostream"
using namespace std;
int main(){
    int a;
    cin>>a;
    while(a%2==0){
        cin>>a;
    }
    cout<<"END"<<endl;
}
