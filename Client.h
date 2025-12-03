#ifndef CLIENT_H
#define CLIENT_H
#include <string>
#include <iostream>
#include "reservation.h"

class Client{
    private:
    std::string id_;
    std::string nom_;
    std::string prenom_;
    Reservation booking_; 

    public:
    Client(std::string id, std::string nom, std::string prenom, Reservation booking);
    std::string getId() const;
    std::string getNom() const;
    std::string getPrenom() const;
    Reservation getBooking() const;
};

#endif