#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


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
