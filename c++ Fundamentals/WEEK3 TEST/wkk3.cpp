#include <iostream>
using namespace std;

string customerName;
double number_of_units,water_Bill,rate_per_unit,discount,final_amount;


void getCustomerDetails(){
    cout<<"WELCOME TO NAIROBI WATER COMPANY\n"<<endl;
    cout<<"enter the customer name"<<endl;
    cin>>customerName;
    cout<<"enter the rate of the units consumed"<<endl;
    cin>>rate_per_unit;
    cout<<"enter the number of units consumed by the customer"<<endl;
    cin>>number_of_units;
}

void calculateBill(){
    water_Bill = number_of_units * rate_per_unit;
}

void applyDiscount(){
 
 if (number_of_units > 100)
 {
    discount = water_Bill * 0.1;

   final_amount = water_Bill -discount; 
 }else{
    discount=0;
    final_amount =water_Bill;

 }
 

}

void displayDetails(){
    cout<<"HERE ARE THE CUSTOMER BILL DETAILS \n"<<endl;
    cout<<"======================================="<<endl;
    cout<<"customer name: "<<customerName<<endl;
    cout<<"units consumed: "<<number_of_units<<endl;
    cout<<"Bill before: "<<water_Bill<<endl;
    cout<<"Discount: "<<discount<<endl;
    cout<<"final payment: "<<final_amount<<endl;
    cout<<"======================================="<<endl;

}
int main(){
getCustomerDetails();
calculateBill();
applyDiscount();
displayDetails();
}