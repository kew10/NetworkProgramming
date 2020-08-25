#ifndef IRELIA_H
#define IRELIA_H
#include <iostream>
#include "champion.h"
using namespace std;


class Irelia : public Champion
{
public:
    Irelia();
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

#endif // IRELIA_H
