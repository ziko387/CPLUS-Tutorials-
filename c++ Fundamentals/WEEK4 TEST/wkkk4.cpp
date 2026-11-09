#include <iostream>
using namespace std;

int main(){
    string username ="sherrif30";
    string password ="Allifa@2010$";
    string username1;
    string password1;
    
    do{
        cout<<"enter your username"<<endl;
        cin>>username1;
        cout<<"enter your password"<<endl;
        cin>>password1;

        if(username1 == username && password1 == password){
            cout<<"Access Granted"<<endl;
            break;
        }else{
            cout<<"Invalid credentials please try again"<<endl;
            continue;
        }



    }while(username1!=username || password1 != password);
    return 0;
}
