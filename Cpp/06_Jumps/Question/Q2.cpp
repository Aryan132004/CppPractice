//Ques2. Write a program to check if a given number is prime or not.
#include "iostream"
using namespace std;
int main(){
    int a,i;
    cin>>a;
    for(i=2;i<(a/2);i++){
        if(a%i==0){
            cout<<"Not Prime"<<endl;
            break;
        }
    }
    if(a==i){
        cout<<"Prime"<<endl;
    }
    return 0;
}
