#include <iostream>
#include <cmath>
using namespace std;
/* 
#include <cstdio>
#include <vector>
#include <algorithm>


int main() {
    int a[3]; 
    int  size = sizeof(a)/sizeof(a[0]);
    for(int i=0;i<size;i++){
        cin>>a[i];
    }
    
    for(int j=0;j<size;j++){
        cout<<a[j];
    }
    return 0;
}
*/

/*int main (){
    int n,copy,rev=0;
    cin>>n;
    if(n<0 || (n%10==0 && n==0)){
      return 0;}

      copy = n;

      while(copy>0){
        rev=rev*10;
        rev=rev+(copy%10);
        copy /= 10; 
        
      }
      cout<<rev;


}*/

class Solution {
public:
    bool isPalindrome(int x) {

        if((x<0)||  (x%10==0 && x!= 0)){
            return false;
        }
        int rev=0;

        while(x>rev){
            
            rev=rev*10;
            rev=rev+(x%10);
            x /= 10;
            cout << "Step: x is now " << x << " | rev is now " << rev << endl;
        }
        cout << "Final Check: Does " << x << " == " << rev << "?" << endl;
        return (x == rev) || (x == rev / 10);
        
    }
};

int main(){
    
    Solution abc;
    
    int no ;//=1001;
    cin>>no;

    bool ans = abc.isPalindrome(no);
    cout<<boolalpha<<ans;
}