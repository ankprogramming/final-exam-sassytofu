#include <iostream>
using namespace std;
int main() {
    float a,b,cmd,o_1,o_2,o_3,o_4;
    cout<< "Welcome to CLI Calculator V1.00"<<endl;
    cout<<"Number 1 : ";
    cin>>a;
    cout<<"Number 2 : ";
    cin>>b;
    do{
        cout<<"MENU\n1.+\n2.-\n3.*\n4./\n5.quit"<<endl;
        cin >>cmd;
        if(cmd==1) {
            o_1=a+b;
            cout<<"Result = "<<o_1<<endl;
        }else if(cmd==2) {
            o_2=a-b;
            cout<<"Result = "<<o_2<<endl;
        }else if(cmd==3) {
            o_3=a*b;
            cout<<"Result = "<<o_3<<endl;
        }else if(cmd==4) {
            o_4=a/b;
            cout<<"Result = "<<o_4<<endl;
        }{break;}
    }while(0);
 return 0;
}
