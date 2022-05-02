#include "Complex.hpp"
#include <complex.h>
using namespace std;

Complex::Complex(){
    x = 0;
    y = 0;
    z = complex(x,y);
}

Complex::Complex(double a, double b){
    x = a;
    y = b;
    z = complex(x,y);
}

double Complex::Norma(){
    result = pow(abs(z),2);
    return result;
}
