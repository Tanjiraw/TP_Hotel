#ifndef RESERVATION_H
#define RESERVATION_H
#include <string>
#include "date.h"
#include <iostream>

class Reservation{
    private:
    Date date_;
    std::string idHotel_;
    int nbNuits_;
    std::string idChambre_;
    std::string idClient_;
    int montant_;

    public:
    Reservation(Date date, std::string idHotel,int nbNuits, std::string idChambre, std::string idClient, int montant);
    Date getDate() const;
    std::string getIdHotel() const;
    std::string getIdChambre() const;
    std::string getIdClient() const;
    int getMontant() const;
    bool changeDate();
    bool changeNuits(int val);
    int total();
};

#endif