//ifndef KALKUALTOR_CALC_H
//#define KALKUALTOR_CALC_H


#include <string>

class Calc {
public:
    int calculate(int op, std::string l1, std::string l2);
    int pick();
    std::string convert(int system, std::string l1);
    Calc(int system_liczbowy, int operacja, std::string liczba1, std::string liczba2);
    int System, Operation;
    std::string liczba1;
    std::string liczba2;

private:

    int bin_to_dec(int binary_number);
    int hex_to_dec(int hex_number);


};

//#endif //KALKUALTOR_CALC_H