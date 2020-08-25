#ifndef LEBLANC_H
#define LEBLANC_H
#include <iostream>
#include "champion.h"
using namespace std;

class LeBlanc : public Champion
{
public:
    LeBlanc();
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

#endif // LEBLANC_H
