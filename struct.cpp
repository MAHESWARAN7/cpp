#include<iostream>
using namespace std;
    struct {              //structure definition
        int no;           //structures members
        char name ;       //structures members

    }dat,person;                 //structure variable
    
    
    struct employee{           //named structure - custom datatype

        int num;
        string id ;

    };

    enum day{              //a user-defined data type used to assign meaningful names to a set of related integer constants 
        sun, //0
        mon, //1
        tue  //2
    };

    
int main(){
                dat.no=9;
                dat.name='a';

                person.no=7;
                
                employee emp;
                emp.id="mahes"; 
                emp.num=7;    
    


                cout<<dat.no<<endl;
                cout<<dat.name<<endl;



                cout<<person.no<<endl;

                cout<<emp.id<<endl;
                cout<<emp.num<<endl;

                day today = sun;
                if(today == day::sun) cout<<"holiday"<<endl;
                cout<<today<<endl;


    }       