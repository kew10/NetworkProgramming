#ifndef DRAVEN_H
#define DRAVEN_H
#include <iostream>
#include "champion.h"
using namespace std;


class Draven : public Champion
{
public:
    Draven();
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

#endif // DRAVEN_H
