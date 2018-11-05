#include<iostream>
#include "ComplexNumber.h"

using namespace std;

Complex::Complex(){
    real = 0;
    imaginary = 0;
}

Complex::Complex(double r, double i){
    real = r;
    imaginary = i;
}

Complex Complex::operator*(Complex a){
    Complex t;
    t.real = real + a.real;
    t.imaginary = imaginary + a.imaginary;
    return t;
}

void Complex::Print(){
    cout << "\nReal Number: " <<real<< endl;
    cout << "Imaginary Number: " <<imaginary<< endl;
}
