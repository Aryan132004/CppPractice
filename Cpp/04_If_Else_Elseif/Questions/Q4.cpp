/*
 4. Program to check if a triangle is scalene, isosceles or equilateral.
 */
#include <iostream>
using namespace std;
int main(){
    int s1,s2,s3;
    cout<<"Enter the side of the triangle: ";
    cin>>s1>>s2>>s3;
    if(s1==s2 && s2==s3){
        cout<<"Equilateral Triange."<<endl;
    }
    else if(s1==s2 || s1==s3 || s2==s3){
        cout<<"isosceles Triangle"<<endl;
    }
    else{
        cout<<"Scalar Triangle"<<endl;
    }
}
