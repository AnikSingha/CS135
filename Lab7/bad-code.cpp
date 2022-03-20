#include <iostream>
  using namespace std;
  
  class Complex
  {
  private:
  float real;
  float imag;
  public:
  Complex(): real(0), imag(0){ }
  void input()
  {
  cout << "Enter real and imaginary parts respectively: ";
  cin >> real;
  cin >> imag;
  }
  
  // Operator overloading
  Complex operator - (Complex c2)
  {
  Complex temp;
  temp.real = real - c2.real;
  temp.imag = imag - c2.imag;
  
  return temp;
  }
  
  void output()
  {
  if(imag < 0)
  cout << "Output Complex number: "<< real << imag << "i";
  else
  cout << "Output Complex number: " << real << "+" << imag << "i";
  }
  };