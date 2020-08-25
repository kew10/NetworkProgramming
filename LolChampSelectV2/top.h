#ifndef TOP_H
#define TOP_H
#include <iostream>
#include "darius.h"
#include "mordekaiser.h"
#include "irelia.h"
using namespace std;


class Top : public Darius, public Mordekaiser, public Irelia
{
public:
    Top();
};

#endif // TOP_H
