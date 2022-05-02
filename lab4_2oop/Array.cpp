#include "Array.hpp"
#include <math.h>

double Array::Norma(){
    result = abs(arr[0][0]);
    for(int i=0; i<2; i++)
        for(int j=0; j<2; j++)
        if(abs(arr[i][j]) > result)
            result = abs(arr[i][j]);
    return result;
}
