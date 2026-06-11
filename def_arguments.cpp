#include<iostream>
using namespace std;

void num(int num=2){  // if we give a default argument ,it must be in last 
   cout<<num+5<<endl;

}
void call_val(int &num1, int num2){      // with & - call by reference and without & - call by valve (a copy)
    num1+=10;
    num2+=1;
    cout<<num1<<endl;      
    cout<<num2<<endl;
    
}
int main(){
    int num1=6;
    int num2=2;

    num(5);
    num();
    call_val(num1,num2);
    cout<<num1<<endl;
    cout<<num2;
}