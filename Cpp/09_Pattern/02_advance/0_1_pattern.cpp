//
//  0_1_pattern.cpp
//  Cpp
//
//  Created by Aryan Malik on 24/09/2023.
//

#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            int O_E = (i+j)%2;
            if (O_E==0) {
                cout<<"1 ";
            }else{
                cout<<"0 ";
            }
        }cout<<endl;
    }
}
