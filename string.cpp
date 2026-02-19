#include<iostream>
#include<string>
using namespace std;

int main(){

    string firstname = "mahes";
    string lastname = "waran";

    cout<<firstname+" "+lastname<<endl;  // string concatination

    cout<< firstname.append(lastname)<<endl;

    cout<< firstname.size()<<endl; // to find size

    cout<< firstname.length()<<endl;

    lastname[2] = 'a';
    cout<<lastname<<endl;

    cout<<firstname.at(2)<<endl;

    string name;
    
    cout<<"enter full name : ";
    getline(cin,name);                  //insted cin>> name; to ignore white space
    cout<<"full name: "<<name;

   // string name
    
}