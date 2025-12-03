#ifndef HOTEL_H
#define HOTEL_H
#include "chambre.h"
#include <iostream>
#include <string>
#include <vector>

class Hotel{
    private:
    int id_;
    std::string name_;
    std::string city_;
    std::vector<Chambre> rooms_;

    public:
    Hotel(int id, std::string name, std::string city, std::vector<Chambre> room);
    int getId() const;
    std::string getName() const;
    std::string getCity() const;
    std::vector<Chambre> getRooms() const;
    void addRoom(const Chambre& room);
    bool delRoom(int idRoom);
};

#endif