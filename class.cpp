#include<iostream>
#include<string>
using namespace std;

class student {
    public:            // access specifier 
    int roll;          // attributes - variales inside the class 
    string name;       // attributes - variales inside the class 

    void say(){        //function inside the class
        cout<<"name "<<name<<endl;
        cout<<"roll "<<roll<<endl;
    }
    int fun(string, int );        // function decleration 

};
    int student::fun(string n, int a){       // function outside the class             // function definition
        
        cout<<n<<endl<<a<<endl;
       // return 0;
    
    }

int main(){
    student mahes;     // object - instance - data storing space 
    mahes.name= "maheswaran";
    mahes.roll=21;
    cout<<mahes.roll<<endl;

   
    mahes.say();

    cout<<mahes.fun("cpp",2);
}
