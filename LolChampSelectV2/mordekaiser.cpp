#include "mordekaiser.h"

Mordekaiser::Mordekaiser()
{
    SetName("Mordekaiser");
    SetNickName("The Iron Revenant");
    SetAttackDamage(11);
    SetHealth(75);
    SetLane();
    SetQ();
    SetW();
    SetE();
    SetR();
    SetRoleName(mage);
    SetDiffeculty(moderate);
}
void Mordekaiser::SetQ()
{
    Q = "Obliterate";
}
void Mordekaiser::SetW()
{
    W = "Indestructible";
}
void Mordekaiser::SetE()
{
    E = "Death's Grasp";
}
void Mordekaiser::SetR()
{
    R = "Realm of Death";
}
void Mordekaiser::SetLane()
{
    lane = "Top";
}
string Mordekaiser::GetLane()
{
    return lane;
}
string Mordekaiser::GetQ()
{
    return Q;
}
string Mordekaiser::GetW()
{
    return W;
}
string Mordekaiser::GetE()
{
    return E;
}
string Mordekaiser::GetR()
{
    return R;
}
