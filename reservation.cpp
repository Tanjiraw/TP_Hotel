#include "reservation.h"
#include <iostream>
#include <string>
#include "date.h"

Reservation::Reservation(Date date, std::string idHotel,int nbNuits, std::string idChambre, std::string idClient, int montant):
date_(date), idHotel_(idHotel), nbNuits_(nbNuits), idChambre_(idChambre), idClient_(idClient), montant_(montant) {}

Date Reservation::getDate() const{
    return date_;
}

std::string Reservation::getIdHotel() const{
    return idHotel_;
}

std::string Reservation::getIdChambre() const{
    return idChambre_;
}

std::string Reservation::getIdClient() const{
    return idClient_;
}

int Reservation::getMontant() const{
    return montant_;
}

bool Reservation::changeDate(){
    int jour;
    int mois;
    int annee;
    std::cout << "Donnez un jour " << std::endl;
    std::cin >> jour;
    std::cout << "Donnez un mois " << std::endl;
    std::cin >> mois;
    std::cout << "Donnez une année " << std::endl;
    std::cin >> annee;
    Date d(jour, mois, annee);
    if(d.isValid() == true){
        date_ = d;
        std::cout << "Fait !" << std::endl; 
        return true;
    }
    else{
        std::cout << "Invalide ! " << std::endl;

        return false;
    }
}

bool Reservation::changeNuits(int val){
    if(val < 1){
        return false;
    }
    else{
        nbNuits_ = val;
        return true;
    }
}

int Reservation::total(){
    return nbNuits_ * montant_;
}