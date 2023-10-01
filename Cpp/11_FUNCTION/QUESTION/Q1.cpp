//
//  Q1.cpp
//  Cpp
//
//  Created by Aryan Malik on 02/10/2023.
//

#include <iostream>
using namespace std;

int BTD(int num){
    int dec=0;
    int base=1;
    while(num > 0){
        int last_dij=num%10;
        num=num/10;
        dec+=last_dij*base;
        base*=2;
    }
    return dec;
}


int main(){
    int n;
    cin>>n;
    int j=BTD(n);
    cout<<j<<endl;
}
