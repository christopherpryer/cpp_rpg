#pragma once
#include <string>
#include <iostream>

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
        Character();

        std::string getName();

    private:
        std::string name;
        
    protected:
        Inventory inventory;

        std::string getNameViaCmd();
        void setName(std::string name);
};