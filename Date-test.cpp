#include "date.h"
#include <iostream>
#include <string>

void testDate(Date& d) {
    if (d.isValid() == true) {
        std::cout << d.printDate() << " est valide" << std::endl;
    } else {
        std::cout << d.printDate() << " est invalide" << std::endl;
    }
}

int main() {
    Date d1(15, 3, 2024);
    Date d2(29, 2, 2020);
    Date d3(31, 4, 2023);
    Date d4(29, 2, 2023);
    Date d5(0, 10, 2023);
    Date d6(14, 13, 2023);

    testDate(d1);
    testDate(d2);
    testDate(d3);
    testDate(d4);
    testDate(d5);
    testDate(d6);

    return 0;
}
