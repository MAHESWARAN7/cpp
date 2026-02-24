#include<iostream>
using namespace std;

class Name {
     public:
    string nam;
    double wt;
    
    Name (){
        cout<<"hi"; // default constructors
        
    }
    
    Name(string a, double b){
          nam = a;
          wt = b;
               cout<<nam<<endl<<b<<endl;
    }
    ~Name(){
        cout<<"destructor";
    }
    // default constructor
    Name(const Name &old_obj) {
        nam = old_obj.nam; // Copy the string
        wt = old_obj.wt;   // Copy the double
        cout << "COPY CONSTRUCTOR CALLED! Copied data from " << old_obj.nam << endl;
    }
};
int main (){
    Name hum("maheswaran",07);   // object with parantesis is called  parameterised constructors
    Name copy = hum;

    // hum.nam="mahes";
    // hum.wt=63;
    // Name();

    cout<<copy.nam<<endl; 

}



/*
costructors - 
   spl function 
   called when object is created 
   name  same as class
   no return type

types -
   default constructors
   parameterised constructors

destructors -
   spl function 
   called when object is out of scope
   ~ before the name same as class
*/