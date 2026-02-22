#include<iostream>
using namespace std;

int facto(int);

int main(){
    int n=5;
    int fact=1;
    for(int i = 1; i<=n; i++){
         fact*= i;
        }
        cout<<fact<<endl;
    cout<<facto(3)<<endl;
        
}
    // recursion 

int facto(int m){       
   // int m=3;
    if (m==0) {
                               //The Base Case (The Brakes)
         cout<<"m value is 0"; 
         return 1; }

         cout<<"m value "<<m<<" "<<" * fact("<<(m-1)<<")"<<endl;  
    return m*facto(m-1);  // recursion - function calling itself
}