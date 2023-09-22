#include<iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    do{
        cout<<a<<endl;
        cin>>a;
    }while(a%2==0);
    cout<<"END!!!"<<endl;
}
