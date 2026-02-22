#include <iostream>
using namespace std;

int k = 50;                // global variable

void fun(int,int,string);   //function decleration

// function overloading - function varaiables with same names
int sum(int a,int b){
    cout<<"sum"<<endl;
    int k=20;             //local variable
    cout<<k<<endl;
    return a+b;
}
int sum(int a, int b, int c){
    return a+b+c;
}
int call(int x,int &y,int z,int copy_z){
    cout<<"call"<<endl;
    cout<<"updated y : "<<y<<endl;
    //cout<<"y : "<<y<<endl;
    cout<<copy_z<<endl;
   
    return x+y;
}

int main (){
    int count = 10;
    int num = 2;
    fun(count ,num,"items");  // function calling (arguments) 

    cout<<sum(5,5)<<endl;
    cout<<sum(2,2,2)<<endl;
    
    int x =1;
    int y =10;
    int z =7;
    y= y+11; 
    int copy_z=z;
    z=z+3;   
cout<<call(x,y,z,copy_z)<<endl;
    cout<<k<<endl;
}
//output type - return type
void fun(int count ,int num, string ite){    //function definition - parameters
    cout<<ite<<" count is increased by "<<num<<", total : "<<count+num<<endl;
}