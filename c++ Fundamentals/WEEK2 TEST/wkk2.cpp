#include <iostream>
using namespace std;

int main(){
    string student_name;
    int age;
    int exam_scores;
    string status;

    cout<<"WELCOME TO RUIRU TECHNICAL UNIVERSITY\n"<<endl;
    cout<<"========================================"<<endl;
    cout<<"enter your name: "<<endl;
    cin>>student_name;
    cout<<"enter your age: "<<endl;
    cin>>age;
    cout<<"enter your scores: "<<endl;
    cin>>exam_scores;

    if(age>=18){
        if(exam_scores>=50){
            status="Admitted";
        }else{
            status="Not admitted:low score";
        }
    }else{
        status="Not admitted:Underage";
    }

    cout<<"USER REPORT \n"<<endl;
    cout<<"=================="<<endl;
    cout<<"user name: "<<student_name<<endl;
    cout<<"user age: "<<age<<endl;
    cout<<"user exam_score: "<<exam_scores<<endl;
    cout<<"user status: "<<status<<endl;
    cout<<"======================="<<endl;

    
}