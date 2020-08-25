#ifndef YASOU_H
#define YASOU_H
#include <iostream>
#include "champion.h"
using namespace std;

class Yasou : public Champion
{
public:
    Yasou();
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

#endif // YASOU_H
