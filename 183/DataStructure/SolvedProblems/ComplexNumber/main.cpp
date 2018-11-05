#include <iostream>
#include "ComplexNumber.cpp"

using namespace std;

int main(){
    double real, imaginary;

    cout << "Enter a Real Number: ";
    cin >> real;

    cout << "Enter an Imaginary Number: ";
    cin >> imaginary;

    Complex polas(real, imaginary);
    polas.Print();

    return 0;
}
