#include "irelia.h"

Irelia::Irelia()
{
    SetName("Irelia");
    SetNickName("The Blade Dancer");
    SetAttackDamage(13);
    SetHealth(80);
    SetLane();
    SetQ();
    SetW();
    SetE();
    SetR();
    SetRoleName(fighter);
    SetDiffeculty(hard);
}
void Irelia::SetQ()
{
    Q = "Bladesurge";
}
void Irelia::SetW()
{
    W = "Defiant Dance";
}
void Irelia::SetE()
{
    E = "Flawless Duet";
}
void Irelia::SetR()
{
    R = "Vanguard's Edge";
}
void Irelia::SetLane()
{
    lane = "Top";
}
string Irelia::GetLane()
{
    return lane;
}
string Irelia::GetQ()
{
    return Q;
}
string Irelia::GetW()
{
    return W;
}
string Irelia::GetE()
{
    return E;
}
string Irelia::GetR()
{
    return R;
}
