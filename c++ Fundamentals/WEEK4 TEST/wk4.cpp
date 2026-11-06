#include <iostream>
#include <string>
#include<vector>
using namespace std;

int main (){
   vector< string> employes_name;
    vector<double> basic_salary,bonus,total_salary;
    int i;
    int j;
    int number_of_employes=5;

    for (i=0; i<=number_of_employes;i++)
    {
        string e_name;
        double b_salary,b,t_salary;

        cout<<"welcome to the employee details"<<endl;

        cout<<"enter the employes name"<<endl;
        getline(cin,e_name);
        cout<<"enter the  basic salary"<<endl;
        cin>> b_salary;

        cin.ignore();

        employes_name.push_back(e_name);
        basic_salary.push_back(b_salary);

        b =0.05 *b_salary;
        t_salary = b_salary + b;

        bonus.push_back(b);
        total_salary.push_back(t_salary);

        
    
}
for(j=0;j<=employes_name.size();j++){
    cout<<"========================"<<endl;

    cout<<"employees name: "<<employes_name[j]<<endl;
    cout<<"basic salary: "<<basic_salary[j]<<endl;
    cout<<"bonus:  "<<bonus[j]<<endl;
    cout<<"total salary: "<<total_salary[j]<<endl;
    
    cout<<"=========================="<<endl;
}

}