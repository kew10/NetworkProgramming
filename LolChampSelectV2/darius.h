#ifndef DARIUS_H
#define DARIUS_H
#include <iostream>
#include "champion.h"
using namespace std;


class Darius : public Champion
{
public:
    Darius();
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

#endif // DARIUS_H
