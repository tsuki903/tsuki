#include "Reader.h"
#include <iostream>

using namespace std;

Reader::Reader(int id, string name)
{
    this->id = id;
    this->name = name;
}

void Reader::showInfo()
{
    cout << "读者编号：" << id
         << " 姓名：" << name << endl;
}
