//

#include "iostream"
using namespace std;

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
    cin>>n>>r;
    for(int i=0;i<=n;i++){
        for(int j=0;j<=i;j++){
            cout<<Comb(i, j)<<" ";
        }
        cout<<endl;
    }
}
