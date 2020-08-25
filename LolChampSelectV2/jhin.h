#ifndef JHIN_H
#define JHIN_H
#include <iostream>
#include "champion.h"
using namespace std;


class Jhin : public Champion
{
public:
    Jhin();
    void SetQ();
    void SetW();
    void SetE();
    void SetR();
    void SetLane();
    string GetLane();
    string GetQ();
    string GetW();
    string GetE();
    string GetR();
private:
    string Q;
    string W;
    string E;
    string R;
    string lane;
};

#endif // JHIN_H
