//
//  Q2.cpp
//  Cpp
//
//  Created by Aryan Malik on 02/10/2023.
// octal to dec

#include <iostream>
using namespace std;

int OTD(int num){
    int base=1;
    int dec=0;
    while(num>0){
        int last_dig=num%10;
        num/=10;
        dec=dec+last_dig*base;
        base=base*8;
    }
    return dec;
}

int main(){
    int num;
    cin>>num;
    int dec = OTD(num);
    cout<<dec<<endl;
}

// hEllo

