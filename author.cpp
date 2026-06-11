#include<iostream>
using namespace std;

class author{
    protected:
    int author_id;
    string author_name;
    
    
          void author_info(){
        cout<<"author name is "<<author_name<<endl; 
    }
    author(string author_name, int author_id){
          this->author_name=author_name;
          this->author_id=author_id;
    }
};


class book : public author{
    public:

        int book_id;
        string book_name;

         void book_info(){
        cout<<"book name is "<<book_name<<endl; 
        author_info();
    }

    book(string book_name,int book_id, string author_name, int author_id )
    : author(author_name,author_id)                                       // calling the base class constructors 
    {
        this->book_name=book_name;
        this->book_id= book_id;

    }


};

int main(){
    book b("mahes",19,"ram",10 );
     b.book_info();
    // b.author_info();
}
