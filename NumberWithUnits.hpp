#include <fstream>
#include <iostream>

namespace ariel {
    class NumberWithUnits{
        private:

        public:
        NumberWithUnits(double number, std::string unit){
        }
        static void read_units(std::ifstream &file_name);
        //overloading operators
        friend NumberWithUnits operator+ (const NumberWithUnits& a ,const NumberWithUnits& b);
        NumberWithUnits& operator+= (const NumberWithUnits a);
        NumberWithUnits& operator+ ();
        NumberWithUnits& operator++();//prefix
        const NumberWithUnits operator++(int);//postfix
    
        friend NumberWithUnits operator- (const NumberWithUnits& a ,const NumberWithUnits& b);
        NumberWithUnits& operator-= (const NumberWithUnits a);
        NumberWithUnits& operator- ();
        NumberWithUnits& operator--();//prefix
        const NumberWithUnits operator--(int a);//postfix

        friend bool operator== (const NumberWithUnits& a, const NumberWithUnits& b);
        friend bool operator!= (const NumberWithUnits& a, const NumberWithUnits& b);
        friend bool operator<= (const NumberWithUnits& a, const NumberWithUnits& b);
        friend bool operator< (const NumberWithUnits& a, const NumberWithUnits& b);
        friend bool operator> (const NumberWithUnits& a, const NumberWithUnits& b);
        friend bool operator>= (const NumberWithUnits& a, const NumberWithUnits& b);

        friend const NumberWithUnits operator* (const NumberWithUnits& a, const NumberWithUnits& b);
        friend const NumberWithUnits operator* (const double& a, const NumberWithUnits& b);

        friend std::ostream& operator<< (std::ostream& os, const NumberWithUnits& a);
        friend std::istream& operator>> (std::istream& is, const NumberWithUnits& a);


    };

}