#ifndef COMPLEXNUMBER_H_INCLUDED
#define COMPLEXNUMBER_H_INCLUDED

class Complex{
    public:
        Complex();
        Complex(double, double);
        Complex operator*(Complex);
        void Print();
    private:
        double real, imaginary;
};

#endif // COMPLEXNUMBER_H_INCLUDED
