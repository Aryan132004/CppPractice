// Ques2. Program to display multiplication table upto 10.
#include "iostream"
using namespace std;
int main(){
    int a, mult;
    cout<<"Enter a positive number: ";
    cin>>a;
    int i=1;
    mult = 1;
    while(i<=10){
        mult=a*i;
        cout<<mult<<endl;
        i++;
    }
}
