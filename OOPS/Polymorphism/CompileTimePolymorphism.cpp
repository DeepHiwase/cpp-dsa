#include <iostream>
#include <string>

using namespace std;

// Function Overloading
class Add
{
public:
  int sum(int x, int y)
  {
    return x + y;
  }

  // int sum(int x, int y) // ❌ error if same args count & same args type
  // {
  //   return x + y;
  // }

  int sum(int x, int y, int z)
  {
    return x + y + z;
  }

  double sum(double x, double y)
  {
    return x + y;
  }
};

// Operator Overloading
class Complex
{
public:
  int real;
  int imag;

  Complex()
  {
    cout << "Complex default ctor called" << endl;
    real = imag = -1;
  }

  Complex(int r, int i) : real(r), imag(i)
  {
    cout << "Complex parameterized ctor called" << endl;
  }

  void print()
  {
    printf("[%d + i%d]\n", this->real, this->imag);
  }

  // Syntax
  // Return_Type Operator <op> (args) {
  //   // logic to perform
  //   return <>
  // }

  // A+B -> A -> operator + -> arg B -> here A is calling this function on + op so this refers to A
  Complex operator+(const Complex &B)
  {
    // this -> A instance
    Complex temp;
    temp.real = this->real + B.real;
    temp.imag = this->imag + B.imag;

    return temp;
  }

  Complex operator-(const Complex &B)
  {
    // this -> A instance
    Complex temp;
    temp.real = this->real - B.real;
    temp.imag = this->imag - B.imag;

    return temp;
  }

  bool operator==(const Complex &B)
  {
    return (this->real == B.real) && (this->imag == B.imag);
  }

  ~Complex()
  {
    cout << "Complex dtor called" << endl;
  };
};

int main()
{
  int x = 5, y = 10, z = 15;

  Add add;
  cout << add.sum(x, y, z) << endl;
  cout << add.sum(x, y) << endl;
  cout << add.sum(x, z) << endl;
  cout << add.sum(1.1, 2.3) << endl;

  Complex A(3, 3);
  A.print();
  Complex B(3, 3);
  B.print();

  // int c = a + b; this works as `+` knows how to do it -> int + int, double + double
  // Complex C = A + B; 💀 Error - `+` op don't know how to add complex + complex -> so add a function in Complex class

  Complex C = A + B;
  C.print();

  Complex D = A - B;
  D.print();

  bool isSame = 6 == 7; // same -> 1 (true), not same -> 0(false)
  cout << isSame << endl;

  bool isComplexSame = A == B; // Error if not Operator overloaded by adding one more form of it -> polymorphism -> Operator Overloading
  cout << isComplexSame << endl;

  return 0;
}