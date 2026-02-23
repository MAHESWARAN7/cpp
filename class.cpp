#include<iostream>
using namespace std;

class Students {        // eg: BLUE PRINT 
     
    public:            //access specifier
    
    int roll;          //atribiutes
    string name;       //atribiutes
    // int a;
    // int b;
    
    void show(){
        cout<<"name "<<name<<endl;
        cout<<"roll "<<roll<<endl;
        
    }
    void showw(int, string);
    Students(int a, string b ){
        
        
        cout<<"constuctors"<<endl;
    }

};
 void Students::showw(int roll, string name){
        cout<<"namee "<<name<<endl;
        cout<<"rolll "<<roll<<endl;

    }

int main (){
    
    Students nos;     // object -instance
    nos.name="mahes";
    nos.roll=7;
    cout<<nos.name<<endl;

    Students nums;
    nums.name="waran";
    nums.roll = 21;
    cout<<nums.roll<<endl;

    nos.show();
    nums.show();
    
    nos.showw(8,"nmanm");
    Students con;
    
}
