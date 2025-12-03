#include "date.h"
#include <iostream>
#include <string>

Date::Date(int day, int month, int year) : day_(day), month_(month), year_(year) {}

int Date::getDay() const{
    return day_;
}

int Date::getMonth() const{
    return month_;
}

int Date::getYear() const{
    return year_;
}

std::string Date::printDate() const{
    return std::to_string(day_) + " / " + std::to_string(month_) + " / " + std::to_string(year_);
}

bool Date::isValid(){
    if(month_ < 1 || month_ > 12){
        return false;
    }
    int nbDays[] = {31,28,31,30,31,30,31,31,30,31,30,31};
    if(year_ % 4 == 0){
        if(year_ % 400 == 0){
            nbDays[1] = 29;
        }
        if(year_ % 100 != 0){
            nbDays[1] = 29;
        }
    }
    if(day_ < 1 || day_ > nbDays[month_ - 1]){
        return false;
    }
    return true;
}