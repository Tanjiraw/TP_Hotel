#include "chambre.h"
#include <string>
#include <iostream>

Chambre::Chambre(int number, std::string type, int price) : number_(number), type_(type), price_(price) {}

int getNumber() const{
    return number_;
}

std::string getType() const{
    return type_;
}

int getPrice() const{
    return price_;
}