#include<iostream>
using namespace std;
int main (){
    int num = 100;
    int num2 = 10;
    int num3 = 20;
    char grade= 'a';


    // assignment operators (+=, -=, *=, /=,==, %=)

   num += 1;  //addition assignment 
   cout << num<<endl;

   // comparison operators (<, >, <=, >=, != )

   cout<<(num2 != 100)<<" not equal"<<endl; // inside paranthesis()

   // logical operators  (and(&&), or(||), not(!))

   cout<<(num3==20 && grade=='a')<<endl; // and

   cout<<(!grade=='a')<<endl;//not 

   cout<<(num3 == 2 || grade == 'b'); // or



}