#include <iostream>
#include<vector>
using namespace std;

int main(){
    double revenue[7];
    double revenue_sum =0;
    double average;

    cout<<"WELCOME TO MAZAMBI HOTEL REVENUE CALCULATOR \n"<<endl;
    cout<<"enter the first revenue"<<endl;
    cin>> revenue[0];
    cout<<"enter the second revenue"<<endl;
    cin>> revenue[1];
    cout<<"enter the third revenue"<<endl;
    cin>> revenue[2];
    cout<<"enter the fourth revenue"<<endl;
    cin>> revenue[3];
    cout<<"enter the fifth revenue"<<endl;
    cin>> revenue[4];
    cout<<"enter the sixth revenue"<<endl;
    cin>> revenue[5];
    cout<<"enter the seventh revenue"<<endl;
    cin>> revenue[6];
    

    for(int i =0 ;i<size(revenue);i++){
       
       revenue_sum += revenue[i];
   

     average = revenue_sum / size(revenue);

    
    }
    cout<<"REVENUE DETAILS OF MAZAMBI HOTEL\n"<<endl;
     cout<<"the sum of the revenue is: "<<revenue_sum<<endl;
     cout<<"the avaerage of the revenue is: "<<average<<endl;



}