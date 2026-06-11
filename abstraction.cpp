#include<iostream>
using namespace std;

class remote {
    public:
    virtual void on() =0;     // when we use pure virtual function it meant the abstract class
     
};

class LG : public remote{
    public:
    void on() override{
        cout<<"lg tv remote"<<endl;
    }
};

class samsung : public remote{
    public:
    void on() override{
        cout<<"samsung tv remote"<<endl;
    }
};

int main(){
    remote *r = new samsung();
    r->on();
    
    r = new LG();
    r->on();

    
}

