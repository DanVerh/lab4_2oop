#pragma once
#include "Norma.hpp"

class Vector:public NormaClass{
private:
    double vector[10];
    double result;
public:
   
    Vector();
    Vector(double, double , double , double , double , double , double , double , double , double );
    
    virtual double Norma();
};

