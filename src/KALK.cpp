#include <iostream>
//#include "Calc.h"
#include "lib/Calc.h"
#include <cmath>
#include <string>


int main() {

    int system_liczbowy;
    int op;
    std::string liczba1;
    std::string liczba2;



    std::cout << "Hello, World!" << std::endl;

    std::cout << "1: Konwersja" << std::endl
              << "2: +" << std::endl
              << "3: -" << std::endl
              << "4: *" << std::endl
              << "5: /" << std::endl;
        std::cin >> op;

    std::cout << "Wybierz system liczbowy:" << std::endl;
    std::cout << "1: Dziesietny" << std::endl
            <<"2: Binarny" << std::endl
            <<"3: Hexadecymalny" << std::endl;
    std::cin >> system_liczbowy;

    std::cout << "Podaj pierwsza liczbe: " << std::endl;
    std::cin >> liczba1;
    std::cout << std::endl;
    if(op == 1){
        liczba2 = std::to_string(0);
    } else {
        std::cout << "Podaj druga liczbe: " << std::endl;
        std::cin >> liczba2;
    }
int wynik;


Calc(system_liczbowy, op, liczba1, liczba2);
//std::cout << wynik << std::endl;


    return 0;
}