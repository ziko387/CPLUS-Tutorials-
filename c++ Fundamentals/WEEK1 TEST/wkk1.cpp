#include<iostream>
using namespace std;

int main(){
    string student_name, status;
    int theory_marks ,practical_marks;
    float Avarage_marks;

    cout<<"WELCOME TO THE DRIVING TEST RECORDS \n"<<endl;
    cout<<"=================================== \n"<<endl;
    cout<<"enter the student name:"<<endl;
    cin>>student_name;
    cout<<"enter the student theory marks:"<<endl;
    cin>>theory_marks;
    cout<<"enter the student practical marks"<<endl;
    cin>>practical_marks;

    Avarage_marks =(theory_marks + practical_marks)/2;
try
{
    if (Avarage_marks < 50)
    {
        status = "failed";
    
    }else if (Avarage_marks>=50)
    {
        status ="passed";
    }else{
        cout<<"invalid avarage marks calculated"<<endl;
    }
    
}
catch(const char*e)
{
    cout<<"error"<<e<<endl;
}

 cout<<"STUDENT RESULT DETAILS \n"<<endl;
    cout<<"===================== \n"<<endl;
    cout<<"Student name:"<<student_name<<endl;
    cout<<"Theory marks:"<<theory_marks<<endl;
    cout<<"Practical marks:"<<practical_marks<<endl;
    cout<<"Avarage marks:"<<Avarage_marks<<endl;
    cout<<"Status:"<<status<<endl;

    cout<<"END \n"<<endl;
    cout<<"======================="<<endl;

    
    

    

}