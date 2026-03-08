#include <complex>
#include <string>
#include <iostream>
using namespace std;

class ComplexNumber {
    private:
        float realNumber;
        float imaginaryNumber;

    public:
        // constructor
        ComplexNumber(float real, float imaginary);

        // math
        ComplexNumber add(const ComplexNumber& other);
        ComplexNumber subtract(const ComplexNumber& other);
        ComplexNumber negate();

        float magnitude();

        ComplexNumber conjugate();

        float real();
        float imaginary();

        void prettyPrint();
};
