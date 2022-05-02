#include "Vector.hpp"
#include <math.h>
#include <vector>
using namespace std;

void Vector::SetVector(double a1, double a2, double a3, double a4, double a5, double a6, double a7, double a8, double a9, double a10){
    vector[0] = a1; vector[1] = a2; vector[2] = a3; vector[3] = a4; vector[4] = a5; vector[5] = a6; vector[6] = a7; vector[7] = a8; vector[8] = a9; vector[9] = a10;
}

double Vector::Norma(){
    for(int i = 0; i < 10; i++){
        result += pow(vector[i], 2);
    }
    return sqrt(result);
}
