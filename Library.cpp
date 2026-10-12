#include "Library.h"
#include <iostream>

using namespace std;

void Library::addBook(Book book)
{
    books.push_back(book);
}

void Library::showBooks()
{
    for (auto &book : books)
    {
        book.showInfo();
    }
}

void Library::borrowBook(int id)
{
    for (auto &book : books)
    {
        if (book.getId() == id)
        {
            book.borrowBook();
            return;
        }
    }

    cout << "没有找到这本书！" << endl;
}

void Library::returnBook(int id)
{
    for (auto &book : books)
    {
        if (book.getId() == id)
        {
            book.returnBook();
            return;
        }
    }

    cout << "没有找到这本书！" << endl;
}
