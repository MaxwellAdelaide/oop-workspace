#include "wizard.h"
#include <iostream>
Wizard::Wizard(const std::string& name, int health, int mana)
    : Player(name, health, mana), mana(mana) {}
void Wizard::attack(Player* opponent) {
    int damage=mana;
std::cout << name << " casts a spell on " << opponent->getName() << " for " << damage << " damage.\n";
    opponent->takeDamage(damage);
}