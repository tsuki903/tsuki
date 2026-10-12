#ifndef LIBRARY_H
#define LIBRARY_H

#include "Book.h"
#include <vector>

using namespace std;

class Library
{
private:
    vector<Book> books;

public:
    void addBook(Book book);
    void showBooks();
    void borrowBook(int id);
    void returnBook(int id);
};

#endif
