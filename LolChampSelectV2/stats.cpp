#include "stats.h"

stats::stats()
{

}
int stats::GetAttackDamage()
{
    return baseAttackDamage + attackDamage;
}
int stats::GetHealth()
{
    return baseHealth + health;
}
void stats::SetAttackDamage(int attackDamage)
{
    this->attackDamage = attackDamage;
}
void stats::SetHealth(int health)
{
    this->health = health;
}
