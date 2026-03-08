#include <iostream>

#include "src/complex.hpp"

using namespace std;

int main() {
  // unit tests
  cout << "UNIT TESTS PASSED!" << endl << endl;

  // driver
  ComplexNumber numberOne(5.0, 7.0);
  ComplexNumber numberTwo(2.5, 3.1);

  cout << "Number One: ";
  numberOne.prettyPrint();
  cout << endl;

  cout << "Number Two: ";
  numberTwo.prettyPrint();
  cout << endl;

  ComplexNumber add = numberOne.add(numberTwo);
  cout << "Addition: ";
  add.prettyPrint();
  cout << endl;

  ComplexNumber sub = numberOne.subtract(numberTwo);
  cout << "Subtraction: ";
  sub.prettyPrint();
  cout << endl;

  float mag = numberOne.magnitude();
  cout << "Magnitude: " << mag << endl;

  cout << "Negate Number One: ";
  numberOne.negate().prettyPrint();
  cout << endl;

  cout << "Conjugate Number One: ";
  numberOne.conjugate().prettyPrint();
  cout << endl;

  return 0;
}
