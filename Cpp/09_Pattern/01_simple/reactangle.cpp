#include "iostream"
using namespace std;
int main(){
    int len,bre,i;
    cin>>len>>bre;
    for(i=0;i<len;i++){
        for(int j=0;j<bre;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
