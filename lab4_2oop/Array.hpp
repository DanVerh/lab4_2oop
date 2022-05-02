#pragma once
#include "Norma.hpp"

class Array:public NormaClass{
private:
    double arr[2][2];
    double result;
public:
    Array();
    Array(double, double, double, double);
    
    virtual double Norma();
};
