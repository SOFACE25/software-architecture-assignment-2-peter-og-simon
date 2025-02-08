#include "combat_medic.h"

void combat_medic_heal(Unit *self, Unit *target)
{
    if (unit_get_health(target) < 0)
    {
        printf("He is gone...");
    }
    else
    {
        printf("Hang in there!");
        unit_set_health(target, unit_get_health(target) + 10);
    }
}

void make_combat_medic(CombatMedic *self, int health, int damage)
{
    make_soldier(&self->inherited, health, damage);
    self->inherited.inherited.vt->heal_target = combat_medic_heal;
}

//ln 56 refers to a line in unit.c the function "void _unit_heal_target". 
//We've made our changes in unit.c. in the virtual function for "void unit_heal_target(Unit *self, Unit *target)"
//We then have polymorphism, as it should be a general rule each time the unit_heal_target "spell" is being used