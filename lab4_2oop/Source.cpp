#include <iostream>
#include <stdio.h>
#include "Norma.hpp"
#include "Complex.hpp"
#include "Vector.hpp"
#include "Array.hpp"
#include <typeinfo>
#include <complex.h>

using namespace std;

int main(){
    NormaClass **ptr = new NormaClass*[3];
    
    cout << "Complex:" << endl;
    ptr[0] = new Complex(2, 3);
    cout << "Norma = " << ptr[0]->Norma() << endl;
    cout << "Object type: " << typeid(*ptr[0]).name()<<endl;
    cout << "Base class: " << typeid(ptr[0]).name()<<endl;
    
    cout << endl;
    
    cout << "Vector:" << endl;
    ptr[1] = new Vector(2, 2, 2, 2, 2, 2, 2, 2, 2, 2);
    cout << "Norma = " << ptr[1]->Norma() << endl;
    cout << "Object type: " << typeid(*ptr[1]).name()<<endl;
    cout << "Base class: " << typeid(ptr[1]).name()<<endl;
    
    cout << endl;
    
    cout << "Array:" << endl;
    ptr[2] = new Array(1, -2, -3, -1);
    cout << "Norma = " << ptr[2]->Norma() << endl;
    cout << "Object type: " << typeid(*ptr[2]).name()<<endl;
    cout << "Base class: " << typeid(ptr[2]).name()<<endl;
    
    return 0;
}
