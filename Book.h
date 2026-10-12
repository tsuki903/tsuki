#ifndef BOOK_H
#define BOOK_H

#include <string>
using namespace std;

class Book
{
private:
    int id;
    string name;
    bool borrowed;

public:
    Book(int id, string name);

    void borrowBook();
    void returnBook();

    void showInfo();

    int getId();
    bool isBorrowed();
};

#endif
