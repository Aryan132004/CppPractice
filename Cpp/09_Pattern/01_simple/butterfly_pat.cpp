#include "iostream"
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){  //print star 1st
            cout<<"* ";
        }
        int space=2*n - 2*i;
        for(int k=1;k<=space;k++){
            cout<<"  ";
        }
        for(int j=1;j<=i;j++){  //print star 1st
            cout<<"* ";
        }
        cout<<endl;
        
    }
    for(int i=n;i>=1;i--){
        for(int j=1;j<=i;j++){  //print star 1st
            cout<<"* ";
        }
        int space=2*n - 2*i;
        for(int k=1;k<=space;k++){
            cout<<"  ";
        }
        for(int j=1;j<=i;j++){  //print star 1st
            cout<<"* ";
        }
        cout<<endl;
    }
    
}
