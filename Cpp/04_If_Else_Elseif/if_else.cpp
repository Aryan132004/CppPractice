/*
 if/else
 The if block is used to specify the code to be executed if the condition specified in if is true, the else block is executed otherwise.
 
 below is an example
 */
#include <iostream>
using namespace std;
int main(){
    int age;
    cout<<"Enter your age: ";
    cin>>age;
    if(age>=18){
        cout<<"You can vote.\n";
    }
    else{
        cout<<"You can't vote.\n";
    }
    return 0;
}
