#include "iostream"
using namespace std;
int main(){
    int n;
    cin>>n;
    int num=n;
    int sum=0;
    while(num>0){
        int lastdigit = num%10;
        num=num/10;
        sum+=pow(lastdigit, 3);
    }
    if(sum==n){
        cout<<"Armstrong number"<<endl;
    }else{
        cout<<"Not Armstrong number"<<endl;
    }
    cout<<endl;
    return 0;
}
