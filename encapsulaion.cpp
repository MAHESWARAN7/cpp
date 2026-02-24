#include <iostream>
#include <string>
using namespace std;

class Data{
   private :
   string name;
   int age;

    public:
    Data (string name, int age){
        this->name=name;
        this->age=age;
        cout<<"name "<<name<<" age "<<age<<endl;
    }
    void display(){
        cout<<age<<endl;
    }
};
int main(){
    Data students("mahes",18);
    students.display();
   // cout<<students.name;
}

/*
PILLARS OF OOP - 4
Encapsulation - data/attributes & functions/methods -single entity - class
              - restrict the access of the object - attributes

inheritance

polymorphism

abstraction
*/