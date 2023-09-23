#include "iostream"
using namespace std;
int main(){
    int i,j,k;
    i = 1;
    j = 2;
//      1 + 2 + 1"2"+ 2"3"+  3  + 4   == 13
    k = i + j + i++ + j++ + ++i + ++j;
    cout<<k<<endl;
}
