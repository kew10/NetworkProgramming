#ifndef STATS_H
#define STATS_H
#include <iostream>
using namespace std;

class stats
{
public:
    stats();
    void SetAttackDamage(int attackDamage = 0);// here you set the attackdamage of the champion
    void SetHealth(int health = 0);// here you set the health of the champion
    int GetAttackDamage();// here you get the attackdamage of the champion
    int GetHealth();// here you get the health of the champion

private:
    int attackDamage;// is the variable that save the attackdamage
    int health; // is the variable that save the health
    const int baseAttackDamage = 50; // is the variable that save the base attackdamage
    const int baseHealth = 500; // is the variable that save the base health
};

#endif // STATS_H
