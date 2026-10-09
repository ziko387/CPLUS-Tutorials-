#include <iostream>
#include <iterator>
using namespace std;

int main(){
    int student[5];
cout<<"WELCOME TO THE STUDENT ADDITION PAGE \n"<<endl;
cout<<"======================================="<<endl;
cout<<"enter the first student age"<<endl;
    cin>>student[0];
cout<<"enter the second student age"<<endl;
    cin>>student[1];
cout<<"enter the third student age"<<endl;
    cin>>student[2]; 
cout<<"enter the fourth student age"<<endl;
    cin>>student[3]; 
cout<<"enter the fifth student age"<<endl;
    cin>>student[4];
    
float sum=0;

for(int i =0;i<size(student);i++){
    sum+=student[i];

}
     cout<<"the sum of the ages are: "<<sum<<endl;   
}