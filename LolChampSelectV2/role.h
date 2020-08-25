#ifndef ROLE_H
#define ROLE_H
#include <iostream>
using namespace std;

class Role
{
public:
    enum level
    {
        easy, moderate, hard, expert
    };
    enum roles
    {
        assasin, fighter, mage, marksman, support, tank
    };
    Role();
    void SetRoleName(roles rolname);
    void SetDiffeculty(level diffeculty);
    string GetRoleName();
    string GetDiffeculty();
    double GetDiffecultyValue();
private:
    roles roleName;
    level diffeculty;
};

#endif // ROLE_H
