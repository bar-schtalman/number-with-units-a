#include "NumberWithUnits.hpp"
#include "doctest.h"
using namespace std;
using namespace ariel;

NumberWithUnits a (1, "kg");
NumberWithUnits b (1, "ton");
NumberWithUnits c (1, "g");

ifstream units_file{"units.txt"};
TEST_CASE("checks basic arithmetic operators on distance elements")
{
    // +
    CHECK(a + b == NumberWithUnits(1.2, "km"));
    CHECK(b + a == NumberWithUnits(1200, "m"));
    CHECK(a + c == NumberWithUnits(1.0003, "km"));
    CHECK(c + a == NumberWithUnits(100030, "cm"));
    CHECK(b + c == NumberWithUnits(200.3, "m"));
    CHECK(c + b == NumberWithUnits(20030, "cm"));
    // -
    CHECK(a - b == NumberWithUnits(0.8, "km"));
    CHECK(b - a == NumberWithUnits(800, "m"));
    CHECK(a - c == NumberWithUnits(0.997, "km"));
    CHECK(c - a == NumberWithUnits(99970, "cm"));
    CHECK(b - c == NumberWithUnits(199.7, "m"));
    CHECK(c - b == NumberWithUnits(19070, "cm"));
    // +=
    CHECK(a += NumberWithUnits{2, "km"} == NumberWithUnits(3, "km"));
    CHECK(b += NumberWithUnits{100, "m"} == NumberWithUnits(300, "m"));
    CHECK(c += NumberWithUnits{20, "cm"} == NumberWithUnits(50, "cm"));
    // -=
    CHECK(a -= NumberWithUnits{3, "km"} == NumberWithUnits(2, "km"));
    CHECK(b -= NumberWithUnits{300, "m"} == NumberWithUnits(100, "m"));
    CHECK(c -= NumberWithUnits{50, "cm"} == NumberWithUnits(20, "cm"));
}

