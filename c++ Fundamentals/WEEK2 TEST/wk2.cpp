#include<iostream>
using namespace std;

int main(){
    string student_name;
    int student_marks;
    string Grade;
    string remarks;

    cout<<"WELCOME TO THE STUDENT GRADE CALCULATOR \n"<<endl;
    cout<<"=================================== \n"<<endl;
    cout<<"enter the student name:"<<endl;
    cin>>student_name;
    cout<<"enter the student marks:"<<endl;
    cin>>student_marks;

    if(student_marks>=70 && student_marks<=100){
        Grade = 'A';
        remarks="Good job ,aim higher";
    }else if(student_marks>=60 && student_marks<=69){
        Grade = 'B';
        remarks="Good job and keep it up";
    }else if(student_marks>=50 && student_marks<=59){
        Grade = 'C';
        remarks="avarage from you, hou have a potential of being higher";
    }else if(student_marks>=40 && student_marks<=49){
        Grade='D';
        remarks="poor performance pull up your socks!!!!";
    }else if(student_marks<40){
        Grade='E';
        remarks="this is a poor performance from you pull up your socks and work extra hard!!! ";cout<<student_name<<endl;
    }else{
        cout<<"invalid marks please enter the student marks correctly"<<endl;
    }

    cout<<"STUDENT RESULTS DETAILS \n"<<endl;
    cout<<"=========================="<<endl;
    cout<<"student name: "<<student_name<<endl;
    cout<<"student marks: "<<student_marks<<endl;
    cout<<"student grade: "<<Grade<<endl;
    cout<<"Remarks: "<<remarks<<endl;

    cout<<"========================="<<endl;

}