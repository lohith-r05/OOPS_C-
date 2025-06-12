#include <iostream>
using namespace std;

class addition {
private:
    int a;
    float b;
public:
    addition(int a, float b) {
        this->a = a;
        this->b = b;
    }

    // Overload + operator
    addition operator+(const addition& other) {
        return addition(this->a + other.a, this->b + other.b);
    }
    /*
    addition operator+(const addition& other)
This defines how the + operator behaves when used between two addition objects. 
'other' is the right-hand side of the + operation.
'this' refers to the left-hand side object (the one that calls the function).
    */

    // Overload << operator for output
    friend ostream& operator<<(ostream& out, const addition& obj) {
        out << obj.a << " " << obj.b;
        return out;
    }
    // watch logic first tamil video for overloading << operator.
};

int main() {
    addition add1(1, 1.4);
    addition add2(2, 2.7);
    addition result = add1 + add2;
    cout << result; // Output: 3 4
}
