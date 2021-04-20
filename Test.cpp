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
    // +=
    CHECK(a + b == NumberWithUnits(1251, "kg"));
    CHECK(b + a == NumberWithUnits(1.251, "ton"));
    CHECK(a + c == NumberWithUnits(51.1, "kg"));
    CHECK(c + a == NumberWithUnits(51100, "g"));
    CHECK(b + c == NumberWithUnits(1.2001, "ton"));
    CHECK(c + b == NumberWithUnits(1200100, "g"));
    // -
    CHECK(a - b == NumberWithUnits(-1149, "kg"));
    CHECK(b - a == NumberWithUnits(1.149, "ton"));
    CHECK(a - c == NumberWithUnits(50.9, "kg"));
    CHECK(c - a == NumberWithUnits(-50900, "g"));
    CHECK(b - c == NumberWithUnits(1.1999 "ton"));
    CHECK(c - b == NumberWithUnits(-1199990, "g"));
    // +=
    // CHECK(a += NumberWithUnits{2, "km"} == NumberWithUnits(3, "km"));
    // CHECK(b += NumberWithUnits{100, "m"} == NumberWithUnits(300, "m"));
    // CHECK(c += NumberWithUnits{20, "cm"} == NumberWithUnits(50, "cm"));
    // // -=
    // CHECK(a -= NumberWithUnits{3, "km"} == NumberWithUnits(2, "km"));
    // CHECK(b -= NumberWithUnits{300, "m"} == NumberWithUnits(100, "m"));
    // CHECK(c -= NumberWithUnits{50, "cm"} == NumberWithUnits(20, "cm"));
}
