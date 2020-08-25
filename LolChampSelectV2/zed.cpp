#include "zed.h"

Zed::Zed()
{
    SetName("Zed");
    SetNickName("The Master of Shadows");
    SetAttackDamage(13);
    SetHealth(84);
    SetLane();
    SetQ();
    SetW();
    SetE();
    SetR();
    SetRoleName(assasin);
    SetDiffeculty(hard);
}
void Zed::SetQ()
{
    Q = "Razor Shuriken";
}
void Zed::SetW()
{
    W = "Living Shadow";
}
void Zed::SetE()
{
    E = "Shadow Slash";
}
void Zed::SetR()
{
    R = "Death Mark";
}
void Zed::SetLane()
{
    lane = "Mid";
}
string Zed::GetLane()
{
    return lane;
}
string Zed::GetQ()
{
    return Q;
}
string Zed::GetW()
{
    return W;
}
string Zed::GetE()
{
    return E;
}
string Zed::GetR()
{
    return R;
}
