/*
 5. Program to check if an alphabet is a vowel or a consonant.
 */

#include <iostream>
using namespace std;
int main(){
    char a;
    cin>>a;
    a=toupper(a);
    if (a=='A'||a=='E'||a=='I'||a=='O'||a=='U'){
        cout<<"is a vowel. \n";
    }else{
        cout<<"is a consonant. \n";
    }
}
