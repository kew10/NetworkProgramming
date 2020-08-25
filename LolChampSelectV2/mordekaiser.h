#ifndef MORDEKAISER_H
#define MORDEKAISER_H
#include <iostream>
#include "champion.h"
using namespace std;


class Mordekaiser : public Champion
{
public:
    Mordekaiser();
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

#endif // MORDEKAISER_H
