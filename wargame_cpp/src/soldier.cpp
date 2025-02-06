#include "soldier.hpp"

Soldier::Soldier(int health, int damage) : Unit(health), damage(damage) {}

void Soldier::attack(Unit &target) //we have just implemented the pure virtual function
{
    target.take_hit(damage);//soldier can attack target with damage
}
void Soldier::heal(Unit &target)
{
 int currentHealth = target.get_health(); //we have jusst implemented the pure virtual function
    target.set_health(currentHealth); //Soldier gets healed
}
