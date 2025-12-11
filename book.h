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
    Book(string title, string author, string isbn);
    ~Book();
    string getTitle();
    string getAuthor();
    string getIsbn();
};
#endif 