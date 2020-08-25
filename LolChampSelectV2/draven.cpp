#include "draven.h"

Draven::Draven()
{
    SetName("Draven");
    SetNickName("The Glorious Executioner");
    SetAttackDamage(10);
    SetHealth(74);
    SetLane();
    SetQ();
    SetW();
    SetE();
    SetR();
    SetRoleName(marksman);
    SetDiffeculty(expert);
}
void Draven::SetQ()
{
    Q = "Spinning Axe";
}
void Draven::SetW()
{
    W = "Blood Rush";
}
void Draven::SetE()
{
    E = "Stand Aside";
}
void Draven::SetR()
{
    R = "Whirling Death";
}
void Draven::SetLane()
{
    lane = "Bot";
}
string Draven::GetLane()
{
    return lane;
}
string Draven::GetQ()
{
    return Q;
}
string Draven::GetW()
{
    return W;
}
string Draven::GetE()
{
    return E;
}
string Draven::GetR()
{
    return R;
}
