#ifndef WIZARD_H
#define WIZARD_H
#include "player.h"
class Wizard : public Player {
private:
    int mana;
public:
    Wizard(const std::string& name, int health, int mana);
    void attack(Player* opponent) override;
};
#endif