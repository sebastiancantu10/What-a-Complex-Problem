#include "complex.hpp"

#include <string>
#include <iostream>
#include <cmath>
using namespace std;

// constructor
ComplexNumber::ComplexNumber(float real, float imaginary) {
    realNumber = real;
    imaginaryNumber = imaginary;
}

// addition
ComplexNumber ComplexNumber::add(const ComplexNumber &other) {
    float finalReal = realNumber + other.realNumber;
    float finalImaginary = imaginaryNumber + other.imaginaryNumber;

    return ComplexNumber(finalReal, finalImaginary);
}

// subtraction
ComplexNumber ComplexNumber::subtract(const ComplexNumber &other) {
    float finalReal = realNumber - other.realNumber;
    float finalImaginary = imaginaryNumber - other.imaginaryNumber;

    return ComplexNumber(finalReal, finalImaginary);
}

// negation
ComplexNumber ComplexNumber::negate() {
    return ComplexNumber(-realNumber, -imaginaryNumber);
}

// magnitude
float ComplexNumber::magnitude() {
    return sqrt(realNumber * realNumber + imaginaryNumber * imaginaryNumber);
}

// conjugate
ComplexNumber ComplexNumber::conjugate() {
    return ComplexNumber(realNumber, -imaginaryNumber);
}

// return real part
float ComplexNumber::real() {
    return realNumber;
}

// return imaginary part
float ComplexNumber::imaginary() {
    return imaginaryNumber;
}

// print number
void ComplexNumber::prettyPrint() {

    cout << realNumber << " + " << imaginaryNumber << "i";
}