#include "iostream"
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=(1);i<=(n);i++){
        for(int j = (n-1) ; j>=i;j--){
            cout<<" ";
        }
        for(int k=n;k>=1;k--){
            cout<<"* ";
        }cout<<endl;
    }
}
