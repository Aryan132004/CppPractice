//Program to add only positive numbers./// for do while i have give the question that the sum till the last -ive number that is give by the user

#include "iostream"
using namespace std;
int main(){
    int a,sum;
    sum=0;
    cout<<"Enter the number: ";
    do{
        cin>>a;
        sum+=a;
    }while(a>=0);
    cout<<"Sun: "<<sum<<endl;
}
