#include "iostream"
using namespace std;
int main(){
    int a;
    cout<<"Enter the Numebr between 0 and 200 : ";
    cin>>a;
    for(int i=1;i<200;i++){
        if(i==a){
            break;
        }
        cout<<i<<endl;
    }
}
