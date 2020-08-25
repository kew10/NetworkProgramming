#include "jhin.h"

Jhin::Jhin()
{
    SetName("Jhin");
    SetNickName("The Virtuoso");
    SetAttackDamage(17);
    SetHealth(56);
    SetLane();
    SetQ();
    SetW();
    SetE();
    SetR();
    SetRoleName(marksman);
    SetDiffeculty(moderate);
}
void Jhin::SetQ()
{
    Q = "Dancing Grenade";
}
void Jhin::SetW()
{
    W = "Deadly Flourish";
}
void Jhin::SetE()
{
    E = "Captive Audience";
}
void Jhin::SetR()
{
    R = "Curtain Call";
}
void Jhin::SetLane()
{
    lane = "Bot";
}
string Jhin::GetLane()
{
    return lane;
}
string Jhin::GetQ()
{
    return Q;
}
string Jhin::GetW()
{
    return W;
}
string Jhin::GetE()
{
    return E;
}
string Jhin::GetR()
{
    return R;
}
