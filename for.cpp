#include <iostream>
using namespace std;
int main(){
    
    // for loop

    int n = 1;
    for (int i = 20; i>=n; i--){


    if(i==5)
     break;         // break
    if(i==15)       //continue
     continue;

    cout<<"\n"<<i;
    }cout<<endl;


    //nested for loop

     for(int k = 1; k<=6; k++){      //outer loop

        for (int j = 1; j<= 6; j++){   //inner loop 
            cout<<k;
        }
        cout<<endl;
     }
     
    
    


}