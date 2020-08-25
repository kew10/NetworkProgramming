#ifndef CHAMPION_H
#define CHAMPION_H
#include <iostream>
#include "role.h"
#include "name.h"
#include "stats.h"
using namespace std;

class Champion : public Role, public Name, public stats
{
public:
    Champion();// this is the constructor
    ~Champion();// this is the deconstructor
    virtual void SetLane()=0;// here you set the lane of the champion
    virtual void SetQ()=0;// here you set the q ability of the champion
    virtual void SetW()=0;// here you set the w ability of the champion
    virtual void SetE()=0;// here you set the e ability of the champion
    virtual void SetR()=0;// here you set the r ability of the champion
    virtual string GetLane()=0;// here you get  the lane of the champion
    virtual string GetQ()=0;// here you get  the q ability of the champion
    virtual string GetW()=0;// here you get  the w ability of the champion
    virtual string GetE()=0;// here you get  the e ability of the champion
    virtual string GetR()=0;// here you get  the r ability of the champion
};

#endif // CHAMPION_H
