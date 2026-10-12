#ifndef READER_H
#define READER_H

#include <string>
using namespace std;

class Reader
{
private:
    int id;
    string name;

public:
    Reader(int id, string name);

    void showInfo();
};

#endif
