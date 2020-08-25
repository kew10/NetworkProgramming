#ifndef BOT_H
#define BOT_H
#include <iostream>
#include "draven.h"
#include "caitlyn.h"
#include "jhin.h"
using namespace std;


class Bot : public Draven, public Caitlyn, public Jhin
{
public:
    Bot();
};

#endif // BOT_H
