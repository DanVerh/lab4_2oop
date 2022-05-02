#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "Complex.cpp"
#include "Complex.hpp"

TEST_CASE( "Arguments initialized") {
    Complex a;
    a.SetX(1);
    double test = a.GetX();
    REQUIRE( test == 1.0 );
}

