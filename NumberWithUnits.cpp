#include "NumberWithUnits.hpp"
namespace ariel{
    static void read_units(std::ifstream &file_name){};
    NumberWithUnits& operator+= (const NumberWithUnits a){};
    NumberWithUnits& operator+ (){};
    NumberWithUnits& operator++(){};
    const NumberWithUnits operator++(int){};
    friend NumberWithUnits operator- (const NumberWithUnits& a ,const NumberWithUnits& b){};
    NumberWithUnits& operator-= (const NumberWithUnits a){};
    NumberWithUnits& operator- (){};
    NumberWithUnits& operator--(){};
    const NumberWithUnits operator--(int a){};
    friend bool operator== (const NumberWithUnits& a, const NumberWithUnits& b){};
    friend bool operator!= (const NumberWithUnits& a, const NumberWithUnits& b){};
    friend bool operator<= (const NumberWithUnits& a, const NumberWithUnits& b){};
    friend bool operator< (const NumberWithUnits& a, const NumberWithUnits& b){};
    friend bool operator> (const NumberWithUnits& a, const NumberWithUnits& b){};
    friend bool operator>= (const NumberWithUnits& a, const NumberWithUnits& b){};
    friend const NumberWithUnits operator* (const NumberWithUnits& a, const NumberWithUnits& b){};
    friend const NumberWithUnits operator* (const double& a, const NumberWithUnits& b){};
    friend std::ostream& operator<< (std::ostream& os, const NumberWithUnits& a){};
    friend std::istream& operator>> (std::istream& is, const NumberWithUnits& a){};

}