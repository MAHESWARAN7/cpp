#include<iostream>
#include<string>
using namespace std;
class con{
    public:
    string brand; 
    float engine ;
    con(string b,float e){   
       this-> brand =brand;
        engine=e;

        cout<<"hi"<<endl;
    }

    ~con(){             // distructor
        cout<<"bye"<<endl;
    }
    
    
};
int main(){
    con shift("suzuki", 1.2);
    con copy=shift;
    shift.brand= "suzuki";
     shift.engine=1.5;
    cout<<shift.brand<<endl;
    cout<<shift.engine<<endl;
    cout<<copy.brand;
  
}