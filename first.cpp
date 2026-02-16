#include <iostream>
#include <iomanip>
#include<string>


using namespace std;


int main(){


int phno= 861032;
const int dob = 20070107;
char letter = 65;
float cgpa;
double pi ;
string name = "mahes waran";
bool yes = true;

cout<<"enter ur cgpa: ";
cin>>cgpa;

cout<<"enter value of pi : ";
cin>>pi;
cout<<fixed<<setprecision(10);

cout<< "u r cgpa is "<<cgpa<<endl;
cout<<"value : "<<pi<<endl;

    

    cout << "Hello \a \", World!\" "<< endl;
    cout<< "i  "<< letter  <<  2026-2007<<" years old"<<endl;
    std::cout<< "phno is "<<phno << "\n my dob is "<<dob<<"\n i am "<<name<<endl ;
    cout<<yes;
    
    return 0;
}
