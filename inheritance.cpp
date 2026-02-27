#include <iostream>
#include <string>
using namespace std;
class Parent {                    // 1. parent class
    //protected :
    public:
     int age =52;
     string name ="dad";

// Parent (int age,string name){
//         cout<<name<<" "<<age<<endl;
//      }
      void display_parent(){

        cout<<name<<" "<<age<<endl;
     }
};

class Mother : Parent {
         public :
        //  int agee =  44;
        //  string namee = "mother";

          void display_mother(){
                    cout<<name<<" "<<age<<endl;

         }
};

int main (){
    Parent* fa;
    Parent fam;
    Mother Queen;
    fa = &fam;
    fam.display_parent(); // cant access when Parent class is protected :
    Queen.display_mother();
    fa->display_parent();
}



/*
Inheritance - Methods , Atributes
 types -

 single   inheritance 
 multipe 
 multilevel 
 hierarchical
 hybrid 

*/