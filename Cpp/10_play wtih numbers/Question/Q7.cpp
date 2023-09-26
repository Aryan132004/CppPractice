// Ques7. Write a program to find the factorial of a given number.
#include "iostream"
using namespace std;
int main(){
    int n,fac;
    cin>>n;
    fac=1;
    if(n==0){
        fac=1;
    }else{
        while(n>=1){
            fac *= (n--);
        }
    }
    cout<<fac<<endl;
}
