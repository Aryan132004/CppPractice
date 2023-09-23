//Ques3. Write a program to print all prime numbers in a given range
#include "iostream"
using namespace std;
int main(){
    int lr,ur;
    cin>>lr>>ur;
    for(int rnge=lr ; rnge<ur ; rnge++){
        int j;
        for(j=2;j<rnge;j++){
            if(rnge%j==0){
                break;//not prime
            }
        }
        if(rnge==j){
            cout<<rnge<<endl;
        }
    }
}
