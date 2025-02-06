#include "combat_medic.hpp"

CombatMedic::CombatMedic(int health, int damage) : Soldier(health, damage){}

void CombatMedic::heal(Unit &target) //we have just implemented the pure virtual function
{
     int currentHealth = target.get_health(); //If current health is bigger than 0, the target should be healed. 
     if(currentHealth > 0){ //in other words: the target should be alive to be healed - and not dead
    target.set_health(currentHealth + 20);}   
}