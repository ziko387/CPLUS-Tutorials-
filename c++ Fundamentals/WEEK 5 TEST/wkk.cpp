#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    srand(time(0));
int branch [5][10];

for (int i =0 ; i<5;i++){
    for (int j=0;j<10;j++){
        branch[i][j] == rand() %2;
    }

}

for(int i =0;i<5;i++){
int occupied=0;
int vaccant=0;
for(int j =0; j<10 ;j++){
    if(branch[i][j] ==1){
        occupied++;
    }else{
        vaccant ++;
    }
    
}
cout<<"floor:"<<i+1<<endl;
cout<<"occupied:"<<occupied<<endl;
cout<<"vacant:"<<vaccant<<endl;

}
return 0;

}


