#include<iostream>
using namespace std;
int main(){
    string veg [] = {"carrot","tomato","beans"};


    int length = sizeof(veg) / sizeof(veg[0]) ;

    for(int i=0 ; i<length ; i++){
        cout<<veg[i]<<endl;
    }

    cout<<"total items : "<<length<< endl;

    for(string j: veg){             // for each loop
        cout<<j<<endl;
    }

    }
