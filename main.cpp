#include <iostream>
#include "Book.h"
#include "Reader.h"
#include "Library.h"

using namespace std;

int main()
{
    // 创建图书对象
    Book book1(1, "C++程序设计");
    Book book2(2, "数据结构");

    // 创建读者对象
    Reader reader1(1001, "张三");

    // 创建图书馆对象
    Library library;

    // 添加图书
    library.addBook(book1);
    library.addBook(book2);

    // 显示图书
    cout << "=== 图书列表 ===" << endl;
    library.showBooks();

    // 显示读者
    cout << "\n=== 读者信息 ===" << endl;
    reader1.showInfo();

    // 借书
    cout << "\n=== 借书 ===" << endl;
    library.borrowBook(1);

    // 再次显示
    library.showBooks();

    // 还书
    cout << "\n=== 还书 ===" << endl;
    library.returnBook(1);

    library.showBooks();

    return 0;
}
