#pragma once
#include <string>

using namespace std;

struct Item {
    std::string name;
    int weight;
};

struct Inventory {
    Item items[10];
};

class Character {

    public:
        Character(std::string name);

        std::string name;
        
    protected:
        Inventory inventory;

        void setName(std::string name);
};