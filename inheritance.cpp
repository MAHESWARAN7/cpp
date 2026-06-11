#include <iostream>
#include <string>
using namespace std;
class parent {
  protected:
   string name;
   int age;
   void display_parent(){
    cout<<name<<age<<endl;
   }
} ;   
class father {        //base class
   protected:
   string name="shanmugam";
   int age=50;
   void display_father(){
    cout<<name<<age<<endl;
   }
};       
class mother {
  public:
   string name="jayanthi";
   int age=44;
   void display_mother(){
    cout<<name<<age<<endl;
   }
};    
class child : public father,public mother {   // multiple inheritance   child class- derived class
  public:
  string name="mahes";
   int age=19;
   void display_child(){
    cout<<name<<age<<endl;
   }
};
class grandchild1 : child{       // multilevel inheritance (father->child->grandchild)
  public:
  void display_grandchild(){
    display_father();
    display_child();
    
  }
};
class grandchild2 : child{      // hierarchical (child->)
  public:                                           //->grandchild1
  void display_grandchild2(){                       //->grandchild2
    display_father();
    display_mother();
    display_child();
    
  }
};

int main(){
  // parent p;
  // p.name="mahes";
  // p.age=19;
  // p.display_parent();
  grandchild2 c;
  c.display_grandchild2();

}
   
/*
Inheritance - Methods , Atributes
 types -

 single   inheritance 
 multipe 
 multilevel 
 hierarchical
 hybrid      - combination of(single   inheritance 
                             multipe 
                             multilevel 
                             hierarchical)

*/