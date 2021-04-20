
#include <iostream>
#include <fstream>
#include <map>
#include "NumberWithUnits.hpp"
using namespace std;
namespace ariel{
            NumberWithUnits n(0,"0");
             void  NumberWithUnits::read_units(ifstream& units_file){}
        //(+,=,+=,-,-=)
             NumberWithUnits& operator+(const NumberWithUnits& a, const NumberWithUnits& b){
                 return n;
                 }
             NumberWithUnits& operator-(const NumberWithUnits& a, const NumberWithUnits& b){
                 return n;
             }
             NumberWithUnits& operator+=(NumberWithUnits& a, const NumberWithUnits& b){
                 return a;
             }
             NumberWithUnits& operator-=(NumberWithUnits& a, const NumberWithUnits& b){
                 return a;
             }
             NumberWithUnits& operator+(const NumberWithUnits& a){
                 return n;
             }
             NumberWithUnits& operator-(const NumberWithUnits& a){
                 return n;
             }
        //(==,!=,<=,>=)
             bool operator<=(const NumberWithUnits& a, const NumberWithUnits& b){
                 return true;
             }
             bool operator==(const NumberWithUnits& a, const NumberWithUnits& b){
                 return true;
             }
             bool operator!=(const NumberWithUnits& a, const NumberWithUnits& b){
                 return true;
             }
            bool operator>=(const NumberWithUnits& a, const NumberWithUnits& b){
                 return true;
             }
             bool operator<(const NumberWithUnits& a, const NumberWithUnits& b){
                 return true;
             }
             bool operator>(const NumberWithUnits& a, const NumberWithUnits& b){
                 return true;
             }
        //(* ,*=)
             NumberWithUnits& operator*( NumberWithUnits& b ,double a){
                 return n;
             }
         
             NumberWithUnits& operator*(double a,  NumberWithUnits& b){
                 return n;
             }
       
        
             NumberWithUnits& operator++( NumberWithUnits& a){
                 return n;
             }     
             NumberWithUnits& operator--( NumberWithUnits& a){
                 return n;
             }    
             NumberWithUnits& operator++( NumberWithUnits& a, int){
                 return n;
             }         
             NumberWithUnits& operator--( NumberWithUnits& a, int){
                 return n;
             }     
        
             int comp(const NumberWithUnits& a, const NumberWithUnits& b){
                 return 0;
             }
        //(input,output)
             std::ostream& operator<< (std::ostream& output, const NumberWithUnits& c){
                 return output;
             }
             std::istream& operator>> (std::istream& input , NumberWithUnits& c){
                 return input;
             }


}
