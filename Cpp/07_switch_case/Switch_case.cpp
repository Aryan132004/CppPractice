// 5 button with differnt hello world

#include "iostream"
using namespace std;

//elseif

//int main(){
//    char a;
//    cin>>a;
//    if (a== 'a') {
//        cout<<"Hello1"<<endl;
//    }
//    else if (a == 'b'){
//        cout<<"Hello2"<<endl;
//    }
//    else if (a == 'c'){
//        cout<<"Hello3"<<endl;
//    }
//    else if (a == 'd'){
//        cout<<"Hello4"<<endl;
//    }
//    else if (a == 'e'){
//        cout<<"Hello5"<<endl;
//    }
//    else{
//        cout<<"i am learning more!!!"<<endl;
//    }
//}

// case switch

int main(){
    char a;
    cin>>a;
    switch (a) {
        case 'a':
            cout<<"Hello1"<<endl;
            break;
        case 'b':
            cout<<"Hello2"<<endl;
            break;
        case 'c':
            cout<<"Hello3"<<endl;
            break;
        case 'd':
            cout<<"Hello4"<<endl;
            break;
        case 'e':
            cout<<"Hello5"<<endl;
            break;
        default:
            cout<<"i am learning more!!!!"<<endl;
            break;
    }
}
