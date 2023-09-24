//
//  half_pra_180_rot.cpp
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
        for(int j=1;j<=n;j++){
            if (j<=n-i) {
                cout<<" ";
            }else{
                cout<<"*";
            }
        }
        cout<<endl;
    }
}
