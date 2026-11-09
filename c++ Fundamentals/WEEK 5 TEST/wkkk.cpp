#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    srand(time(0));

    int Branch [3][5][10];
    for(int i= 0 ; i<3;i++){
        for(int j =0 ;j<5;j++){
            for(int k =0 ;k<10;k++){
                Branch[i][j][k]= rand() %2;
            }
        }
    }

    for(int i= 0 ; i<3;i++){
        int sum_of_occupation=0;
       // int occupation=0;
        int sum_of_vaccant=0;
       // int vaccant=0;
        for(int j =0 ;j<5;j++){
            for(int k =0 ;k<10;k++){
                if(Branch[i][j][k]==1){
                    sum_of_occupation ++;
                }else{
                    sum_of_vaccant ++;
                }
                
            }
        }
    cout<<"total occupied branches:"<<sum_of_occupation<<endl;
     cout<<"total vaccant branches:"<<sum_of_vaccant<<endl;
    }

    

}