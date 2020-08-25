#ifndef MID_H
#define MID_H
#include <iostream>
#include "yasou.h"
#include "zed.h"
#include "leblanc.h"
using namespace std;


class Mid : public Yasou, public Zed, public LeBlanc
{
public:
    Mid();
};

#endif // MID_H
