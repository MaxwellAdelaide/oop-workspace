#include "player.h"
#include <iostream>
Player::Player(const std::string& name, int health, int damage)
    : name(name), health(health), damage(damage) {}
void Player::takeDamage(int damage) {
    health-=damage;
    std::cout << name << " takes " << damage << " damage. Remaining health: " << health << "\n";
}
std::string Player::getName() const {
    return name;
}