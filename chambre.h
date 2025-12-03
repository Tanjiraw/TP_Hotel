#ifndef CHAMBRE_H
#define CHAMBRE_H
#include <string>
#include <iostream>

class Chambre{
    private:
    int number_;
    std::string type_;
    int price_;

    public:
    Chambre(int number, std::string type, int price);
    int getNumber() const;
    std::string getType() const;
    int getPrice() const;
    void setPrice(int val);
};

#endif