#include<iostream>
using namespace std;
int main (){
    int num = 7;
    int &no = num;          //alias - reference
    int copyofnum = num;

    int age = 10;
    int* ptr = &age;

    num++;

    cout<<"reference: "<<no<<endl;
    cout<<"copy : "<<copyofnum<<endl;

    cout<<"address of age: "<<&age<<endl;              //shows the physical address of the variable
    cout<<"address of that varible: "<<ptr<<endl;      
    cout<<"value strored in that address "<<ptr<<": "<<*ptr; //*ptr - de referencing operator
    
    

}