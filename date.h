#ifndef DATE_H
#define DATE_H
#include <iostream>
#include <string>

class Date{
    private:
    int day_;
    int month_;
    int year_;

    public:
    Date(int day, int month, int year);
    int getDay() const;
    int getMonth() const;
    int getYear() const;
    bool isValid();
    std::string printDate() const;
    };

    
#endif    

