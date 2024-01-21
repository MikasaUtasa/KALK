#include "Calc.h"
#include <iostream>
#include <cmath>
#include <string>
#include <vector>



Calc::Calc(int system_liczbowy, int operacja, std::string liczba1, std::string liczba2) {
    Calc::System = system_liczbowy;
    Calc::Operation = operacja;
    Calc::liczba1 = liczba1;
    Calc::liczba2 = liczba2;
    Calc::pick();
    /*std::string a;
    std::string b;
    switch (system_liczbowy) {
        case 1:
            if(operacja == 1){
                std::cout << "Bin: " << convert(system_liczbowy, liczba1) << std::endl;

                break;
            } else {
                std::cout << calculate(operacja, liczba1, liczba2) << std::endl;
                break;
            }
        case 2:
            if(operacja ==1){
                std::cout << "Dec: " << convert(system_liczbowy, liczba1) << std::endl;
            } else {
                 a = convert(system_liczbowy, liczba1);
                 b = convert(system_liczbowy, liczba2);
                std::cout << calculate(operacja, a, b) << std::endl;
            }
            break;
        case 3:
            if(operacja == 1){
                std::cout << "Dec: " << convert(system_liczbowy, liczba1) << std::endl;
            }else {
                a = convert(system_liczbowy, liczba1);
                b = convert(system_liczbowy, liczba2);
                std::cout << calculate(operacja, a, b) << std::endl;
            }
            break;


    }*/
}


int Calc::pick() {
    int system_liczbowy = Calc::System;
    int operacja = Calc::Operation;
    std::string liczba1 = Calc::liczba1;
    std::string liczba2 = Calc::liczba2;
    std::string a;
    std::string b;


    switch (system_liczbowy) {
    case 1:
        if (operacja == 1) {
            std::cout << "Bin: " << convert(system_liczbowy, liczba1) << std::endl;

            break;
        }
        else {
            std::cout << calculate(operacja, liczba1, liczba2) << std::endl;
            return calculate(operacja, liczba1, liczba2);
            break;
        }
    case 2:
        if (operacja == 1) {
            std::cout << "Dec: " << convert(system_liczbowy, liczba1) << std::endl;
        }
        else {
            a = convert(system_liczbowy, liczba1);
            b = convert(system_liczbowy, liczba2);
            std::cout << calculate(operacja, a, b) << std::endl;
            return calculate(operacja, a, b);
        }
        break;
    case 3:
        if (operacja == 1) {
            std::cout << "Dec: " << convert(system_liczbowy, liczba1) << std::endl;
        }
        else {
            a = convert(system_liczbowy, liczba1);
            b = convert(system_liczbowy, liczba2);
            std::cout << calculate(operacja, a, b) << std::endl;
            return calculate(operacja, a, b);
        }
        break;


    }


}


int Calc::calculate(int op, std::string l1, std::string l2) {

    switch (op) {
    case 2:
        return std::stoi(l1) + std::stoi(l2);
    case 3:
        return std::stoi(l1) - std::stoi(l2);
    case 4:
        return std::stoi(l1) * std::stoi(l2);
    case 5:
        return std::stoi(l1) / std::stoi(l2);
    default:
        return 0;
    }

}

std::string Calc::convert(int system, std::string l1) {
    int decimalNumber = 0;
    int binaryLength = l1.length();
    switch (system) {
    case 1:
        try {
            int decimalNumber = std::stoi(l1);
            if (decimalNumber < 0) {
                throw std::invalid_argument("Negative numbers are not supported.");
            }
            std::string binaryString;
            while (decimalNumber > 0) {
                int remainder = decimalNumber % 2;
                binaryString.insert(binaryString.begin(), '0' + remainder);
                decimalNumber /= 2;
            }
            if (binaryString.empty()) {
                binaryString = "0";
            }
            return binaryString;

        }
        catch (std::invalid_argument& e) {
            std::cerr << "Error: " << std::endl;
            return "Invalid input";
        }
    case 2:

        for (int i = 0; i < binaryLength; ++i) {
            if (l1[i] == '1') {
                decimalNumber += pow(2, binaryLength - 1 - i);
            }
            else if (l1[i] != '0') {
                std::cerr << "Error: Invalid binary digit";
                return "Invalid input";
            }
        }

        return std::to_string(decimalNumber);

    case 3:
        try {
            size_t pos;
            int decimalNumber = std::stoi(l1, &pos, 16);

            if (pos != l1.length()) {
                throw std::invalid_argument("Invalid hexadecimal number.");
            }

            return std::to_string(decimalNumber);

        }
        catch (std::invalid_argument& e) {
            std::cerr << "Error: " << std::endl;
            return "Invalid input";
        }
        break;


    }
}
