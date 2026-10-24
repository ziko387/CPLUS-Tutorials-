#include<iostream>
using namespace std;

string employeesName;
double basicSalary;
int overtimeHours;
double overTimePay;
double ratePerHour;
double salary;

void employeeDetails(){
    

    cout<<"WELCOME TO THE JAMORO COMPANY PAYLOAD\n"<<endl;
    cout<<"enter the employees name"<<endl;
    cin>>employeesName;
    cout<<"enter the employees basic salary"<<endl;
    cin>>basicSalary;
    cout<<"enter the employee rate hour payment"<<endl;
    cin>>ratePerHour;
    cout<<"enter the employees Overtime Hours"<<endl;
    cin>>overtimeHours; 
    
    
}

void calculateOvertimePay(){
    
     
overTimePay = overtimeHours * ratePerHour;

}

void calculateNetSalary(){
    salary =  basicSalary + overTimePay;
}

void diplaySlip(){
    cout<<"here is your payslip $"<<employeesName<<"\n"<<endl;
    cout<<"======================================="<<endl;
    cout<<"employees name: "<<employeesName<<endl;
    cout<< "employees basic salary; "<<basicSalary<<endl;
    cout<<"employees overtime hours"<<overtimeHours<<endl;
    cout<<"employees overtime pay"<<overTimePay<<endl;
    cout<<"employees rate per hour"<<ratePerHour<<endl;
    cout<<"employees final salary"<<salary<<endl;
    cout<<"======================================="<<endl;
}

int main(){
    employeeDetails();
    calculateOvertimePay();
    calculateNetSalary();
    diplaySlip();
}