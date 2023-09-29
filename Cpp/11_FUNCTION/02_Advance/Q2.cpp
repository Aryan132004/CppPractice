#include "iostream"
using namespace std;

bool check(int x,int y,int z){
    int a=max(x,max(y, z));
    int b,c;
}

int main(){
    int x,y,z;
    cin>>x>>y>>z;
    if(check(x,y,z)){
        cout<<"Pythagorian triplets"<<endl;
    }else{
        cout<<"not Pythagorian triplets"<<endl;
    }
    return 0;
}
