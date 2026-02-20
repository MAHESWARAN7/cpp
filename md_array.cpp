#include<iostream>
using namespace std;
int main (){
    int arr1 [3][3]= {{1,2,3},
               {4,5,6,},
               {7,8,9}};

    int row = sizeof(arr1)/sizeof(arr1[0]);
    int col = sizeof(arr1[0])/sizeof(arr1[0][0]);


    cout<<row<<"rows"<<endl;
    cout<<col<<"columns"<<endl;

    for(int i=0 ; i<row ; i++){
        for(int j=0 ; j<col ; j++){
            cout<<arr1[i][j];
        }cout<<endl;
    }
    cout<<&row; // address of that variable
return 0;
}