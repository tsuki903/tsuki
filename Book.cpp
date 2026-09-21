#include "Book.h"
#include <iostream>

using namespace std;

Book::Book(int id, string name)
{
    this->id = id;
    this->name = name;
    borrowed = false;
}

void Book::borrowBook()
{
    if (borrowed)
        cout << "这本书已经被借走了！" << endl;
    else
    {
        borrowed = true;
        cout << "借书成功！" << endl;
    }
}

void Book::returnBook()
{
    borrowed = false;
    cout << "还书成功！" << endl;
}

void Book::showInfo()
{
    cout << "编号：" << id
         << " 书名：" << name
         << " 状态：" << (borrowed ? "已借出" : "可借") 
         << endl;
}

int Book::getId()
{
    return id;
}

bool Book::isBorrowed()
{
    return borrowed;
}