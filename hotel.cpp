#include "chambre.h"
#include "hotel.h"
#include <vector>
#include <iostream>
#include <string>

Hotel::Hotel(int id, std::string name, std::string city, std::vector<Chambre> rooms) : id_(id), name_(name), city_(city), rooms_(rooms) {}

int Hotel::getId() const{
    return id_;
}

std::string  Hotel::getName() const{
    return name_;
}

std::string Hotel::getCity() const{
    return city_;
}

std::vector<Chambre> Hotel::getRooms() const{
    return rooms_;
}

void Hotel::addRoom(const Chambre& room){
    rooms_.push_back(room);
}

bool Hotel::delRoom(int idRoom){
    for (int i = 0; i < rooms_.size(); i++) {
        if (rooms_[i].getId() == idRoom){
            rooms_.erase(rooms_.begin() + i);
            return true; 
        }
    }
    return false;
}
