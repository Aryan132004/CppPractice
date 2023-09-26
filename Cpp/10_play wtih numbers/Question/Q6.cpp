// Ques6. Write a program to display all factors of a number.
#include "iostream"
using namespace std;
int main(){
    int n;
    cin>>n;
    int j=1;
    for(int i=1;i<=(n/2);i++){
        if(n%i==0){
            cout<<i<<endl;
        }
    }
}
