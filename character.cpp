#include "character.h"

Character::Character(std::string name) {
    this->setName(name);
};

void Character::setName(std::string name) {
    this->name = name;
};