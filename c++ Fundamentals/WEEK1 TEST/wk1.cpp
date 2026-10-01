#include <iostream>
using namespace std;

int main(){
    string customer_Name, phone_Model;
    int quantity;
    float phone_price,total_Price;

    cout<<"WELCOME TO NOKIA PHONE STORE \n"<<endl;
    cout<<"============================"<<endl;
    cout<<"enter your name"<<endl;
    cin>>customer_Name;
    cout<<"enter your phone model"<<endl;
    cin>>phone_Model;
    cout<<"enter the quantity of the phones you want"<<endl;
    cin>>quantity;
    cout<<"enter the phone price"<<endl;
    cin>>phone_price;


    total_Price =quantity * phone_price;

    cout<<"PHONE PAYMENT DETAILS \n"<<endl;
    cout<<"===================== \n"<<endl;
    cout<<"customerName:"<<customer_Name<<endl;
    cout<<"customerPhoneModel:"<<phone_Model<<endl;
    cout<<"quantity:"<<quantity<<endl;
    cout<<"phonePrice:"<<phone_price<<endl;
    cout<<"TotalPrice:"<<total_Price<<endl;

    cout<<"END \n"<<endl;
    cout<<"======================="<<endl;










}