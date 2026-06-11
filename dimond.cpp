#include<iostream>
using namespace std;

class A{
    public:
    void a(){
        cout<<"hello a";

    }
};

class B : virtual public A{
   
};

class C : virtual public A{
   
};

class D : public B,C{
   
};

int main(){
    D d;
    d.a();
}

