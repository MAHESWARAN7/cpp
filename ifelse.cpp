#include<iostream>
using namespace std;
int main(){

    int age =13;
    int day =2;
    if(age<18){
        std::cout<<"u r child"<<endl;
    }
    
    else if(age>60){
        cout<<"u r super senior"<<endl;
    }
    else if(age>18){
        cout<<"u are adult"<<endl;
    }

    
    else{
    cout<<"invalid"; } // {} no need{} when there is one statement


    (age>18)  ?  cout<<"u r adult"<<endl  :  cout<<"u r child"<<endl;  // one line (ternary operators)


            // switch case


switch(day){
    case 1:
    cout<<"mon"<<endl;
    break;
    case 2:
    cout<<"tue"<<endl;      //if there is no break there is a fall through 
    break;
    default:
    cout<<"invalid";
}

                 // while loop (entry  control loop)

int n = 10;
int i = 1;
int a = 1;
while( i <=n){         // condition
    cout<<"hi\n";
    cout<<i<<endl;
    i++;                // important (updation)
}

          // do while loop (exit control loop)
do{
    cout<<"\n"<<a<<endl;
    a++;
}while(a<=n && true);


char c;
do{
    cout<<"enter name :";
    cin>>c;
    cout<<"u entered : "<<c<<endl;
}while (c!='q');

}

