#ifndef BOOK
#define BOOK
using namespace std;
#include <iostream>
class Book{
    private:
    string title;
    string author;
    string isbn;
    public:
    Book(string title, string author, string isbn):title(title),author(author),isbn(isbn){}
    ~Book(){cout<<"Destroying book: "<<title<<endl;}
    string getTitle(){return title;}
    string getAuthor(){return author;}
    string getIsbn(){return isbn;}
};
#endif