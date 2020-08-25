#include "role.h"

Role::Role()
{

}
void Role::SetRoleName(roles roleName)
{
    this->roleName = roleName;
}
void Role::SetDiffeculty(level diffeculty)
{
    this->diffeculty = diffeculty;
}
string Role::GetRoleName()
{
    if(roleName == 0)
    {
        return "assasin";
    }
    if(roleName == 1)
    {
        return "fighter";
    }
    if(roleName == 2)
    {
        return "mage";
    }
    if(roleName == 3)
    {
        return "marksman";
    }
    if(roleName == 4)
    {
        return "support";
    }
    if(roleName == 5)
    {
        return "tank";
    }
}
string Role::GetDiffeculty()
{
    if(diffeculty == 0)
    {
        return "easy";
    }
    if(diffeculty == 1)
    {
        return "moderate";
    }
    if(diffeculty == 2)
    {
        return "hard";
    }
    if(diffeculty == 3)
    {
        return "expert";
    }

}
double Role::GetDiffecultyValue()
{
    if(diffeculty == 0)
    {
        return 3.7;
    }
    if(diffeculty == 1)
    {
        return 3.8;
    }
    if(diffeculty == 2)
    {
        return 3.9;
    }
    if(diffeculty == 3)
    {
        return 4;
    }

}
