#include "caitlyn.h"

Caitlyn::Caitlyn()
{
    SetName("Caitlyn");
    SetNickName("The Sheriff of Piltover");
    SetAttackDamage(10);
    SetHealth(81);
    SetLane();
    SetQ();
    SetW();
    SetE();
    SetR();
    SetRoleName(marksman);
    SetDiffeculty(hard);
}
void Caitlyn::SetQ()
{
    Q = "Piltover Peacemaker";
}
void Caitlyn::SetW()
{
    W = "Yordle Snap Trap";
}
void Caitlyn::SetE()
{
    E = "90 Caliber Net";
}
void Caitlyn::SetR()
{
    R = "Ace in the Hole";
}
void Caitlyn::SetLane()
{
    lane = "Bot";
}
string Caitlyn::GetLane()
{
    return lane;
}
string Caitlyn::GetQ()
{
    return Q;
}
string Caitlyn::GetW()
{
    return W;
}
string Caitlyn::GetE()
{
    return E;
}
string Caitlyn::GetR()
{
    return R;
}
