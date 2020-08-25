#ifndef ZED_H
#define ZED_H
#include <iostream>
#include "champion.h"
using namespace std;


class Zed : public Champion
{
public:
    Zed();
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

#endif // ZED_H
