#include<iostream>
using namespace std;
    struct {              //structure definition
        int no;           //structures members
        char name ;

    }dat,person;                 //structure variable
    
    
    struct employee{           //named structure

        int num;
        string id ;

    };

    enum day{
        sun,
        mon,
        tue
    };

    
int main(){
                dat.no=9;
                dat.name='a';

                person.no=7;
                
                employee emp;
                emp.id="mahes";     
    


                cout<<dat.no<<endl;
                cout<<dat.name<<endl;

                cout<<person.no<<endl;

                cout<<emp.id<<endl;

                day today = tue;
                cout<<today<<endl;


    }       