
#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
using namespace std;
namespace ariel{
        class NumberWithUnits{
        
        private:
             double key;
             string type;
        
        
        public:
            NumberWithUnits(double v, string s) : key(v),type(s){}
            static void read_units(ifstream& units_file);
        //(+,=,+=,-,-=)
            friend NumberWithUnits& operator+(const NumberWithUnits& a, const NumberWithUnits& b);
            friend NumberWithUnits& operator-(const NumberWithUnits& a, const NumberWithUnits& b);
            friend NumberWithUnits& operator+=(NumberWithUnits& a, const NumberWithUnits& b);
            friend NumberWithUnits& operator-=(NumberWithUnits& a, const NumberWithUnits& b);
            friend NumberWithUnits& operator+(const NumberWithUnits& a);
            friend NumberWithUnits& operator-(const NumberWithUnits& a);
        //(==,!=,<=,>=)
            friend bool operator<=(const NumberWithUnits& a, const NumberWithUnits& b);
            friend bool operator==(const NumberWithUnits& a, const NumberWithUnits& b);
            friend bool operator!=(const NumberWithUnits& a, const NumberWithUnits& b);
            friend bool operator>=(const NumberWithUnits& a, const NumberWithUnits& b);
            friend bool operator<(const NumberWithUnits& a, const NumberWithUnits& b);
            friend bool operator>(const NumberWithUnits& a, const NumberWithUnits& b);
        //(* ,*=)
            friend NumberWithUnits& operator*(double a,  NumberWithUnits& b);
            friend NumberWithUnits& operator*(  NumberWithUnits& b,double a);
           
        
            friend NumberWithUnits& operator++( NumberWithUnits& a);     
            friend NumberWithUnits& operator--( NumberWithUnits& a);     
            friend NumberWithUnits& operator++( NumberWithUnits& a, int);          
            friend NumberWithUnits& operator--( NumberWithUnits& a, int);     
        
            friend int comp(const NumberWithUnits& a, const NumberWithUnits& b);
        //(input,output)
            friend std::ostream& operator<< (std::ostream& output, const NumberWithUnits& c);
            friend std::istream& operator>> (std::istream& input , NumberWithUnits& c);

            
    };    
    
}
