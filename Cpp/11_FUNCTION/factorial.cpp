#include "iostream"
using namespace std;

int fac(int num){
    int mult=1;
    for(int i=1;i<=num;i++){
        mult*=i;
    }
    return mult;
}

int main(){
    int n;
    cin>>n;
    cout<<fac(n)<<endl;
}
