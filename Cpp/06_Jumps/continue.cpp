#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter the number: ";
    cin>>a;
    for(int i=0;i<=a;i++){
        if(i%3==0){
            continue;
        }
        cout<<i<<endl;
    }
}
