/*
 C(n,r)=  n!
        r!(n-r)!
 */

#include "iostream"
using namespace::std;

int fac(int num){
    int mult=1;
    for(int i=1;i<=num;i++){
        mult *= i;
    }
    return mult;
}

int Comb(int n,int r){
    int res=fac(n)/(fac(r)*fac(n-r));
    return res;
}


int main(){
    int n,r;
    cout<<"n: ";
    cin>>n;
    cout<<"r: ";
    cin>>r;
    
    cout<<Comb(n,r)<<endl;
}
