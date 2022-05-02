#include <iostream>
#include "Norma.hpp"
#include "Complex.hpp"
#include "Vector.hpp"
#include "Array.hpp"
#include <typeinfo>
#include <complex.h>

using namespace std;

int main(){
    
    Complex complex_obj;
    complex_obj.SetX(2);
    complex_obj.SetY(3);
    complex_obj.SetZ();
    cout << complex_obj.Norma()<<endl;
    
    Vector vector1;
    vector1.SetVector(2, 2, 2, 2, 2, 2, 2, 2, 2, 2);
    cout << vector1.Norma() << endl;
    
    Array arr1;
    arr1.SetArr(1, -2, -3, -1);
    cout << arr1.Norma() << endl;
    cout << endl;
    
    NormaClass **check = new NormaClass*[3];
    check[0] = new Complex();
    check[1] = new Vector();
    check[2] = new Array();
    
    check[0]->Norma();
    check[1]->Norma();
    check[2]->Norma();
    
    Complex* pd = new Complex;
    NormaClass* pb = pd;
    
    cout << typeid(pb).name()<<endl;
    cout << typeid(*pb).name()<<endl;
    cout << typeid(pd).name()<<endl;
    cout << typeid(*pd).name()<<endl;
    
    
    return 0;
}
