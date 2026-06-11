#include<iostream>
using namespace std;
int fact(int n){
    if(n<=1) return 1;      // base case
    
    /*
fact(5) says: "I need to return 5 * fact(4)."
fact(4) says: "I need to return 4 * fact(3)."
fact(3) says: "I need to return 3 * fact(2)."
fact(2) says: "I need to return 2 * fact(1)."
fact(1) says: "I need to return 1 * fact(0)."
fact(0) says: "I need to return 0 * fact(-1)."
fact(-1) says: "I need to return -1 * fact(-2)."
*/

    return n*fact(n-1);
}

int main(){
    
   
   cout << fact(5);

}
