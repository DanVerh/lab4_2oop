#include "Complex.hpp"
#include <complex.h>
using namespace std;

double Complex::Norma(){
    result = pow(abs(z),2);
    return result;
}

