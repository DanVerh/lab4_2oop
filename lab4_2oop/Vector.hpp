#pragma once
#include "Norma.hpp"

class Vector:public NormaClass{
private:
    double vector[10];
    double result;
    //double n1, n2, n3, n4, n5, n6, n7, n8, n9, n10;
public:
    /*void SetN1(const double b){ n1 = b; }
    void SetN2(const double b){ n2 = b; }
    void SetN3(const double b){ n3 = b; }
    void SetN4(const double b){ n4 = b; }
    void SetN5(const double b){ n5 = b; }
    void SetN6(const double b){ n6 = b; }
    void SetN7(const double b){ n7 = b; }
    void SetN8(const double b){ n8 = b; }
    void SetN9(const double b){ n9 = b; }
    void SetN10(const double b){ n10 = b; }*/
    void SetVector(double a1, double a2, double a3, double a4, double a5, double a6, double a7, double a8, double a9, double a10);
    
    /*double GetN1() const { return n1; }
    double GetN2() const { return n1; }
    double GetN3() const { return n3; }
    double GetN4() const { return n4; }
    double GetN5() const { return n5; }
    double GetN6() const { return n6; }
    double GetN7() const { return n7; }
    double GetN8() const { return n8; }
    double GetN9() const { return n9; }
    double GetN10() const { return n10; }*/
    
    virtual double Norma();
};


