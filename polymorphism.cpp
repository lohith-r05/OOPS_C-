/*
    polymorphism->
        1) COMPLILE TIME POLYMORPHISM
            a) Function Overloading
            b) Operator Overloading
        2) RUNTIME POLYMORPHISM
            a) Function Overriding
*/ 

// -> COMPILATION TIME POLYMORPHISM:

#include <bits/stdc++.h>
using namespace std;
// Function Overloading
void print(int i) {
    cout << "Integer: " << i << endl;
}   
void print(double d) {
    cout << "Double: " << d << endl;
}
void print(string s) {
    cout << "String: " << s << endl;
}
// Operator Overloading
    class Complex {
        public:
            int real, imag;
            Complex(int r, int i) : real(r), imag(i) {}
            Complex operator + (const Complex& c) {
                return Complex(real + c.real, imag + c.imag);
            }
            // return complex(1+3 , 2+4)...
            void display() {
                cout << real << " + " << imag << "i" << endl;
            }
    };
int main() {
    print(5);          // Calls print(int)
    print(3.14);      // Calls print(double)
    print("Hello");   // Calls print(string)

    Complex c1(1, 2), c2(3, 4); // real and imag are splitted.
    Complex c3 = c1 + c2; // Uses overloaded + operator
    // c3 goes in like this: c3 = c1.operator+(c2);
    c3.display(); // Displays: 4 + 6i

    return 0;
}