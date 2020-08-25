#include "leblanc.h"

LeBlanc::LeBlanc()
{
    SetName("LeBlanc");
    SetNickName("The Deceiver");
    SetAttackDamage(15);
    SetHealth(28);
    SetLane();
    SetQ();
    SetW();
    SetE();
    SetR();
    SetRoleName(mage);
    SetDiffeculty(expert);
}
void LeBlanc::SetQ()
{
    Q = "Sigil of Malice";
}
void LeBlanc::SetW()
{
    W = "Distortion";
}
void LeBlanc::SetE()
{
    E = "Ethereal Chains";
}
void LeBlanc::SetR()
{
    R = "Mimic";
}
void LeBlanc::SetLane()
{
    lane = "Mid";
}
string LeBlanc::GetLane()
{
    return lane;
}
string LeBlanc::GetQ()
{
    return Q;
}
string LeBlanc::GetW()
{
    return W;
}
string LeBlanc::GetE()
{
    return E;
}
string LeBlanc::GetR()
{
    return R;
}
