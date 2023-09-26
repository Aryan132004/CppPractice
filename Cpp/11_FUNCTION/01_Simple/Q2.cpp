//Ques2. Write a program to print a given number using functions.
#include "iostream"
using namespace std;

void print(int a){
    cout<<a<<endl;
    return;
}
int add(int a, int b){
    print(a);
    print(b);
    int sum= a+b;
    return sum;
}
int main(){
    int a,b;
    cin>>a>>b;
    cout<<add(a,b)<<endl;
    return 0;
}
