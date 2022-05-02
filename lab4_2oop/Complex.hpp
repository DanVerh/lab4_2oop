#pragma once
#include "Norma.hpp"
#include <complex.h>

using namespace std;

class Complex:public NormaClass{
private:
    double x, y;
    complex<double>z;
    double result;
public:
    void SetX(const double a){ x = a; }
    void SetY(const double a){ y = a; }
    void SetZ(){ z = complex(x,y); }
    
    double GetX() const { return x; }
    double GetY() const { return y; }
    complex<double> GetZ() const { return z; }
    
    virtual double Norma();
    
};
