#ifndef CAITLYN_H
#define CAITLYN_H
#include <iostream>
#include "champion.h"
using namespace std;


class Caitlyn : public Champion
{
public:
    Caitlyn();
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

#endif // CAITLYN_H
