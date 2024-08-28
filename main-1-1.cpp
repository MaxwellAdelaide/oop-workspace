#include "wizard.h"
#include "warrior.h"
#include <iostream>
int main() {
    Wizard wizard("Gandalf", 100, 50);
    Warrior warrior("Aragorn", 120, 30, "sword");
    wizard.attack(&warrior);
    warrior.attack(&wizard);
    return 0;
}