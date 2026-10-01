#include<iostream>

int main(){
int age ;
std::cout<<"enter your age"<<std::endl; 
std::cin>>age;

if (age>=0 && age<=17 )
{ 
    std::cout<<"AGE DETAILS"<<std::endl;
    std::cout<<"=========================="<<std::endl;
    std::cout<<"you are young"<<std::endl;
    std::cout<<"==========================="<<std::endl;
}else if (age>=18 && age <=25)  
{
    std::cout<<"AGE DETAILS"<<std::endl;
    std::cout<<"=========================="<<std::endl;
    std::cout<<"you are young adult"<<std::endl;
    std::cout<<"==========================="<<std::endl;
    
}else if(age >25){
    std::cout<<"AGE DETAILS"<<std::endl;
    std::cout<<"=========================="<<std::endl;
    std::cout<<"you are an older adult"<<std::endl;
    std::cout<<"==========================="<<std::endl;
}else{
    std::cout<<"AGE DETAILS"<<std::endl;
    std::cout<<"=========================="<<std::endl;
    std::cout<<"invalid age details"<<std::endl;
    std::cout<<"==========================="<<std::endl;
}

return 0;

}