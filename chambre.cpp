#include "chambre.h"
#include <string>
#include <iostream>

Chambre::Chambre(int number, std::string type, int price) : number_(number), type_(type), price_(price) {}

int Chambre::getNumber() const{
    return number_;
}

std::string Chambre::getType() const{
    return type_;
}

int Chambre::getPrice() const{
    return price_;
}

void Chambre::setPrice(int val){
    price_ = val;
}