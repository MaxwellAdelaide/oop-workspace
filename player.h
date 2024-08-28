#ifndef PLAYER_H
#define PLAYER_H
#include <string>
class Player {
protected:
    std::string name;
    int health;
    int damage;
public:
    Player(const std::string& name, int health, int damage);
    virtual ~Player()=default;
    virtual void takeDamage(int damage);
    virtual std::string getName() const;
    virtual void attack(Player* opponent)=0;
};
#endif
