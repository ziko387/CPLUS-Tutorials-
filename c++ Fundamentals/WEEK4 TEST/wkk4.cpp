#include <iostream>
#include <vector>
#include<string>
using namespace std;

int main(){
   double account_balance=50000.00;
   double withdraw_amount;

   
   cout<<"enter the amount you wish to withdraw"<<endl;
   cin>>withdraw_amount;

   for(int i =0;i<account_balance;i++){
    if(withdraw_amount > account_balance && account_balance <=0){
        cout<<"Unable to withdraw the amoount"<<endl;
        break;

    }else{
        account_balance -=withdraw_amount;
        cout<<"amount withdrawn: "<<withdraw_amount<<endl;
        cout<<"balance:"<<account_balance<<endl;
    }

   }

    
}