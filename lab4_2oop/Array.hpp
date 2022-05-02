#pragma once
#include "Norma.hpp"

class Array:public NormaClass{
private:
    double arr[2][2];
    double result;
public:
    void SetArr(const double a, const double b, const double c, const double d) { arr[0][0] = a; arr[0][1] = b; arr[1][0] = c; arr[1][1] = d; }
    
    virtual double Norma();
};
