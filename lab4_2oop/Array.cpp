#include "Array.hpp"
#include <math.h>

Array::Array(){
    arr[0][0] = 0;
    arr[0][1] = 0;
    arr[1][0] = 0;
    arr[1][1] = 0;
}

Array::Array(double a, double b, double c, double d){
    arr[0][0] = a;
    arr[0][1] = b;
    arr[1][0] = c;
    arr[1][1] = d;
}

double Array::Norma(){
    result = abs(arr[0][0]);
    for(int i=0; i<2; i++)
        for(int j=0; j<2; j++)
        if(abs(arr[i][j]) > result)
            result = abs(arr[i][j]);
    return result;
}
