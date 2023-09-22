/*
 user input=2
 output should be the sum from 0 to the number
 */

#include <iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter the numbers: ";
    cin>>a;
    int sum=0;
  //for(initialization ; condition ; counter_update)
    for(int i=0;i<=a;i++){
        sum += i;
    }
    cout<<"Sum: "<<sum<<endl;
}
