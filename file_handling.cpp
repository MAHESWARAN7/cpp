#include<iostream>
#include<fstream>
using namespace std;

int main(){
    string text;
    ifstream file("sample.txt");          //  ofstream file("sample.txt",ios::app);  for write in file and append

     //file>>text;
     while(getline(file,text)){
         cout<<text<<endl;

     }
    file.close();
}

// write in file -ofstream 
// append - ios::app
// read from file - ifstream
// for both read and write - fstream