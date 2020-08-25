#include "darius.h"

Darius::Darius()
{
    SetName("Darius");
    SetNickName("The Hand of Noxus");
    SetAttackDamage(14);
    SetHealth(82);
    SetLane();
    SetQ();
    SetW();
    SetE();
    SetR();
    SetRoleName(tank);
    SetDiffeculty(easy);
}
void Darius::SetQ()
{
    Q = "Decimate";
}
void Darius::SetW()
{
    W = "Crippling Strike";
}
void Darius::SetE()
{
    E = "Apprehend";
}
void Darius::SetR()
{
    R = "Noxian Guillotine";
}
void Darius::SetLane()
{
    lane = "Top";
}
string Darius::GetLane()
{
    return lane;
}
string Darius::GetQ()
{
    return Q;
}
string Darius::GetW()
{
    return W;
}
string Darius::GetE()
{
    return E;
}
string Darius::GetR()
{
    return R;
}
