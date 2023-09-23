//Ques2. Write a program to find whether an alphabet is a vowel or a consonant.

#include "iostream"
using namespace std;
int main(){
    char a;
    cin>>a;
    switch (a) {
        case 'a':
            cout<<a<<" is a vowel"<<endl;
            break;
        case 'e':
            cout<<a<<" is a vowel"<<endl;
            break;
        case 'i':
            cout<<a<<" is a vowel"<<endl;
            break;
        case 'o':
            cout<<a<<" is a vowel"<<endl;
            break;
        case 'u':
            cout<<a<<" is a vowel"<<endl;
            break;
        default:
            cout<<a<<" is a consonant"<<endl;
            break;
    }
}
