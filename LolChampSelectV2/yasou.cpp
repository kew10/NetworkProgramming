#include "yasou.h"

Yasou::Yasou()
{
    SetName("Yasou");
    SetNickName("The Unforgiven");
    SetAttackDamage(10);
    SetHealth(23);
    SetLane();
    SetQ();
    SetW();
    SetE();
    SetR();
    SetRoleName(assasin);
    SetDiffeculty(hard);
}
void Yasou::SetQ()
{
    Q = "Steel Tempest";
}
void Yasou::SetW()
{
    W = "Wind Wall";
}
void Yasou::SetE()
{
    E = "Sweeping Blade";
}
void Yasou::SetR()
{
    R = "Last Breath";
}
void Yasou::SetLane()
{
    lane = "Mid";
}
string Yasou::GetLane()
{
    return lane;
}
string Yasou::GetQ()
{
    return Q;
}
string Yasou::GetW()
{
    return W;
}
string Yasou::GetE()
{
    return E;
}
string Yasou::GetR()
{
    return R;
}
