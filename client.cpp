#include "client.h"
#include <iostream>
#include <string>

Client::Client(std::string id, std::string nom, std::string prenom, Reservation booking): id_(id), nom_(nom), prenom_(prenom), booking_(booking) {}

std::string Client::getId() const{
    return id_;
}

std::string Client::getNom() const{
    return nom_;
}

std::string Client::getPrenom() const{
    return prenom_;
}

Reservation Client::getBooking() const{
    return booking_;
}