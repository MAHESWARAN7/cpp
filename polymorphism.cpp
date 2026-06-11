#include<iostream>
using namespace std;

class remote{
    public:
    virtual void show()          // virtual used for override the functions
    //virtual void show()=0;         - pure virtual means - must override means must inheritance
    {          
        cout<<"remote"<<endl;
    }

};

class tv : public remote{
    public:
    void show() override {    // override shows the override errors
        cout<<"tv"<<endl; 
    }
};

class ac : public remote{
    public:
    void show() override{
        cout<<"ac"<<endl;
    }
};

int main(){

    remote *r;  // base class

    ac a;       //derived class
    tv t;       //derived class

    r=&a;
    r->show();
    
    r=&t;
    r->show();
}


/*
polymorphism - many forms

1. compile time - ex. (function overloading)
2. run time - ex.(function overridding )
*/