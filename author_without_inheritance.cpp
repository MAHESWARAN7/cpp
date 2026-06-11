#include<iostream>
using namespace std;

class author{
    protected:
    int author_id;
    string author_name;
    
    
    public:
    
    void author_info(){
  cout<<"author name is "<<author_name<<endl; 
}
    author(string author_name, int author_id){
        this->author_name=author_name;
        this->author_id=author_id;
    }
};


class book {
    public:

        int book_id;
        string book_name;\
        author *auth;                        //object inside object

         void book_info(){
        cout<<"book name is "<<book_name<<book_id<<endl; 
        auth->author_info();
    }

    book(string book_name,int book_id, author *auth ){
                                         
        this->book_name=book_name;
        this->book_id= book_id;
        this->auth=auth;

    }


};

int main(){
    author a1("mahes",10 );
    book b1("english",19, &a1);
    book b2("maths",20,&a1);
     b1.book_info();
     b2.book_info();
    
}
