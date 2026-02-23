#include<iostream>
using namespace std;
int main (){
    
    int age = 18;
    int* ptr ;  
    ptr = new int;  //"Go to the Heap (the computer's massive pool of free memory) and claim some space for me."
    *ptr = 18;
    cout<<*ptr<<endl;

    // DMA in arrays

    int num ;
    cout<<"enter no. of items :";
    cin>>num;
    
    int* items = new int[num];
    //cout<<"enter nos. :";
    if(num != 0 && num <0){
        cout<<"enter nos. :";
    for(int i = 0; i<num ; i++){
        cin>>items[i];
    }
     for(int j = 0; j<num ; j++){
        cout<<items[j]<<" ";
    }}

    else {
        cout<<"invalid";
    }


    
}