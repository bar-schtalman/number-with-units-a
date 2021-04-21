#include "NumberWithUnits.hpp"
#include "doctest.h"
using namespace std;
using namespace ariel;

NumberWithUnits a (51, "kg");
NumberWithUnits b (1.2, "ton");
NumberWithUnits c (100, "g");

ifstream units_file{"units.txt"};
TEST_CASE("checks basic arithmetic operators on weight elements")
{
    
    CHECK(a + b == NumberWithUnits(1251, "kg"));
    CHECK(b + a == NumberWithUnits(1.251, "ton"));
    CHECK(a + c == NumberWithUnits(51.1, "kg"));
    CHECK(c + a == NumberWithUnits(51100, "g"));
    CHECK(b + c == NumberWithUnits(1.2001, "ton"));
    CHECK(c + b == NumberWithUnits(1200100, "g"));
    CHECK(a - b == NumberWithUnits(-1149, "kg"));
    CHECK(b - a == NumberWithUnits(1.149, "ton"));
    CHECK(a - c == NumberWithUnits(50.9, "kg"));
    CHECK(c - a == NumberWithUnits(-50900, "g"));
    CHECK(b - c == NumberWithUnits(1.1999, "ton"));
    CHECK(c - b == NumberWithUnits(-1199990, "g"));
    

}
NumberWithUnits d (1, "hour");
NumberWithUnits e (2, "min");
NumberWithUnits f (100, "sec");
TEST_CASE("checks basic arithmetic operators on time elements")
{
    
    CHECK(d + e == NumberWithUnits(1.02, "hour"));
    CHECK(e + d == NumberWithUnits(62, "min"));
    CHECK(d + f == NumberWithUnits(1.014, "hour"));
    CHECK(f + d == NumberWithUnits(3700, "sec"));
    CHECK(e + f == NumberWithUnits(3.4, "min"));
    CHECK(f + e == NumberWithUnits(1200100, "g"));
    CHECK(d - e == NumberWithUnits(-1149, "kg"));
    CHECK(e - d == NumberWithUnits(1.149, "ton"));
    CHECK(d - f == NumberWithUnits(50.9, "kg"));
    CHECK(f - d == NumberWithUnits(-50900, "g"));
    CHECK(e - f == NumberWithUnits(1.1999, "ton"));
    CHECK(f - e == NumberWithUnits(-1199990, "g"));
    

}
