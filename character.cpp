#include "character.h"

Character::Character() {
    this->setName(getNameViaCmd());
};

std::string Character::getNameViaCmd() {
    std::string name;
    std::cout << "Enter the character's name: ";
    getline(cin, name);
    std::cout << "The character's name was set to: " << name << endl;
    return name;
};

void Character::setName(std::string name) {
    this->name = name;
};

std::string Character::getName() { 
    return this->name;
}