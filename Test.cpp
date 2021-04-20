#include "doctest.h"
#include "NumberWithUnits.hpp"
#include <iostream>
#include <ctime>
#include <stdexcept>
#include <string>
using namespace ariel;
using namespace std;
 //(+,=,+=,-,-=)
TEST_CASE("TRY SOME THIMGS"){
    NumberWithUnits ton(1,"ton");
    NumberWithUnits kg{1,"kg"};
    NumberWithUnits g{1000,"g"};

    CHECK_EQ(kg+g ,NumberWithUnits{2, "kg"});
    CHECK_EQ(kg, NumberWithUnits{2000,"g"} );
    CHECK_EQ(ton+kg , NumberWithUnits(1.1,"ton"));
    CHECK_EQ(ton-kg , NumberWithUnits(0.9,"ton"));
    CHECK_EQ(ton+g , NumberWithUnits(1.01,"ton"));
    CHECK_EQ(ton-g , NumberWithUnits(0.99,"ton"));
    CHECK(ton == NumberWithUnits(1000,"kg"));
    CHECK_EQ(ton+=kg , NumberWithUnits(1.1,"ton"));
    CHECK_EQ(ton-=kg , NumberWithUnits(0.9,"ton"));
    
   


}
  //(==,!=,<=,>=)
  TEST_CASE("(==,!=,<=,>=)"){
        NumberWithUnits min(1,"min");
        NumberWithUnits sec(60,"sec");
        NumberWithUnits hour(1,"hour");
        CHECK(min==sec);
        CHECK(hour!=min);
        CHECK(sec<=min);
        CHECK(hour>=min);
  }
  //(* ,*=)
  TEST_CASE("(* )"){
      NumberWithUnits USD(10, "USD");
      NumberWithUnits ILS(2, "ILS");
    USD=USD*5;
    CHECK(USD==NumberWithUnits(50.0,"USD"));
    ILS=10*ILS;
    CHECK(ILS== NumberWithUnits(20.0,"ILS"));

  }
   TEST_CASE("++,--"){
       NumberWithUnits cm(100,"cm");
       NumberWithUnits km(1,"km");
       NumberWithUnits m(100,"m");
       km=km++;
       CHECK(km==NumberWithUnits(2,"km"));
       km=++km;
       CHECK(km==NumberWithUnits(3,"km"));
    CHECK(m+cm == NumberWithUnits(101.1,"m"));
       CHECK(km+m==NumberWithUnits(3.1,"km"));
       CHECK(km+cm==NumberWithUnits(3.1,"km"));
       
   }