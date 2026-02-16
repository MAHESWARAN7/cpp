#include<iostream>
using namespace std;

int main(){
    
    int a;
    int b; // implicit type conversion 

    cout<<"enter num1: ";
    cin>>a;
    cout<<"enter num2: ";
    cin>>b;

    cout<< "size of a: " <<sizeof(a)<<"bytes"<<endl;

    cout<< "addition: "<<a+b<<endl;
    cout<< "sub: "<<a-b<<endl;
    cout<< "divide: "<<float(a)/b<<endl;
    cout<< "reminder: "<<a%b<<endl;
    cout<< "a :"<< ++a<<endl;              //pre increment 
    a++;
    cout<<a;

    


    

    

    
}